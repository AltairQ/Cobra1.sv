`timescale 1ns/100ps
module top_tv(input clk, input reset, output [15:0] addr);
	// input logic clk,reset;



	// logic [15:0] addr;
	logic [7:0] mem_dout;
	logic [7:0] mem_din;
	logic rd_n, wr_n;


	logic m1_n, mreq_n, iorq_n, rfsh_n, halt_n, busak_n;

	mem_module memory(
		.clk(clk), // clock
		.addr(addr), // mem address (8bit words)
		.data_in(mem_din), // input port
		.reset(reset),
		.rd(~rd_n), // read signal
		.wr(~wr_n), // write signal
		.data_out(mem_dout)
	);

	tv80s topcore(
	// Outputs
	.m1_n(m1_n),
	.mreq_n(mreq_n),
	.iorq_n(iorq_n),
	.rd_n(rd_n),
	.wr_n(wr_n),
	.rfsh_n(rfsh_n),
	.halt_n(halt_n),
	.busak_n(busak_n),
	.A(addr),
	.dout(mem_din),
	// Inputs
	.reset_n(~reset),
	.clk(clk),
	.wait_n(1'b1),
	.int_n(1'b1),
	.nmi_n(1'b1),
	.busrq_n(1'b1),
	.di(mem_dout)
	);


	endmodule
