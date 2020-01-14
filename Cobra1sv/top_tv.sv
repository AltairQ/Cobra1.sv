module top_tv (
	input clk_cpu,
	input rst_n,
	input [39:0] kb_state,
	input tape_input,
	output [15:0] addr
);

	logic [ 7:0] cpu_ram_di;
	logic [ 7:0] cpu_rom_di;
	logic [ 7:0] v_font_di ;
	logic [ 7:0] v_ram_di  ;
	logic [15:0] cpu_ram_a ;
	logic [ 7:0] cpu_ram_do;
	logic        cpu_ram_w ;
	logic [10:0] cpu_rom_a ;
	logic [10:0] v_font_a  ;
	logic [10:0] v_ram_a   ;
	logic [ 7:0] v_ram_do  ;
	logic        v_ram_w   ;

	assign addr = cpu_ram_a;
	assign clk_pxl = clk_cpu; // !!!

	font_rom font(
		.a  (v_font_a),
		.out(v_font_di)
	);

	monitor_rom monitor(
		.a  (cpu_rom_a),
		.out(cpu_rom_di)
	);

	ram #(.ADDR_WIDTH(16)) cpu_ram (
		.clk (clk_cpu       ),
		.a   (cpu_ram_a ),
		.din (cpu_ram_do),
		.w   (cpu_ram_w ),
		.dout(cpu_ram_di)
	);

	ram #(.ADDR_WIDTH(11)) vram (
		.clk (clk_pxl ),
		.a   (v_ram_a ),
		.din (v_ram_do),
		.w   (v_ram_w ),
		.dout(v_ram_di)
	);



	logic clk_cpu;
	logic clk_pxl;
	logic [7:0] VGA_B;
	logic VGA_BLANK_N;
	logic VGA_CLK;
	logic [7:0] VGA_G;
	logic VGA_HS;
	logic [7:0] VGA_R;
	logic VGA_SYNC_N;
	logic VGA_VS;

	
cobra1 i_cobra1 (
	.clk_cpu    (clk_cpu    ),
	.clk_pxl    (clk_pxl    ),
	.rst_n      (rst_n      ),
	.kb_state   (kb_state   ),
	.tape_input (tape_input ),
	.cpu_ram_di (cpu_ram_di ),
	.cpu_rom_di (cpu_rom_di ),
	.v_font_di  (v_font_di  ),
	.v_ram_di   (v_ram_di   ),
	.cpu_ram_a  (cpu_ram_a  ),
	.cpu_ram_do (cpu_ram_do ),
	.cpu_ram_w  (cpu_ram_w  ),
	.cpu_rom_a  (cpu_rom_a  ),
	.v_font_a   (v_font_a   ),
	.v_ram_a    (v_ram_a    ),
	.v_ram_do   (v_ram_do   ),
	.v_ram_w    (v_ram_w    ),
	.VGA_B      (VGA_B      ),
	.VGA_BLANK_N(VGA_BLANK_N),
	.VGA_CLK    (VGA_CLK    ),
	.VGA_G      (VGA_G      ),
	.VGA_HS     (VGA_HS     ),
	.VGA_R      (VGA_R      ),
	.VGA_SYNC_N (VGA_SYNC_N ),
	.VGA_VS     (VGA_VS     )
);



endmodule
