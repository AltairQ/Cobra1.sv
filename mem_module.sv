module mem_module (
	input clk, // clock
	input [15:0] addr, // mem address (8bit words)
	input [7:0] data_in, // input port
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
		// $readmemh("z80_nop.hex", memory, 0, 5);
		$readmemh("z80_loop.hex", memory, 0, 5);
	end

	assign data_out = memory[addr];

	always @(posedge clk)
		begin
			// if(rd) data_out <= memory[addr];
			if(wr) memory[addr] <= data_in;
		end



endmodule