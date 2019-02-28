// fast: 1, slow: 0
// ASK SECTION WHY THE HECK WHEN BOTH RIGHT AND LEFT IS PRESSED, FAST CASE WILL STILL TRIGGER SHIFT RIGHT
module shifter #(RATE = 0) (
		input clk,
		input reset,
		input wire shift_left, // 10
		input wire shift_right, // 01
		output wire [6:0] out
    );
	 reg [6:0] store_val;
	 wire [6:0] val;
	 
	 dffr #(7) flipflop(.clk(clk), .r(reset), .d(store_val), .q(val));
	
	 // RETURNS DEFAULT when val is all zeros
	 // RETURNS val when val is not all zeros
	 // Logic: ({7{&(~val)}} & `DEFAULT) will only return default when val is all 0's, else return 7 0's
	 // Logic: ({7{|val}} & val) will only return val when val has at least one 1's, else return 7 0's
	 // all in all, out is just val unless val is reset ot 0's
	 assign out = ({7{&(~val)}} & 7'b0001000) | ({7{|val}} & val) ;
	 
	 always @(*) begin 
		 case({shift_left, shift_right})
			2'b01: begin
						case((out[0] & RATE) | (out[3] & !RATE))
							1: store_val = out;
							0: store_val = out >> 1;
							default: store_val = val;
						endcase
					end 
			2'b10: begin 
						case((out[3] & RATE) | (out[6] & !RATE))
							1: store_val = out;
							0: store_val = out << 1;
							default: store_val = val;
						endcase
					end
			default: store_val = val;
		 
		 endcase
	end
	
	

endmodule
