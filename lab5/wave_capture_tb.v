`timescale 1ns / 1ps

module wave_capture_tb(
    );
	 reg clk, reset, new_sample_ready, wave_display_idle;
    wire [8:0] write_address;
    wire write_enable, read_index;
    wire [7:0] write_sample;
	 
	 reg [7:0] addr;
	 wire [7:0] dout;
	 
	 //Creating our fake rom to simulate our new_sample_in
	 fake_sample_ram fake(
		.clk(clk),
		.addr(addr),
		.dout(dout)
	 );
	 
	// wave_capture to use our fake rom as new_sample_in, we reverse the transformation we do in wave capture here
	wave_capture capturer(
		.clk(clk),
		.reset(reset),
		.new_sample_ready(clk),
		.new_sample_in({~dout[7], dout[6:0], 8'd0}),
		.wave_display_idle(wave_display_idle),
		
		.write_address(write_address),
		.write_enable(write_enable),
		.write_sample(write_sample),
		.read_index(read_index)
	 );

    // Clock and reset
    initial begin
	 	  addr = 0;
        clk = 1'b0;
        reset = 1'b1;
        repeat (4) #5 clk = ~clk;
        reset = 1'b0;
        forever #1 clk = ~clk; 
    end
	 
	 
	 initial begin
		wave_display_idle = 1;
		@(negedge reset);
		@(negedge clk);
		//We want to progress to the next sample in the fake rom for each clock cycle
		forever #2 addr = addr + 1;
	 end
	 
endmodule
