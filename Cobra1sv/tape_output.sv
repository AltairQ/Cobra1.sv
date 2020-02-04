module tape_output (
	input clk_cpu,
	input trigger,
	input rst_n,
	output tape_output_pos,
	output tape_output_neg
);

	wire nq;

	wire pedge, nedge;

	assign pedge =  nq && !prev;
	assign nedge = !nq &&  prev;

	logic prev = 0;

	always_ff @(posedge clk_cpu)
		prev <= nq;

	oneshot #(.CLEN(1198)) i_oneshot (
		.clk    (clk_cpu),
		.rst_n  (rst_n  ),
		.trigger(trigger),
		.q      (       ),
		.nq     (nq     )
	);


	oneshot #(.CLEN(599)) outpos (
		.clk    (clk_cpu        ),
		.rst_n  (rst_n          ),
		.trigger(pedge          ),
		.q      (tape_output_pos),
		.nq     (               )
	);

	oneshot #(.CLEN(599)) outneg (
		.clk    (clk_cpu        ),
		.rst_n  (rst_n          ),
		.trigger(nedge          ),
		.q      (tape_output_neg),
		.nq     (               )
	);


endmodule