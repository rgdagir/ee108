`timescale 1ns / 1ps
module wave_display_tb(
    );
    wire chip_data_enable,chip_hsync,chip_vsync,chip_reset;
     wire [11:0] chip_data;
     wire [10:0] x;
     wire [9:0] y;
     wire xclk;
     wire xclk_n;
	 reg clk,reset, read_index;
    wire [7:0] read_value;
    wire [8:0] read_address;
    wire valid_pixel;
    wire [7:0] r,g,b;
	
	dvi_controller_top dvi_control(.clk(clk), .reset(reset), .enable(1'b1), 
									.r(r),.g(g), .b(b), .chip_data_enable(chip_data_enable),.chip_hsync(chip_hsync),.chip_vsync(chip_vsync),
									.chip_reset(chip_reset),.x(x), .y(y),.xclk(xclk),.xclk_n(xclk_n));
	
	 
    wave_display interface(.clk(clk),
									.reset(reset), 
									.x(x), 
									.y(y), 
									.valid(1'b1), 
									.read_value(read_value),
									.read_index(read_index),
									.read_address(read_address),
									.valid_pixel(valid_pixel), 
									.r(r),.g(g), .b(b));
									
	fake_sample_ram f_ram(.clk(clk), .addr(read_address), .dout(read_value));

	 initial begin
		  read_index = 1'b1;
        clk = 1'b0;
        reset = 1'b1;
        repeat (4) #5 clk = ~clk;
        reset = 1'b0;
        forever #1 clk = ~clk; 
    end
	 initial begin
		#20000;
	 end

endmodule
