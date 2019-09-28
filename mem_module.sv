`define ROM_HEX  rom_hex_file()
import "DPI-C" function string rom_hex_file();

module mem_module (
	input clk, // clock
	input [15:0] addr, // mem address (8bit words)
	input [7:0] data_in, // input port
	input mreq,
	input reset, // quickfix for accidental memory write during reset
	input rd, // read signal
	input wr, // write signal
	output logic [7:0] data_out
);
	logic [7:0] memory[0:65535];

	integer i;

	initial
	begin
		for(i = 0; i <= 65535; i++)
			memory[i] = 0;

		// Load ROM @ 0xC000
		`ifdef ROM_HEX
			$readmemh(`ROM_HEX, memory, 49152);
		`endif
	end

	assign data_out = memory[addr];

	always @(posedge clk)
		begin
			// todo better check
			if(wr && !reset && mreq && !(addr >= 16'hC000 && addr < 16'hC800))
				memory[addr] <= data_in;
		end



endmodule