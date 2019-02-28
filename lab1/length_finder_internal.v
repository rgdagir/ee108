module length_finder_internal (
   input wire [63:0] string,
   output reg [3:0] length
);
   wire [7:0] is_character_null;

   assign is_character_null[0] = ~(|string[7:0]);
   assign is_character_null[1] = ~(|string[15:8]);
   assign is_character_null[2] = ~(|string[23:16]);
   assign is_character_null[3] = ~(|string[31:24]);
   assign is_character_null[4] = ~(|string[39:32]);
   assign is_character_null[5] = ~(|string[47:40]);
   assign is_character_null[6] = ~(|string[55:48]);
   assign is_character_null[7] = ~(|string[63:56]);

   always @(*) begin
      casex (is_character_null)
         8'bxxxxxxx1: length[2:0] = 3'd0;
         8'bxxxxxx10: length[2:0] = 3'd1;
         8'bxxxxx100: length[2:0] = 3'd2;
         8'bxxxx1000: length[2:0] = 3'd3;
         8'bxxx10000: length[2:0] = 3'd4;
         8'bxx100000: length[2:0] = 3'd5;
         8'bx1000000: length[2:0] = 3'd6;
         8'b10000000: length[2:0] = 3'd7;
         default: length[2:0] = 3'd0;
      endcase
      
      length[3] = (is_character_null == 0);
   end

   
endmodule
