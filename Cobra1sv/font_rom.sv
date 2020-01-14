module font_rom (
	input  [10:0] a  ,
	output [ 7:0] out
);
	logic [7:0] memory[0:(2048-1)];

	assign out = memory[a];

	initial begin
		$readmemh("./res/chr.hex", memory);
	end
endmodule