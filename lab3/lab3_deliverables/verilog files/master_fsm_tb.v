`timescale 1ns / 1ps
// Team: Barry Loggers

module master_fsm_tb();
    reg clk;
    reg next;
    reg up_button;
    reg rst;
    reg down_button;
    wire [1:0] out;
    wire shift_left_1;
    wire shift_right_1;
    wire shift_left_2;
    wire shift_right_2;

    master_fsm test_master (.clk(clk), .next(next), .up_button(up_button), .rst(rst), .down_button(down_button), .out(out), .shift_left_1(shift_left_1), .shift_right_1(shift_right_1), .shift_left_2(shift_left_2), .shift_right_2(shift_right_2));


    always begin
     #5 clk = 1;
     #2 $display("Out: %b, shift_left_1: %b, shift_right_1: %b, shift_left_2: %b, shift_right_2: %b", out, shift_left_1, shift_right_1, shift_left_2, shift_right_2);
     #3 clk = 0;
    end

    initial begin
        // test #1  - basic functionality

        // starts as off
        #10 rst = 1; next = 0; up_button = 0; down_button = 0;

        // pressing buttons should not change anything
        #10 rst = 0; next = 0; up_button = 1; down_button = 0;

        #10 rst = 0; next = 0; up_button = 1; down_button = 1;

        #10 rst = 0; next = 0; up_button = 0; down_button = 1;

        // advance state to on
        #10 rst = 0; next = 1; up_button = 0; down_button = 0;

        // buttons should not affect on state
        #10 rst = 0; next = 0; up_button = 1; down_button = 1;

        // advance state to off
        #10 rst = 0; next = 1; up_button = 0; down_button = 0;

        // buttons should not affect off state
        #10 rst = 0; next = 0; up_button = 1; down_button = 1;

        // advance state to flash 1
        #10 rst = 0; next = 1; up_button = 0; down_button = 0;

        // change blinking speed
        #10 rst = 0; next = 0; up_button = 0; down_button = 1;
        #10 rst = 0; next = 0; up_button = 0; down_button = 1;
        #10 rst = 0; next = 0; up_button = 0; down_button = 1;
        #10 rst = 0; next = 0; up_button = 1; down_button = 0;
        #10 rst = 0; next = 0; up_button = 1; down_button = 0;
        #10 rst = 0; next = 0; up_button = 1; down_button = 0;

        // turn it off again
        #10 rst = 0; next = 1; up_button = 0; down_button = 0;

        // buttons should not affect off state
        #10 rst = 0; next = 0; up_button = 1; down_button = 1;

        // advance to flash 2
        #10 rst = 0; next = 1; up_button = 0; down_button = 0;

        // change blinking speed
        #10 rst = 0; next = 0; up_button = 0; down_button = 1;
        #10 rst = 0; next = 0; up_button = 0; down_button = 1;
        #10 rst = 0; next = 0; up_button = 0; down_button = 1;
        #10 rst = 0; next = 0; up_button = 1; down_button = 0;
        #10 rst = 0; next = 0; up_button = 1; down_button = 0;
        #10 rst = 0; next = 0; up_button = 1; down_button = 0;

        // go back to off (initial) state
        #10 rst = 0; next = 1; up_button = 0; down_button = 0;
    end

endmodule
