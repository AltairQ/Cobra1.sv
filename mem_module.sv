module mem_module (
	input clk, // clock
	input [15:0] addr, // mem address (8bit words)
	input [7:0] data_in, // input port
	input rd, // read signal
	input wr, // write signal
	output logic [7:0] data_out
);
	logic [7:0] memory[0:65535];

	initial
		$readmemh("z80_loop.hex", memory, 0, 5);

	always_ff @(posedge clk)
		begin
			data_out <= memory[addr];
			if(wr) memory[addr] <= data_in;
		end



endmodule