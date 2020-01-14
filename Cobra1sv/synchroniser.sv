module synchroniser #(parameter LVLS=2) (
	input clk,    // Clock
	input dirty, // signal to be synchronised
	output clean // synchronous output
);
	logic [LVLS-1:0] buffer;

	initial buffer <= 0;

	// this improves glitch resistance considerably
	assign clean = buffer[LVLS-1] & buffer[LVLS-2];

	always @(posedge clk)
		buffer <= {buffer[LVLS-2:0], dirty};

endmodule