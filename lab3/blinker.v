/*module blinker (
    input clk,
	 input reset,
    input switch,
	 input en,
    output out
    );

    reg next_state = 1'b0;
    dffr blink_state (.clk(clk), .r(reset), .d(next_state), .q(out));

    always @(*) begin 
		case (out)
			1 : next_state = 1 ^ switch;
			0 : next_state = 0 ^ switch;
			default: next_state = 1;
		endcase
	 end

endmodule*/

module blinker (
    input clk,
	 input reset,
    input switch,
	 input en,
    output out
    );

    reg next_state;
    dffre blink_state (.clk(clk), .en(en), .r(reset), .d(next_state), .q(out));

    always @(*) begin 
		case (out)
			1 : next_state = 1 ^ switch;
			0 : next_state = 0 ^ switch;
			default: next_state = 1;
		endcase
	 end

endmodule
