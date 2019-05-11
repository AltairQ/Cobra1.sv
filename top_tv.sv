`timescale 1ns/100ps
module topcore_tb;
	logic clk,reset;

	logic [15:0] addr;
	logic [7:0] mem_dout;
	logic [7:0] mem_din;
	logic rd_n, wr_n;

	mem_module memory(
		.clk(clk), // clock
		.addr(addr), // mem address (8bit words)
		.data_in(mem_din), // input port
		.rd(~rd_n), // read signal
		.wr(~wr_n), // write signal
		.data_out(mem_dout)
	);

	tv80s topcore(
	// Outputs
	// .m1_n,
	// .mreq_n,
	// .iorq_n,
	.rd_n(rd_n),
	.wr_n(wr_n),
	// .rfsh_n,
	// .halt_n,
	// .busak_n,
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
