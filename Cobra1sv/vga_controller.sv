module vga_controller (
	input         clk_pxl    , // pixel clock
	input  [ 7:0] v_font_di  ,
	input  [ 7:0] v_ram_di   ,
	input         tape_input ,
	output [10:0] v_ram_a    ,
	output [10:0] v_font_a   ,
	output [ 7:0] VGA_B      ,
	output        VGA_BLANK_N,
	output        VGA_CLK    ,
	output [ 7:0] VGA_G      ,
	output        VGA_HS     ,
	output [ 7:0] VGA_R      ,
	output        VGA_SYNC_N ,
	output        VGA_VS
);

	assign VGA_CLK     = clk_pxl; // pixel clock @ 25.175 MHz
	assign VGA_BLANK_N = 1'b1;
	assign VGA_SYNC_N  = 1'b1;

	logic [10:0] h_cnt; // horizontal counter
	logic [8:0] v_cnt; // vertical counter

	logic draw;

	logic [7:0] crow_bits; // bitmask for current character's row
	logic cpxl; // current pixel's mono colour

	assign VGA_HS = !(h_cnt > (640+16) && h_cnt <= (640+16+96));
	assign VGA_VS = !(v_cnt > (400+12) && v_cnt <= (400+12+2));

	assign draw = (h_cnt < 512 && v_cnt < 384) & (cpxl | tape_input);

	assign VGA_R = draw ? 8'hff : 8'h00;
	assign VGA_G = draw ? 8'hff : 8'h00;
	assign VGA_B = draw ? 8'hff : 8'h00;


	assign v_ram_a = h_cnt/16 + 32*(v_cnt/16);

	// ROM address is ASCII code + row number
	assign v_font_a  = {v_ram_di, v_cnt[3:1]};
	assign crow_bits = v_font_di; // font data for current char & row
	assign cpxl      = crow_bits[7-h_cnt[3:1]]; // horizontal offset

	initial begin
		h_cnt <= 0;
		v_cnt <= 0;
	end

	always @(posedge clk_pxl) begin
		if(h_cnt < 800-1)
			h_cnt <= h_cnt+1;
		else begin
			h_cnt <= 0;

			if(v_cnt < 449-1) begin
				v_cnt <= v_cnt+1;
			end else begin
				v_cnt <= 0;
			end
		end
	end

endmodule
