module ps2t (
	input clk,    // Clock
	input data_valid,
	input [7:0] data,
	output logic [39:0] kb_state
);

	logic breaking;

	initial begin
		breaking <= 1'b0;
		kb_state <= 40'b0;
	end

	always @(posedge clk) begin
		if(data_valid) begin
			if(data == 8'hF0) // is it a start of a break code?
				breaking <= 1'b1;
			else begin
				case (data)
					8'h16: kb_state[0*5+0] <= !breaking;  // 1
					8'h1E: kb_state[0*5+1] <= !breaking;  // 2
					8'h26: kb_state[0*5+2] <= !breaking;  // 3
					8'h25: kb_state[0*5+3] <= !breaking;  // 4
					8'h2E: kb_state[0*5+4] <= !breaking;  // 5
					8'h15: kb_state[1*5+0] <= !breaking;  // Q
					8'h1D: kb_state[1*5+1] <= !breaking;  // W
					8'h24: kb_state[1*5+2] <= !breaking;  // E
					8'h2D: kb_state[1*5+3] <= !breaking;  // R
					8'h2C: kb_state[1*5+4] <= !breaking;  // T
					8'h1C: kb_state[2*5+0] <= !breaking;  // A
					8'h1B: kb_state[2*5+1] <= !breaking;  // S
					8'h23: kb_state[2*5+2] <= !breaking;  // D
					8'h2B: kb_state[2*5+3] <= !breaking;  // F
					8'h34: kb_state[2*5+4] <= !breaking;  // G
					8'h12: kb_state[3*5+0] <= !breaking;  // SH
					8'h1A: kb_state[3*5+1] <= !breaking;  // Z
					8'h22: kb_state[3*5+2] <= !breaking;  // X
					8'h21: kb_state[3*5+3] <= !breaking;  // C
					8'h2A: kb_state[3*5+4] <= !breaking;  // V
					8'h29: kb_state[4*5+0] <= !breaking;  // SP
					8'h41: kb_state[4*5+1] <= !breaking;  // ,
					8'h3A: kb_state[4*5+2] <= !breaking;  // M
					8'h31: kb_state[4*5+3] <= !breaking;  // N
					8'h32: kb_state[4*5+4] <= !breaking;  // B
					8'h5A: kb_state[5*5+0] <= !breaking;  // CR
					8'h4B: kb_state[5*5+1] <= !breaking;  // L
					8'h42: kb_state[5*5+2] <= !breaking;  // K
					8'h3B: kb_state[5*5+3] <= !breaking;  // J
					8'h33: kb_state[5*5+4] <= !breaking;  // H
					8'h4D: kb_state[6*5+0] <= !breaking;  // P
					8'h44: kb_state[6*5+1] <= !breaking;  // O
					8'h43: kb_state[6*5+2] <= !breaking;  // I
					8'h3C: kb_state[6*5+3] <= !breaking;  // U
					8'h35: kb_state[6*5+4] <= !breaking;  // Y
					8'h45: kb_state[7*5+0] <= !breaking;  // 0
					8'h46: kb_state[7*5+1] <= !breaking;  // 9
					8'h3E: kb_state[7*5+2] <= !breaking;  // 8
					8'h3D: kb_state[7*5+3] <= !breaking;  // 7
					8'h36: kb_state[7*5+4] <= !breaking;  // 6
					default : ;
				endcase

				breaking <= 1'b0;
			end
		end
	end

endmodule