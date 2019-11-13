module top_tv (
	input clk,
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

	font_rom font(
		.a  (v_font_a),
		.out(v_font_di)
	);

	monitor_rom monitor(
		.a  (cpu_rom_a),
		.out(cpu_rom_di)
	);

	ram #(.ADDR_WIDTH(16)) cpu_ram (
		.clk (clk       ),
		.a   (cpu_ram_a ),
		.din (cpu_ram_do),
		.w   (cpu_ram_w ),
		.dout(cpu_ram_di)
	);

	ram #(.ADDR_WIDTH(11)) vram (
		.clk (clk     ),
		.a   (v_ram_a ),
		.din (v_ram_do),
		.w   (v_ram_w ),
		.dout(v_ram_di)
	);


	cobra1 i_cobra1 (
		.clk_cpu   (clk       ),
		.clk_pxl   (clk       ),
		.rst_n     (rst_n     ),
		.kb_state  (kb_state  ),
		.tape_input(tape_input),
		.cpu_ram_di(cpu_ram_di),
		.cpu_rom_di(cpu_rom_di),
		.v_font_di (v_font_di ),
		.v_ram_di  (v_ram_di  ),
		.cpu_ram_a (cpu_ram_a ),
		.cpu_ram_do(cpu_ram_do),
		.cpu_ram_w (cpu_ram_w ),
		.cpu_rom_a (cpu_rom_a ),
		.v_font_a  (v_font_a  ),
		.v_ram_a   (v_ram_a   ),
		.v_ram_do  (v_ram_do  ),
		.v_ram_w   (v_ram_w   )
	);


endmodule
