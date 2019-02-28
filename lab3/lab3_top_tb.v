//----------------------------------------------------
// Test bench for EE108 Lab 3 (Bicycle Light)
//----------------------------------------------------

/* For this lab, you need to include additional test cases in the testbench that
 * will show the correct implementation of the adjustable fast and slow states 
 * 
 * To make this easier, it is suggested that you run the simulations run the
 * flashing at a much faster speed for debugging.  It is possible to simulate
 * for the full seconds that the light should flash, but this would take a very
 * long time.  Instead simulate the lights flashing at a much faster speed and
 * just make sure that you can identify the doubling and halving of this speed.
 * Then slow down to the desired speed when implementing you program on the
 * chip.
 */

module lab3_top_tb();

    reg clk, rst, button, up_select, down_select;
    wire [7:0] leds;
    wire light = leds[0];

    lab3_top dut (
        .clk(clk),
        .left_button(rst), 
        .right_button(button),
        .up_button(up_select),
        .down_button(down_select),
        .leds(leds)
    );

    // Clock with period of 10 units
    initial forever begin
        #5 clk = 1;
        #2 $display("%b %b %b", rst, button, light);
        #3 clk = 0;
    end

    // Input stimuli
    initial begin
        #10 rst = 0; // start w/o reset to show x state
        #10 rst = 1; button = 0; up_select = 0; down_select = 0; // reset
        #10 rst = 0; // remove reset
        #20 button = 1; // Constant on
        #10 button = 0;
        #10 button = 1; // OFF
        #10 button = 0;
        #10 button = 1; // Slow flash
		  #10 button = 0;
		  #30 button = 1; //off
		  #10 button = 0;
		  #30 button = 1; //fast flash
		  #10 button = 0;
		  #40 up_select = 1;
		  #50 up_select = 0;
		  //code here show response to up/down buttons
		  #1000; 
		  
		  
        #50 button = 1; // OFF
        #10 button = 0;

        // code here show response to up/down buttons
		  #5 up_select = 1;
		  #50 up_select = 0;
		  #250

        #120 button = 1; // OFF
        #10 button = 0;
        #40;
        $stop;
    end

endmodule
