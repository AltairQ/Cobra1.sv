
module CobraDE2 (
	//////////// CLOCK //////////
	input 		          		CLOCK_50,
	input 		          		CLOCK2_50,
	input 		          		CLOCK3_50,
	//////////// LED //////////
	output		     [8:0]		LEDG,
	output		    [17:0]		LEDR,
	//////////// KEY //////////
	input 		     [3:0]		KEY,
	//////////// SW //////////
	input 		    [17:0]		SW,
	//////////// SEG7 //////////
	output		     [6:0]		HEX0,
	output		     [6:0]		HEX1,
	output		     [6:0]		HEX2,
	output		     [6:0]		HEX3,
	output		     [6:0]		HEX4,
	output		     [6:0]		HEX5,
	output		     [6:0]		HEX6,
	output		     [6:0]		HEX7,
	//////////// PS2 for Keyboard and Mouse //////////
	inout 		          		PS2_CLK,
	inout 		          		PS2_CLK2,
	inout 		          		PS2_DAT,
	inout 		          		PS2_DAT2,
	//////////// VGA //////////
	output		     [7:0]		VGA_B,
	output		          		VGA_BLANK_N,
	output		          		VGA_CLK,
	output		     [7:0]		VGA_G,
	output		          		VGA_HS,
	output		     [7:0]		VGA_R,
	output		          		VGA_SYNC_N,
	output		          		VGA_VS,
	//////////// Audio //////////
	input 		          		AUD_ADCDAT,
	inout 		          		AUD_ADCLRCK,
	inout 		          		AUD_BCLK,
	output		          		AUD_DACDAT,
	inout 		          		AUD_DACLRCK,
	output		          		AUD_XCK,
	//////////// I2C for Audio  //////////
	output		          		I2C_SCLK,
	inout 		          		I2C_SDAT
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

	logic [15:0] addr;

	wire clk = CLOCK_50;
	wire clk_cpu;
	wire clk_pxl;

	wire tape_input;
	wire [39:0] kb_state;


	wire ps2_data_valid;
	wire [7:0] ps2_data;


	ps2t keyboard_translator (
		.clk       (clk_cpu       ),
		.data_valid(ps2_data_valid),
		.data      (ps2_data      ),
		.kb_state  (kb_state      )
	);


	ps2 kbd (
		.ps2_0_PS2_CLK      (PS2_CLK       ),
		.ps2_0_PS2_DAT      (PS2_DAT       ),
		.ps2_0_command      (8'b0          ),
		.ps2_0_command_valid(1'b0          ),
		.ps2_0_data_ready   (1'b1          ),
		.ps2_0_data         (ps2_data      ),
		.ps2_0_data_valid   (ps2_data_valid),
		.clk_clk            (clk_cpu       ),
		.reset_reset_n      (1'b1          )
	);


	wire rst_key_cpu;

	synchroniser rst_synchroniser (
		.clk  (clk_cpu    ),
		.dirty(KEY[0]     ),
		.clean(rst_key_cpu)
	);


	logic [3:0] rstcnt;
	initial rstcnt = 0;

	always @(posedge clk_cpu) begin
		if(rstcnt < 4) rstcnt <= rstcnt+1;
	end
	logic rst_n;
	assign rst_n = (rstcnt >= 4) & rst_key_cpu;

	assign LEDR[15:0] = addr;

	assign addr = cpu_ram_a;

	pxl_pll i_pxl_pll (
		.inclk0(clk    ),
		.c0    (clk_pxl),
		.c1    (clk_cpu)
	);


	wire signed [23:0] left_audio_raw;
	wire left_audio_valid;

	logic signed [23:0] left_audio_clean;

	always_ff @(posedge clk)
		if(left_audio_valid)
			left_audio_clean <= left_audio_raw;

	wire tape_ths;

	assign tape_ths = (left_audio_clean >= 24'sd419430);

	assign LEDG[0] = tape_input;

	// sync tape input to cpu clock
	synchroniser #(.LVLS(4)) sync1 (
		.clk  (clk_cpu   ),
		.dirty(tape_ths  ),
		.clean(tape_input)
	);

	wire tape_output_pos_dirty;
	wire tape_output_neg_dirty;

	wire tape_output_pos;
	wire tape_output_neg;


	synchroniser #(.LVLS(4)) sync_tapepos(
		.clk(clk),
		.dirty(tape_output_pos_dirty),
		.clean(tape_output_pos)
	);

	synchroniser #(.LVLS(4)) sync_tapeneg(
		.clk(clk),
		.dirty(tape_output_neg_dirty),
		.clean(tape_output_neg)
	);

	wire [23:0] tape_output_data;

	always_comb begin : proc_tape_output_data
		if (tape_output_pos) begin
			tape_output_data = 24'd4194304;
		end else
		if (tape_output_neg) begin
			tape_output_data = -24'd4194304;
		end else begin
			tape_output_data = 24'd0;
		end
	end

	audio_all foo (
		.audio_0_avalon_left_channel_sink_data           (tape_output_data),
		.audio_0_avalon_left_channel_sink_valid          (1'b1            ),
		.audio_0_avalon_left_channel_sink_ready          (                ),
		.audio_0_avalon_right_channel_sink_data          (24'b0           ),
		.audio_0_avalon_right_channel_sink_valid         (1'b1            ),
		.audio_0_avalon_right_channel_sink_ready         (                ),
		
		.audio_0_avalon_left_channel_source_ready        (1'b1            ),
		.audio_0_avalon_left_channel_source_data         (left_audio_raw  ),
		.audio_0_avalon_left_channel_source_valid        (left_audio_valid),
		
		.audio_0_avalon_right_channel_source_ready       (1'b1            ),
		.audio_0_avalon_right_channel_source_data        (                ),
		.audio_0_avalon_right_channel_source_valid       (                ),
		
		.audio_0_external_interface_ADCDAT               (AUD_ADCDAT      ),
		.audio_0_external_interface_ADCLRCK              (AUD_ADCLRCK     ),
		.audio_0_external_interface_BCLK                 (AUD_BCLK        ),
		.audio_0_external_interface_DACDAT               (AUD_DACDAT      ),
		.audio_0_external_interface_DACLRCK              (AUD_DACLRCK     ),
		
		.audio_and_video_config_0_external_interface_SDAT(I2C_SDAT        ),
		.audio_and_video_config_0_external_interface_SCLK(I2C_SCLK        ),
		
		.clk_clk                                         (clk             ),
		.clock_bridge_0_out_clk_clk                      (AUD_XCK         ),
		.reset_reset_n                                   (1'b1            )
	);


	wire beep;
	assign LEDG[1] = beep;


	monitor_rom monitor (
		.address(cpu_rom_a ),
		.clock  (clk_cpu   ),
		.q      (cpu_rom_di)
	);


	font_rom_ip font_rom (
		.address(v_font_a ),
		.clock  (clk_pxl  ),
		.q      (v_font_di)
	);


	cpu_ram cpu_ram (
		.clock  (clk_cpu   ),
		.address(cpu_ram_a ),
		.data   (cpu_ram_do),
		.wren   (cpu_ram_w ),
		.q      (cpu_ram_di)
	);

	vram_ip i_vram_ip (
		.address(v_ram_a   ),
		.clock  (clk_pxl   ),
		.data   (cpu_ram_do),
		.wren   (v_ram_w   ),
		.q      (v_ram_di  )
	);


	cobra1 i_cobra1 (
		.clk_cpu        (clk_cpu              ),
		.clk_pxl        (clk_pxl              ),
		.rst_n          (rst_n                ),
		.kb_state       (kb_state             ),
		.tape_input     (tape_input           ),
		.cpu_ram_di     (cpu_ram_di           ),
		.cpu_rom_di     (cpu_rom_di           ),
		.v_font_di      (v_font_di            ),
		.v_ram_di       (v_ram_di             ),
		.cpu_ram_a      (cpu_ram_a            ),
		.cpu_ram_do     (cpu_ram_do           ),
		.cpu_ram_w      (cpu_ram_w            ),
		.cpu_rom_a      (cpu_rom_a            ),
		.v_font_a       (v_font_a             ),
		.v_ram_a        (v_ram_a              ),
		.v_ram_do       (v_ram_do             ),
		.v_ram_w        (v_ram_w              ),
		.VGA_B          (VGA_B                ),
		.VGA_BLANK_N    (VGA_BLANK_N          ),
		.VGA_CLK        (VGA_CLK              ),
		.VGA_G          (VGA_G                ),
		.VGA_HS         (VGA_HS               ),
		.VGA_R          (VGA_R                ),
		.VGA_SYNC_N     (VGA_SYNC_N           ),
		.VGA_VS         (VGA_VS               ),
		.tape_output_pos(tape_output_pos_dirty),
		.tape_output_neg(tape_output_neg_dirty),
		.beep           (beep)
	);




endmodule
