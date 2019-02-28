module hash_rom_tb ();

    reg [2:0] addr;
    reg [31:0] expected;
    reg err;
    wire [31:0] data;

    hash_rom dut (.addr(addr), .data(data));

    initial begin
        err = 1'b0;

        addr = 3'd0;
        expected = 32'hDC1A2C9E;
        #5
        if (expected !== data) begin
            $display ("INCORRECT HASH AT ADDR %H", addr);
            err = 1'b1;
        end
        
        addr = 3'd1;
        expected = 32'hDC2EA8E4;
        #5
        if (expected !== data) begin
            $display ("INCORRECT HASH AT ADDR %H", addr);
            err = 1'b1;
        end

        addr = 3'd2;
        expected = 32'h355FACC3;
        #5
        if (expected !== data) begin
            $display ("INCORRECT HASH AT ADDR %H", addr);
            err = 1'b1;
        end

        addr = 3'd3;
        expected = 32'hAAF4ADC9;
        #5
        if (expected !== data) begin
            $display ("INCORRECT HASH AT ADDR %H", addr);
            err = 1'b1;
        end

        addr = 3'd4;
        expected = 32'h13D41CED;
        #5
        if (expected !== data) begin
            $display ("INCORRECT HASH AT ADDR %H", addr);
            err = 1'b1;
        end

        addr = 3'd5;
        expected = 32'h7EBCF8A8;
        #5
        if (expected !== data) begin
            $display ("INCORRECT HASH AT ADDR %H", addr);
            err = 1'b1;
        end

        addr = 3'd6;
        expected = 32'hF3CDDB9B;
        #5
        if (expected !== data) begin
            $display ("INCORRECT HASH AT ADDR %H", addr);
            err = 1'b1;
        end

        addr = 3'd7;
        expected = 32'h9948E6BE;
        #5
        if (expected !== data) begin
            $display ("INCORRECT HASH AT ADDR %H", addr);
            err = 1'b1;
        end

        if (err==1'b0) begin
            $display ("All tests in test bench passed successfully!");
        end

    end

endmodule
