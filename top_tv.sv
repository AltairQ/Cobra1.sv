module top_tv(input clk, input reset, input [39:0] kb_state, input [15:0] tape_in, output [15:0] addr);
	logic [7:0] mem_dout;
	logic [7:0] mem_din;

	logic [7:0] cpu_dout;
	logic [7:0] cpu_din;

	logic [7:0] kb_dout;

	logic rd_n, wr_n;
	logic m1_n, mreq_n, iorq_n, rfsh_n, halt_n, busak_n;

	logic [15:0] addr_raw;

	logic memory_reloc_enable;

	assign addr = memory_reloc_enable ? (addr_raw | 16'hC000 ): addr_raw;
	assign mem_din = cpu_dout;

	// Assume any kind of I/O reads are forwarded to the keyboard
	assign cpu_din = (mreq_n) ? kb_dout : mem_dout;


	// Update state of the reset-relocation
	// This causes the CPU to start execution at 0xC000,
	// but is then disabled by OUT (1F), ?
	always @(posedge clk)
	begin
		if(reset) begin
			memory_reloc_enable <= 1'b1;			
		end else begin
			// Any I/O write to 0x1f is considered valid
			if(addr_raw[7:0] == 8'h1f && ~iorq_n && ~wr_n)
				memory_reloc_enable <= 1'b0;
		end
	end

	kb_n_tape kb(
		.ain(addr),
		.keycaps(kb_state),
		.tape_in(tape_in),
		.tape_th(16'd4915),
		.rst(reset),
		.clk(clk),
		.dout(kb_dout)
	);

	mem_module memory(
		.clk(clk), // clock
		.addr(addr), // mem address (8bit words)
		.data_in(mem_din), // input port
		.reset(reset),
		.mreq(~mreq_n), // memory request (=enable)
		.rd(~rd_n), // read signal
		.wr(~wr_n), // write signal
		.data_out(mem_dout)
	);

	tv80s topcore(
	// Outputs
	.m1_n(m1_n),
	.mreq_n(mreq_n),
	.iorq_n(iorq_n),
	.rd_n(rd_n),
	.wr_n(wr_n),
	.rfsh_n(rfsh_n),
	.halt_n(halt_n),
	.busak_n(busak_n),
	.A(addr_raw),
	.dout(cpu_dout),
	// Inputs
	.reset_n(~reset),
	.clk(clk),
	.wait_n(1'b1),
	.int_n(1'b1),
	.nmi_n(1'b1),
	.busrq_n(1'b1),
	.di(cpu_din)
	);

	endmodule
