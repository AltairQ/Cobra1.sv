module oneshot #(parameter CLEN=32768) (
	input  clk    , // Clock
	input  rst_n  , // Asynchronous reset active low
	input  trigger, // Trigger
	output q      , // Output
	output nq       // Inverted output
);

	logic [15:0] timer = 0;

	assign q  = timer != 0;
	assign nq = timer == 0;

	always_ff @(posedge clk) begin : proc_timer
		if(~rst_n) begin
			timer <= 0;
		end else begin
			timer <= (timer > 0) ? timer-1 : 0;
			if(trigger)
				timer <= CLEN;
		end
	end

endmodule