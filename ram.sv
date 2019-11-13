module ram #(parameter ADDR_WIDTH = 16) (
	input clk,    // Clock
	input [ADDR_WIDTH-1:0]  a, // Address
	input [7:0] din, // Data input
	input w, // Write
	output [7:0] dout // Data output
);

	logic [7:0] memory [0:(1<<ADDR_WIDTH)-1];

	assign dout = memory[a];

	always @(posedge clk)
		if (w)
			memory[a] <= din;

	endmodule