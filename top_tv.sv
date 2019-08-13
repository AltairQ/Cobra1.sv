`timescale 1ns/100ps
module top_tv(input clk, input reset, output [15:0] addr);
	// input logic clk,reset;



	// logic [15:0] addr;
	logic [7:0] mem_dout;
	logic [7:0] mem_din;
	logic rd_n, wr_n;

	logic [15:0] addr_raw;

	logic memory_reloc_enable;

	assign addr = memory_reloc_enable ? (addr_raw | 16'hC000 ): addr_raw;

	always @(posedge clk)
	begin
		if(reset) begin
			memory_reloc_enable <= 1'b1;			
		end else begin
			if(~iorq_n)
				memory_reloc_enable <= 1'b0;
		end
	end


	logic m1_n, mreq_n, iorq_n, rfsh_n, halt_n, busak_n;

	mem_module memory(
		.clk(clk), // clock
		.addr(addr), // mem address (8bit words)
		.data_in(mem_din), // input port
		.reset(reset),
		.mreq(~mreq_n),
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
	.dout(mem_din),
	// Inputs
	.reset_n(~reset),
	.clk(clk),
	.wait_n(1'b1),
	.int_n(1'b1),
	.nmi_n(1'b1),
	.busrq_n(1'b1),
	.di(mem_dout)
	);


	endmodule
