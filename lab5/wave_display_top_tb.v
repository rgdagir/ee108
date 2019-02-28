`timescale 1ns / 1ps

module wave_display_top_tb(
    );
	 reg clk,reset,new_sample,valid,vsync;
    reg [15:0] sample;
    reg [10:0] x;  // [0..1279]
    reg [9:0]  y;  // [0..1023]     
    wire [7:0] r,g,b;
	 
	 wave_display_top top_display( .clk(clk), .reset(reset), .new_sample(new_sample), .sample(sample),
											.x(x), .y(y), .valid(valid),.vsync(vsync), .r(r), .g(g), .b(b));
				

    initial begin
        clk = 1'b0;
        reset = 1'b1;
        repeat (4) #5 clk = ~clk; 
        reset = 1'b0;
        forever #1 clk = ~clk; 
    end
	 
	 initial begin
		sample = 0;
		@(negedge reset)
		forever begin
		#5 sample = sample + 1;
		new_sample = 1; 
		#1 new_sample = 0;
		end
	 end
	 
	 initial begin
		x = 11'b00100000000;
		y = 0;
	 @(negedge reset)
	 forever begin
		y = 10'b0011111111;
		#2 x = x + 1;
	 end
	 end
	 
	 initial begin
		vsync = 0;
		valid = 1;
	 end


endmodule
