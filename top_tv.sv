`timescale 1ns/100ps
module topcore_tb;
	reg clk,reset;
 
	// tv80_core topcore(/*AUTOARG*/
	// // Outputs
	// m1_n, iorq, no_read, write, rfsh_n, halt_n, busak_n, A, dout, mc,
	// ts, intcycle_n, IntE, stop,
	// // Inputs
	// reset_n, clk, cen, wait_n, int_n, nmi_n, busrq_n, dinst, di
	// );


	// NOP loop, IP increasing
	tv80_core topcore(
	.reset_n(~reset), .clk(clk), .cen(1'b1), .wait_n(1'b1), .int_n(1'b1), .nmi_n(1'b1), .busrq_n(1'b1), .dinst(8'b0), .di(8'b0)
	);



		initial
					clk= 1'b0;
		always
				#5  clk=~clk; 
				initial
					begin
							 #5 reset=1'b1;
							 #50 reset=1'b0;
							 #500 $finish;
					end
		endmodule
