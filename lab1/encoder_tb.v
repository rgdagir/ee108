module encoder_tb ();
    reg [7:0] in;
    reg [2:0] expected;
    wire [2:0] out;
    encoder dut (.in(in), .out(out));

    initial begin
       // A few basic test cases
       in = 8'b00000001;
       expected = 3'd0;
       #5
       $display("%b -> %d, expected %d", in, out, expected);

       in = 8'b10000000;
       expected = 3'd7;
       #5
       $display("%b -> %d, expected %d", in, out, expected);


       // Tip: you can try using a repeat block:
       //    repeat (N) begin
       //       //body
       //    end
       // to repeat the code in body N times.
       // Combine this with a bit shifter to save yourself some typing.

       // Put more test cases here. Don't forget edge cases!

    end

endmodule
