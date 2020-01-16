module cobra1 (
	input         clk_cpu        , // Z80 3.25 MHz clock
	input         clk_pxl        , // pixel (and vram) clock
	// input clk_tape,
	input         rst_n          , // reset active low
	input  [39:0] kb_state       , // raw switches state, see kb_n_tape.sv
	input         tape_input     , // raw tape input, after the comparator
	input  [ 7:0] cpu_ram_di     , // data from RAM
	input  [ 7:0] cpu_rom_di     , // data from ROM
	input  [ 7:0] v_font_di      , // data from font ROM
	input  [ 7:0] v_ram_di       , // data from VRAM (ascii buffer)
	// ------------------
	output [15:0] cpu_ram_a      , // RAM address out
	output [ 7:0] cpu_ram_do     , // RAM data out
	output        cpu_ram_w      , // RAM write signal
	//
	output [10:0] cpu_rom_a      , // ROM address out
	//
	output [10:0] v_font_a       , // font ROM address out
	//
	output [10:0] v_ram_a        , // VRAM address out
	output [ 7:0] v_ram_do       , // VRAM data out
	output        v_ram_w        , // VRAM write signal
	output [ 7:0] VGA_B          ,
	output        VGA_BLANK_N    ,
	output        VGA_CLK        ,
	output [ 7:0] VGA_G          ,
	output        VGA_HS         ,
	output [ 7:0] VGA_R          ,
	output        VGA_SYNC_N     ,
	output        VGA_VS         ,
	output        tape_output_pos,
	output        tape_output_neg
);

	logic [7:0] mem_dout;

	logic [7:0] cpu_dout;
	logic [7:0] cpu_din;

	logic [10:0] v_ram_a_vga;

	logic [7:0] kb_dout;

	logic rd_n, wr_n;
	logic m1_n, mreq_n, iorq_n, rfsh_n, halt_n, busak_n;

	logic [15:0] addr_raw;
	logic [15:0] addr;

	logic memory_reloc_enable;

	// signal cpu accessing vram
	logic cpu_vram_rq;
	assign cpu_vram_rq = (~mreq_n) && (addr >= 16'hF800);

	logic v_ctrl_override; // should CPU take over VRAM control?

	// synchronise the signal into pixel clock domain
	synchroniser i_synchroniser	(
		.clk(clk_pxl), .dirty(cpu_vram_rq), .clean(v_ctrl_override)
	);

	always_comb begin
		if(v_ctrl_override) begin
			v_ram_a = addr[10:0]; // TODO maybe synchronise the address?
			v_ram_w = cpu_ram_w;
		end else begin
			v_ram_a = v_ram_a_vga;
			v_ram_w = 1'b0;
		end
	end


	assign addr      = memory_reloc_enable ? (addr_raw | 16'hC000 ): addr_raw;
	assign cpu_rom_a = addr_raw[10:0];
	assign cpu_ram_a = addr;

	assign cpu_ram_do = cpu_dout;

	assign cpu_ram_w = ~wr_n && ~mreq_n;

	// Assume any kind of I/O reads are forwarded to the keyboard
	assign cpu_din = (mreq_n) ? kb_dout : mem_dout;


	assign v_ram_do = cpu_dout;


	// Update state of the reset-relocation
	// This causes the CPU to start execution at 0xC000,
	// but is then disabled by OUT (1F), ??
	always_ff @(posedge clk_cpu)
		begin
			if(~rst_n) begin
				memory_reloc_enable <= 1'b1;
			end else begin
				// Any I/O write to 0x1f is considered a valid trigger
				if(addr_raw[7:0] == 8'h1f && ~iorq_n && ~wr_n)
					memory_reloc_enable <= 1'b0;
			end
		end

	// Choose read between ROM/VRAM/RAM
	always_comb begin
		if (addr >= 16'hC000 && addr < 16'hC800)
			mem_dout = cpu_rom_di;
		else if (addr >= 16'hF800)
			mem_dout = v_ram_di;
		else
			mem_dout = cpu_ram_di;
	end


	wire tape_output_trigger;

	assign tape_output_trigger = ~iorq_n && (addr_raw[2] & addr_raw[3] & addr_raw[4] & ~addr_raw[7]);

	tape_output i_tape_output (
		.clk_cpu        (clk_cpu            ),
		.trigger        (tape_output_trigger),
		.rst_n          (rst_n              ),
		.tape_output_pos(tape_output_pos    ),
		.tape_output_neg(tape_output_neg    )
	);



	kb_n_tape kb (
		.ain    (addr      ),
		.keycaps(kb_state  ),
		.tape_in(tape_input),
		.rst    (~rst_n    ),
		.clk    (clk_cpu   ),
		.dout   (kb_dout   )
	);

	vga_controller i_vga_controller (
		.clk_pxl    (clk_pxl    ),
		.v_font_di  (v_font_di  ),
		.v_ram_di   (v_ram_di   ),
		.tape_input (tape_input ),
		.v_ram_a    (v_ram_a_vga),
		.v_font_a   (v_font_a   ),
		.VGA_B      (VGA_B      ),
		.VGA_BLANK_N(VGA_BLANK_N),
		.VGA_CLK    (VGA_CLK    ),
		.VGA_G      (VGA_G      ),
		.VGA_HS     (VGA_HS     ),
		.VGA_R      (VGA_R      ),
		.VGA_SYNC_N (VGA_SYNC_N ),
		.VGA_VS     (VGA_VS     )
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