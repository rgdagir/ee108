module programmable_blinker #(SHIFTER = 0) (
		input clk,
		input reset,
		input shift_left,
		input shift_right,
		input count_en,
		output out
    );
	 
	 wire [6:0] load_value;
	 wire switch;
	 shifter #(SHIFTER) shf(.clk(clk), .reset(reset), .shift_left(shift_left), .shift_right(shift_right), .out(load_value));
	 timer timer(.clk(clk), .reset(reset), .load_value(load_value), .count_en(count_en), .out(switch));
	 blinker blnk(.clk(clk), .en(count_en), .reset(reset), .switch(switch), .out(out));
	
endmodule
