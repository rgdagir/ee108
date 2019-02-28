module hasher (
   input wire [63:0] data,
	input wire [3:0] data_len,
	output wire [31:0] hash
);
	// Reminder: whats with this reference
	// DO IT GORDON
	wire [31:0] hash_state0, hash_state1, hash_state2, hash_state3,
					hash_state4, hash_state5, hash_state6, hash_state7,
					out_state6, out_state7, final_state;
					
	assign hash_state0 = 32'h55555555;
	assign hash_state1 = 32'hAAAAAAAA;
	
	hash_round #(0) hash0(.in_state(hash_state0), .in_byte(data[7:0]), .out_state(hash_state2));
	hash_round #(1) hash1(.in_state(hash_state1), .in_byte(data[15:8]), .out_state(hash_state3));
	
	hash_round #(2) hash2(.in_state(hash_state2), .in_byte(data[23:16]), .out_state(hash_state4));
	hash_round #(3) hash3(.in_state(hash_state3), .in_byte(data[31:24]), .out_state(hash_state5));
	
	hash_round #(4) hash4(.in_state(hash_state4), .in_byte(data[39:32]), .out_state(hash_state6));
	hash_round #(5) hash5(.in_state(hash_state5), .in_byte(data[47:40]), .out_state(hash_state7));

	hash_round #(6) hash6(.in_state(hash_state6), .in_byte(data[55:48]), .out_state(out_state6));
	hash_round #(7) hash7(.in_state(hash_state7), .in_byte(data[63:56]), .out_state(out_state7));
	
	assign final_state = out_state6 ^ out_state7;
	
	//rotator #(.WIDTH(32)) roty(.in(final_state), .direction(data_len[0]^data_len[1]^data_len[2]^data_len[3]), 
							 //.distance({3'b000, final_state[4:0]}), .out(hash));
							 
	rotator #(.WIDTH(32)) dut_32(
        .in(final_state),
        .out(hash),
        .distance({3'b000, final_state[4:0]}),
        .direction(data_len[0]^data_len[1]^data_len[2]^data_len[3])
    );
endmodule
