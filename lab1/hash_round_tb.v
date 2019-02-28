module hash_round_tb ();

    reg [7:0] in_byte;
    reg [31:0] in_state;
    reg err;
    wire [31:0] out_state_0, out_state_1, out_state_2, out_state_3, out_state_4, out_state_5, out_state_6, out_state_7;

    hash_round #(.ROUND(0)) dut0 (.in_byte(in_byte),.in_state(in_state),.out_state(out_state_0));
    hash_round #(.ROUND(1)) dut1 (.in_byte(in_byte),.in_state(in_state),.out_state(out_state_1));
    hash_round #(.ROUND(2)) dut2 (.in_byte(in_byte),.in_state(in_state),.out_state(out_state_2));
    hash_round #(.ROUND(3)) dut3 (.in_byte(in_byte),.in_state(in_state),.out_state(out_state_3));
    hash_round #(.ROUND(4)) dut4 (.in_byte(in_byte),.in_state(in_state),.out_state(out_state_4));
    hash_round #(.ROUND(5)) dut5 (.in_byte(in_byte),.in_state(in_state),.out_state(out_state_5));
    hash_round #(.ROUND(6)) dut6 (.in_byte(in_byte),.in_state(in_state),.out_state(out_state_6));
    hash_round #(.ROUND(7)) dut7 (.in_byte(in_byte),.in_state(in_state),.out_state(out_state_7));

    initial begin
        err = 1'b0;
        in_byte = 8'hAA;
        in_state = 32'h11223344;
        #5
        if (out_state_0 !== 32'h22331011) begin $display ("Hash round 0 failed"); err = 1'b1; end
        if (out_state_1 !== 32'h22332011) begin $display ("Hash round 1 failed"); err = 1'b1; end
        if (out_state_2 !== 32'h22334011) begin $display ("Hash round 2 failed"); err = 1'b1; end
        if (out_state_3 !== 32'h22330911) begin $display ("Hash round 3 failed"); err = 1'b1; end
        if (out_state_4 !== 32'h22331211) begin $display ("Hash round 4 failed"); err = 1'b1; end
        if (out_state_5 !== 32'h2233dd11) begin $display ("Hash round 5 failed"); err = 1'b1; end
        if (out_state_6 !== 32'h2233bb11) begin $display ("Hash round 6 failed"); err = 1'b1; end
        if (out_state_7 !== 32'h22337711) begin $display ("Hash round 7 failed"); err = 1'b1; end

        $display("--");

        in_state = 32'h55555555;
        #5
        if (out_state_0 !== 32'h55555455) begin $display ("Hash round 0 failed"); err = 1'b1; end
        if (out_state_1 !== 32'h5555a855) begin $display ("Hash round 1 failed"); err = 1'b1; end
        if (out_state_2 !== 32'h55555155) begin $display ("Hash round 2 failed"); err = 1'b1; end
        if (out_state_3 !== 32'h5555a255) begin $display ("Hash round 3 failed"); err = 1'b1; end
        if (out_state_4 !== 32'h55554555) begin $display ("Hash round 4 failed"); err = 1'b1; end
        if (out_state_5 !== 32'h55558a55) begin $display ("Hash round 5 failed"); err = 1'b1; end
        if (out_state_6 !== 32'h55551555) begin $display ("Hash round 6 failed"); err = 1'b1; end
        if (out_state_7 !== 32'h55552a55) begin $display ("Hash round 7 failed"); err = 1'b1; end

        if (err==1'b0) begin
            $display ("All tests in test bench passed successfully!");
        end

    end

endmodule
