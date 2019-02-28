module cam_tb ();
    reg [63:0] data;
    reg [3:0] data_len;
    reg err;
    wire [2:0] addr;
    wire valid;

    cam dut (
        .data(data),
        .data_len(data_len),
        .addr(addr),
        .valid(valid)
    );

    initial begin

        // Test that each user is in DB
        err = 1'b0;

        data = 64'h00000000004f454c;
        data_len = 4'd3;
        #5
        if (valid !== 1'b1) begin
            $display ("CAM failed on valid user %h", data);
            err = 1'b1;
        end
        if (addr !== 3'd0) begin
            $display ("CAM returned wrong address on user %h", data);
            err = 1'b1;
        end

        data = 64'h0000004e4f524141;
        data_len = 4'd5;
        #5
        if (valid !== 1'b1) begin
            $display ("CAM failed on valid user %h", data);
            err = 1'b1;
        end
        if (addr !== 3'd1) begin
            $display ("CAM returned wrong address on user %h", data);
            err = 1'b1;
        end
        
        data = 64'h000000594c4c4f48;
        data_len = 4'd5;
        #5
        if (valid !== 1'b1) begin
            $display ("CAM failed on valid user %h", data);
            err = 1'b1;
        end
        if (addr !== 3'd2) begin
            $display ("CAM returned wrong address on user %h", data);
            err = 1'b1;
        end
        
        data = 64'h0000004449564144;
        data_len = 4'd5;
        #5
        if (valid !== 1'b1) begin
            $display ("CAM failed on valid user %h", data);
            err = 1'b1;
        end
        if (addr !== 3'd3) begin
            $display ("CAM returned wrong address on user %h", data);
            err = 1'b1;
        end
        
        data = 64'h0000455249414c43;
        data_len = 4'd6;
        #5
        if (valid !== 1'b1) begin
            $display ("CAM failed on valid user %h", data);
            err = 1'b1;
        end
        if (addr !== 3'd4) begin
            $display ("CAM returned wrong address on user %h", data);
            err = 1'b1;
        end
        
        data = 64'h0000004b4e415246;
        data_len = 4'd5;
        #5
        if (valid !== 1'b1) begin
            $display ("CAM failed on valid user %h", data);
            err = 1'b1;
        end
        if (addr !== 3'd5) begin
            $display ("CAM returned wrong address on user %h", data);
            err = 1'b1;
        end
        
        data = 64'h00000045434e414c;
        data_len = 4'd5;
        #5
        if (valid !== 1'b1) begin
            $display ("CAM failed on valid user %h", data);
            err = 1'b1;
        end
        if (addr !== 3'd6) begin
            $display ("CAM returned wrong address on user %h", data);
            err = 1'b1;
        end
        
        data = 64'h000000004e415952;
        data_len = 4'd4;
        #5
        if (valid !== 1'b1) begin
            $display ("CAM failed on valid user %h", data);
            err = 1'b1;
        end
        if (addr !== 3'd7) begin
            $display ("CAM returned wrong address on user %h", data);
            err = 1'b1;
        end
        
        // Test that a bogus user produces an invalid result
        data = 64'h0000000055555555;
        data_len = 4'd4;
        #5
        if (valid !== 1'b0) begin
            $display ("CAM failed on invalid user %h", data);
            err = 1'b1;
        end

        // And test that we're not inferring any latches (at least, any ones directly driving outputs)
        // Ask your TA to explain these lines if you can't figure out what they're doing :)
        if (valid === 1'bx || valid === 1'bz) begin
            $display ("CAM produced undefined output on valid for invalid user, Make sure you're not inferring a latch anywhere!");
            err = 1'b1;
        end
        if (addr === 3'dx || addr === 3'dz) begin
            $display ("CAM produced undefined output on addr for invalid user. Make sure you're not inferring a latch anywhere!");
            err = 1'b1;
        end

        // Test that length must be correct
        data = 64'h00000000004f454c;
        data_len = 4'd4;
        #5
        if (valid !== 1'b0) begin
            $display ("CAM failed on valid user %h with invalid length %d", data, data_len);
            err = 1'b1;
        end

        data = 64'h00000000004f454c;
        data_len = 4'd2;
        #5
        if (valid !== 1'b0) begin
            $display ("CAM failed on valid user %h with invalid length %d", data, data_len);
            err = 1'b1;
        end
        
        if (err==1'b0) begin
            $display ("All tests in test bench passed successfully!");
        end
        
    end

endmodule
