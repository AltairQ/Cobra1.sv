// This module is an interface emulating the 74S412 (23) buffer,
// which is connected to both the keyboard and the tape.
module kb_n_tape (
	input [39:0] keycaps,
	input [15:0] ain,
	output [7:0] dout
);

	/*
	The keyboard is a simple grid of horizontal and vertical traces.
	The switches are placed at the intersections and simply connect them
	when pressed. Also, the D* pins are "active low", in the sense they
	are connected to pull-up resistors. See the schematics for more details. 

	Layout is as follows:

		D0 D1 D2 D3 D4 ->
	A11	1  2  3  4  5
	A10	Q  W  E  R  T
	A9	A  S  D  F  G
	A8	SH Z  X  C  V
	A15	SP ,  M  N  B
	A14	CR L  K  J  H
	A13	P  O  I  U  Y
	A12	0  9  8  7  6
	|
	V

	*/

	logic [4:0] cols; // output from the key matrix, effectively D4-D0
	logic [7:0] rows; // input to the key matrix, effectively A12..15..11

	assign rows[7:0] = {ain[12],ain[13],ain[14],ain[15],ain[8],ain[9],ain[10],ain[11]};
	assign dout[7:0] = {3'b111, cols}; // No tape input at the moment

	generate
		genvar c_i;

		for(c_i = 0; c_i < 5; c_i++)
			assign cols[c_i] = 
						(rows[0] | ~keycaps[c_i + 0*5])&
						(rows[1] | ~keycaps[c_i + 1*5])&
						(rows[2] | ~keycaps[c_i + 2*5])&
						(rows[3] | ~keycaps[c_i + 3*5])&
						(rows[4] | ~keycaps[c_i + 4*5])&
						(rows[5] | ~keycaps[c_i + 5*5])&
						(rows[6] | ~keycaps[c_i + 6*5])&
						(rows[7] | ~keycaps[c_i + 7*5]);
	endgenerate

endmodule