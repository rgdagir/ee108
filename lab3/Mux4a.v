 `define ON 2'b01
 `define OFF 2'b00
 `define FLASH1 2'b10
 `define FLASH2 2'b11

module Mux4a(
	input wire on, off, flash1, flash2,
	input wire [1:0] sel,
	output wire b
    );

	assign b = (sel ==  `ON) ? on : ((sel == `OFF) ? off : ((sel == `FLASH1) ? flash1 : flash2)); 

endmodule
