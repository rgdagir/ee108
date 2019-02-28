`timescale 1ns / 1ps

module programmable_blinker_tb();
    reg clk;
    reg reset;
    reg shift_left;
    reg shift_right;
    reg count_en = 0;
    wire fast_out;
    wire slow_out;

    programmable_blinker #(0) prog_blinker_slow (.clk(clk), .reset(reset), .shift_left(shift_left), .shift_right(shift_right), .count_en(count_en), .out(slow_out));

    programmable_blinker #(1) prog_blinker_fast (.clk(clk), .reset(reset), .shift_left(shift_left), .shift_right(shift_right), .count_en(count_en), .out(fast_out));

    always begin
        #5 clk = 1;
        #2 $display("Fast output is %b || \n Slow output is %b", fast_out, slow_out);
        #3 clk = 0;
    end
	 
	 always begin
		  #5 count_en = 1;
		  #5 count_en = 0;
	 end

    initial begin
    // reset to begin
    #10 reset = 0; shift_right = 1; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
	 #10 reset = 0; shift_right = 0; shift_left = 0;
    end

endmodule
