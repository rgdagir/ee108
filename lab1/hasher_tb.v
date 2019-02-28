module hasher_tb ();

   reg [63:0] in;
   reg [3:0] in_len;
   
   wire [31:0] out;

   hasher dut (
      .data (in),
      .data_len (in_len),
      .hash (out)
   );
   
   initial begin
      // Password hashes
      
      in = 64'h0039373931414644;
      in_len = 4'd7;
      #5 $display("%h,%h,%h",in,in_len,out);

      in = 64'h454C555253574F43;
      in_len = 4'd8;
      #5 $display("%h,%h,%h",in,in_len,out);
      
      in = 64'h00004E55524E5552;
      in_len = 4'd6;
      #5 $display("%h,%h,%h",in,in_len,out);
      
      in = 64'h0000535552414349;
      in_len = 4'd6;
      #5 $display("%h,%h,%h",in,in_len,out);
      
      in = 64'h000000454958454958;
      in_len = 4'd5;
      #5 $display("%h,%h,%h",in,in_len,out);
      
      in = 64'h4F4E5247334C3350;
      in_len = 4'd8;
      #5 $display("%h,%h,%h",in,in_len,out);
      
      in = 64'h544C41574E523046;
      in_len = 4'd8;
      #5 $display("%h,%h,%h",in,in_len,out);
      
      in = 64'h0000415453315241;
      in_len = 4'd6;
      #5 $display("%h,%h,%h",in,in_len,out);

      $display("---");

      // Generate random hashes
      
      in = 0;
      in_len = 1;
      repeat (256) begin
         in = $random;
         in_len = $random;
         #5 $display("%h,%h,%h",in,in_len,out);
      end
      
      
   end
   
endmodule
