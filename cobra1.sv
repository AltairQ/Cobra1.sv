module cobra1 (
	input         clk_cpu   , // Z80 3.25 MHz clock
	input         clk_pxl   , // pixel and vram clock
	// input clk_tape,
	input         rst_n     , // reset active low
	input  [39:0] kb_state  , // raw switches state, see kb_n_tape.sv
	input         tape_input, // raw tape input, after the comparator
	input  [ 7:0] cpu_ram_di, // data from RAM
	input  [ 7:0] cpu_rom_di, // data from ROM
	input  [ 7:0] v_font_di , // data from font ROM
	input  [ 7:0] v_ram_di  , // data from VRAM (ascii buffer)
	// ------------------
	output [15:0] cpu_ram_a , // RAM address out
	output [7:0]  cpu_ram_do, // RAM data out
	output        cpu_ram_w , // RAM write signal
	//
	output [10:0] cpu_rom_a , // ROM address out
	//
	output [10:0] v_font_a  , // font ROM address out
	//
	output [10:0] v_ram_a   , // VRAM address out
	output [7:0]  v_ram_do  , // VRAM data out
	output        v_ram_w    // VRAM write signal
);

	logic [7:0] mem_dout;
	logic [7:0] mem_din;

	logic [7:0] cpu_dout;
	logic [7:0] cpu_din;

	logic [7:0] kb_dout;

	logic rd_n, wr_n;
	logic m1_n, mreq_n, iorq_n, rfsh_n, halt_n, busak_n;

	logic [15:0] addr_raw;
	logic [15:0] addr;

	logic memory_reloc_enable;

	assign addr    = memory_reloc_enable ? (addr_raw | 16'hC000 ): addr_raw;
	assign cpu_rom_a = addr_raw[10:0];
	assign cpu_ram_a = addr;

	assign cpu_ram_do = cpu_dout;

	assign cpu_ram_w = ~wr_n && ~mreq_n;

	// Assume any kind of I/O reads are forwarded to the keyboard
	assign cpu_din = (mreq_n) ? kb_dout : mem_dout;


	// Update state of the reset-relocation
	// This causes the CPU to start execution at 0xC000,
	// but is then disabled by OUT (1F), ??
	always @(posedge clk_cpu)
		begin
			if(~rst_n) begin
				memory_reloc_enable <= 1'b1;
			end else begin
				// Any I/O write to 0x1f is considered a valid trigger
				if(addr_raw[7:0] == 8'h1f && ~iorq_n && ~wr_n)
					memory_reloc_enable <= 1'b0;
			end
		end

	// Choose between ROM and RAM
	always_comb begin
		if (addr >= 16'hC000 && addr < 16'hC800)
			mem_dout = cpu_rom_di;
		else
			mem_dout = cpu_ram_di;	
	end

	kb_n_tape kb (
		.ain    (addr      ),
		.keycaps(kb_state  ),
		.tape_in(tape_input),
		.rst    (~rst_n    ),
		.clk    (clk_cpu   ),
		.dout   (kb_dout   )
	);

	tv80s topcore (
		// Outputs
		.m1_n   (m1_n    ),
		.mreq_n (mreq_n  ),
		.iorq_n (iorq_n  ),
		.rd_n   (rd_n    ),
		.wr_n   (wr_n    ),
		.rfsh_n (rfsh_n  ),
		.halt_n (halt_n  ),
		.busak_n(busak_n ),
		.A      (addr_raw),
		.dout   (cpu_dout),
		// Inputs
		.reset_n(rst_n   ),
		.clk    (clk_cpu ),
		.wait_n (1'b1    ),
		.int_n  (1'b1    ),
		.nmi_n  (1'b1    ),
		.busrq_n(1'b1    ),
		.di     (cpu_din )
	);

endmodule