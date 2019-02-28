`include "dvi_defines.v"

module input_box (
   input clk,
   input rst,
   
   input left_button,
   input right_button,
   input char_up,
   input char_dn,
   input en,
   
   output reg [63:0] value,
   
   input [`log2NUM_COLS-1:0] x,
   input [`log2NUM_ROWS-1:0] y,

   output reg [7:0] r,
   output [7:0] g,
   output [7:0] b
);
   /// Input logic ////////////////////////////////////////////////////////////
   
   reg [7:0] next_char;
   reg [7:0] prev_char;
   wire [7:0] new_char;
   reg [7:0] current_char;
   wire [7:0] modify_char;
   
   // Cursor position
   reg [3:0] pos;
   wire [6:0] pos_bits = {3'b0, pos} << 3;
   wire can_advance = (pos < 7) & (current_char != 8'b0);
   wire can_retreat = (pos > 0);
   
   always @(posedge clk) begin
      if (rst) begin
         pos <= 4'b0;
      end else if (en) begin
         if (right_button & can_advance)
            pos <= pos + 4'b1;
         else if (left_button & can_retreat)
            pos <= pos - 4'b1;
      end
   end
   
   // New character calculation
   integer i;
   always @(*) begin
      for (i = 0; i < 8; i = i+1) begin
         current_char[i] = value[pos_bits+i];
      end
   end
   
   wire [3:0] value_length;
   length_finder_internal value_length_finder (
      .string(value),
      .length(value_length)
   );
   
   always @(*) begin
      if (current_char==8'd0) begin // Null
         next_char = 8'd65; // A
         prev_char = 8'd57; // 9
      end else if (current_char==8'd90) begin // Z
         next_char = 8'd48; // 0
         prev_char = current_char - 1;
      end else if (current_char==8'd48) begin // 0
         next_char = current_char + 1;
         prev_char = 8'd90; // Z
      end else if (current_char==8'd65) begin // A
         next_char = current_char + 1;
         if (pos==value_length-1)
            prev_char = 8'd00; // Null
         else
            prev_char = 8'd57; // 9
      end else if (current_char==8'd57) begin // A
         if (pos==value_length-1)
            next_char = 8'd00; // Null
         else
            next_char = 8'd65; // A
         prev_char = current_char - 1;
      end else begin
         next_char = current_char + 1;
         prev_char = current_char - 1;
      end
   end
   
   assign modify_char = char_up || char_dn;
   assign new_char = char_up ? next_char : prev_char;
   
   // Character modification
   integer j;
   always @(posedge clk) begin
      if (rst) begin
         value <= 64'b0;
      end else if (en) begin
         if (modify_char) begin
            for (j = 0; j < 8; j = j+1) begin
               value[pos_bits+j] <= new_char[j];
            end
         end
      end
   end
   
   /// Display logic //////////////////////////////////////////////////////////
   
   reg [8:0] rom_base_addr;
   wire [8:0] rom_addr = rom_base_addr + y[2:0];
   wire [7:0] rom_data;
   tcgrom char_rom (.addr(rom_addr), .data(rom_data));
   
   // Get char-to-display
   reg [7:0] disp_char;
   integer k;
   always @(*) begin
      if (x < 64) begin
         for (k = 0; k < 8; k = k+1) begin
            disp_char[k] = value[{x[5:3],3'b0}+k];
         end
      end else begin
         disp_char = 8'b0;
      end
   end
   
   // Convert ASCII to rom offset
   always @(*) begin
      if (disp_char >= 8'd65 && disp_char <= 8'd90)
         rom_base_addr = (disp_char - 9'd64) << 3;
      else if (disp_char >= 8'd48 && disp_char <= 8'd57)
         // The TCG rom offset for 0 just happens to be the same as the ASCII offset for 0, wooooahhhhh
         rom_base_addr = {1'b0, disp_char} << 3;
      else
         rom_base_addr = 9'h100;
   end
   
   // Convert rom data into pixel values
   reg char_px;
   wire [7:0] rom_bit_select = 8'b10000000 >> x[2:0];
   always @(*) begin
      if (x<64 && y<8) begin
         char_px = |(rom_data & rom_bit_select);
      end else
         char_px = 1'b0;
   end
   
   // Cursor logic
   reg cursor_px;
   always @(*) begin
      if (en && y>=8 && y<10)
         cursor_px = (x >= pos_bits && x < pos_bits+8);
      else
         cursor_px = 1'b0;
   end

   // Mux color signals
   always @(*) begin
      if (char_px)
         r = 8'hFF;
      else if (cursor_px)
         r = 8'hAA;
      else 
         r = 8'd00;
   end
   assign g = r;
   assign b = r;

endmodule
