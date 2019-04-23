// pin-based interface

// NAND gates
module ucy_7400 (
	input  p1,
	input  p2,
	output p3,
	input  p4,
	input  p5,
	output p6,
	input  p7,
	output p8,
	input  p9,
	input  p10,
	output p11,
	input  p12,
	input  p13,
	input  p14
);

	assign p3  = p1  ~& p2;
	assign p6  = p5  ~& p4;
	assign p8  = p9  ~& p10;
	assign p11 = p12 ~& p13;

endmodule


// NOT gates
module ucy_7404 (
	input  p1,
	output p2,
	input  p3,
	output p4,
	input  p5,
	output p6,
	input  p7,
	output p8,
	input  p9,
	output p10,
	input  p11,
	output p12,
	input  p13,
	input  p14
);

	assign p2  = ~p1;
	assign p4  = ~p3;
	assign p6  = ~p5;
	assign p8  = ~p9;
	assign p10 = ~p11;
	assign p12 = ~p13;

endmodule

// AND gates
module ucy_7408 (
	input  p1,
	input  p2,
	output p3,
	input  p4,
	input  p5,
	output p6,
	input  p7,
	output p8,
	input  p9,
	input  p10,
	output p11,
	input  p12,
	input  p13,
	input  p14
);

	assign p3  = p1  & p2;
	assign p6  = p5  & p4;
	assign p8  = p9  & p10;
	assign p11 = p12 & p13;

endmodule


// 3NAND gates
module ucy_7410 (
	input p1, p2, p3, p4, p5,
	output p6, input p7,
	output p8,
	input p9, p10, p11,
	output p12, input p13, p14
);

	assign p6  = ~(p3 & p4  & p5);
	assign p8  = ~(p9 & p10 & p11);
	assign p12 = ~(p1 & p2  & p13);

endmodule

// One big NAND
module ucy_7430 (
	input p1,p2,p3,p4,p5,p6,p7,
	output p8,
	input p9, p10, p11, p12, p13, p14
);
	assign p8 = ~(p1 & p2 & p3 & p4 & p5 & p6 & p11 & p12);

endmodule

// BCD to one-cold (?)
module ucy_7442 (
	output p1, p2, p3, p4, p5, p6, p7,
	input p8,
	output p9, p10, p11,
	input p12, p13, p14, p15, p16	
);

	logic a, b, c, d;
	assign {a, b, c, d} = {p15, p14, p13, p12};

	// output 0
	assign p1  = ~(~a & ~b & ~c & ~d);
	// output 1
	assign p2  = ~( a & ~b & ~c & ~d);
	// output 2
	assign p3  = ~(~a &  b & ~c & ~d);
	// output 3
	assign p4  = ~( a &  b & ~c & ~d);
	// output 4
	assign p5  = ~(~a & ~b &  c & ~d);
	// output 5
	assign p6  = ~( a & ~b &  c & ~d);
	// output 6
	assign p7  = ~(~a &  b &  c & ~d);
	// output 7
	assign p9  = ~( a &  b &  c & ~d);
	// output 8
	assign p10 = ~(~a & ~b & ~c &  d);
	// output 9
	assign p11 = ~( a & ~b & ~c &  d);

endmodule

// Simple d-latch posedge for use in 7474
// TODO async (re)set?
module dff_747 (
	input ns, nr, clk, d,
	output q, nq	
);

	assign nq = ~q;
	
	always_latch @(posedge clk) begin
		if(~nr | ~ns)
			q <= nr;
		else
			q <= d;
	end

endmodule

// double d-latch @posedge
module ucy_7474 (
	input p1, p2, p3, p4, 
	output p5, p6,
	input p7,
	output p8, p9,
	input p10, p11, p12, p13, p14
);
	dff_747 latch_1(p4, p1, p3, p2, p5, p6);
	dff_747 latch_2(p10, p13, p11, p12, p9, p8);

endmodule
