`timescale 1ns/1ps
module sine_reader_tb();

    reg clk, reset; 
	 reg generate_next = 0;
    reg [19:0] step_size;
    wire sample_ready;
    wire [15:0] sample;
    sine_reader reader(
        .clk(clk),
        .reset(reset),
        .step_size(step_size),
        .generate_next(generate_next),
        .sample_ready(sample_ready), 
        .sample(sample)
    );

    // Clock and reset
    initial begin
        clk = 1'b0;
        reset = 1'b1;
        repeat (4) #5 clk = ~clk;
        reset = 1'b0;
        forever #1 clk = ~clk;
		  
    end
	 initial begin 
		forever #2 generate_next = ~generate_next;
	 end

    // Tests
    initial begin
		//step_size[19:10] = 10'd100;
		//step_size[9:0] = 10'd0;
		//step_size = {10'd039, 10'd783};
		step_size = {10'd10, 10'd0};
		
		@(negedge reset);
      @(negedge clk);
		#1000
		//#2 reset = 1'b1;
      //#2 reset = 1'b0;
		step_size[19 : 10] = 10'd128;
		step_size[9 : 0] = 10'd128;
		#500
		step_size[19 : 10] = 10'd512;
		#500
		step_size[19 : 10] = 10'd50;
		reset = 1'b1;
		#2 reset = 1'b0;
		
	
    end

endmodule
