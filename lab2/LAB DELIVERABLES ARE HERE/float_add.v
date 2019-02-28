module float_add(input wire [7:0] aIn,
					  input wire [7:0] bIn,
					  output reg [7:0] result);
	wire [7:0] aOut, bOut;
	big_number_first bnf(.aIn(aIn),.bIn(bIn),.aOut(aOut),.bOut(bOut));
	// finding distance to shift
	wire [2:0] distance = aOut[7:5] - bOut[7:5];
	wire [4:0] b_mantissa;
	shifter shift(.in(bOut[4:0]), .distance(distance), .direction(1'b0), .out(b_mantissa));
	wire [7:0] new_b = {aOut[7:5], b_mantissa};
	
	wire [4:0] sum;
	wire cout;
	adder addr(.a(aOut[4:0]),.b(new_b[4:0]), .sum(sum), .cout(cout));
	
	always @(*) begin 
	
	// assessing saturation  - exponent is 111 and there is overflow in the mantissa sum
	if(aOut[7:5] == 3'b111 && cout) 
		begin
		// represent max float
		result = {aOut[7:5], 5'b11111};
		end
	else 
		begin
		// if there is just overflow in the sum
		if(cout)
			begin
			// solving overflow: add 1 to the exponent and make the carry bit the MSB of mantissa
			result ={(aOut[7:5] + 1), cout, sum[4:1]};
			end
		else 
			begin
			// default case
			result = {aOut[7:5], sum};
			end
		end
	end 
	

endmodule
