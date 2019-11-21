`define ROM_HEX  rom_hex_file()
import "DPI-C" function string rom_hex_file();

module monitor_rom (
	input [10:0] a,
	output [7:0] out
);
	logic [7:0] memory [0:(2048-1)];

	assign out = memory[a];

	initial begin
		$readmemh(`ROM_HEX, memory);

	end
endmodule