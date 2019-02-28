module verifier_tb ();

    reg [63:0] u;
    reg [63:0] p;
    reg err;
    wire v;

    verifier dut (.username(u), .password(p), .valid(v));

    initial begin
        err = 1'b0;

        // Try each username with both a valid and invalid password

        u = 64'h00000000004f454c;
        p = 64'h0039373931414644;

        #5 if (v !== 1'b1) begin $display ("Verifier failed on valid combo %h/%h",u,p); err = 1'b1; end
        p = 64'h5555555555555555;
        #5 if (v !== 1'b0) begin $display ("Verifier failed on invalid password %h/%h",u,p); err = 1'b1; end

        u = 64'h0000004e4f524141;
        p = 64'h454C555253574F43;

        #5 if (v !== 1'b1) begin $display ("Verifier failed on valid combo %h/%h",u,p); err = 1'b1; end
        p = 64'h5555555555555555;
        #5 if (v !== 1'b0) begin $display ("Verifier failed on invalid password %h/%h",u,p); err = 1'b1; end

        u = 64'h000000594c4c4f48;
        p = 64'h00004E55524E5552;

        #5 if (v !== 1'b1) begin $display ("Verifier failed on valid combo %h/%h",u,p); err = 1'b1; end
        p = 64'h5555555555555555;
        #5 if (v !== 1'b0) begin $display ("Verifier failed on invalid password %h/%h",u,p); err = 1'b1; end

        u = 64'h0000004449564144;
        p = 64'h0000535552414349;

        #5 if (v !== 1'b1) begin $display ("Verifier failed on valid combo %h/%h",u,p); err = 1'b1; end
        p = 64'h5555555555555555;
        #5 if (v !== 1'b0) begin $display ("Verifier failed on invalid password %h/%h",u,p); err = 1'b1; end

        u = 64'h0000455249414c43;
        p = 64'h0000454958454958;

        #5 if (v !== 1'b1) begin $display ("Verifier failed on valid combo %h/%h",u,p); err = 1'b1; end
        p = 64'h5555555555555555;
        #5 if (v !== 1'b0) begin $display ("Verifier failed on invalid password %h/%h",u,p); err = 1'b1; end

        u = 64'h0000004b4e415246;
        p = 64'h4F4E5247334C3350;

        #5 if (v !== 1'b1) begin $display ("Verifier failed on valid combo %h/%h",u,p); err = 1'b1; end
        p = 64'h5555555555555555;
        #5 if (v !== 1'b0) begin $display ("Verifier failed on invalid password %h/%h",u,p); err = 1'b1; end

        u = 64'h00000045434e414c;
        p = 64'h544C41574E523046;

        #5 if (v !== 1'b1) begin $display ("Verifier failed on valid combo %h/%h",u,p); err = 1'b1; end
        p = 64'h5555555555555555;
        #5 if (v !== 1'b0) begin $display ("Verifier failed on invalid password %h/%h",u,p); err = 1'b1; end

        u = 64'h000000004e415952;
        p = 64'h0000415453315241;

        #5 if (v !== 1'b1) begin $display ("Verifier failed on valid combo %h/%h",u,p); err = 1'b1; end
        p = 64'h5555555555555555;
        #5 if (v !== 1'b0) begin $display ("Verifier failed on invalid password %h/%h",u,p); err = 1'b1; end

        // Try a bogus username with a bogus password
        u = 64'hAAAAAAAAAAAAAAAA;
        p = 64'h5555555555555555;
        #5 if (v !== 1'b0) begin $display ("Verifier failed on invalid combo %h/%h",u,p); err = 1'b1; end

        // Try a bogus username with a valid password
        u = 64'hAAAAAAAAAAAAAAAA;
        p = 64'h4F4E5247334C3350;
        #5 if (v !== 1'b0) begin $display ("Verifier failed on invalid username %h/%h",u,p); err = 1'b1; end

        if (err==1'b0) begin
            $display ("All tests in test bench passed successfully!");
        end


    end



endmodule
