module adder(input wire [4:0] a,
				 input wire [4:0] b,
				 output wire [4:0] sum,
				 output wire cout
    );
	assign {cout,sum} = a + b;

endmodule
