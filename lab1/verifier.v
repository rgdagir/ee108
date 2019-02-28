module verifier (
   input wire [63:0] username,
	input wire [63:0] password,
	output wire valid
);

	// FINISH HIM
	wire [3:0] length_pass, length_name;
	length_finder lengthy_pass(.string(password), .length(length_pass));
	length_finder lengthy_user(.string(username), .length(length_name));


	wire [31:0] hash, rom_out;
	hasher hashy(.data(password), .data_len(length_pass), .hash(hash));
	
	wire [2:0] addr;
	wire valid_name;
	cam camy(.data(username), .data_len(length_name), .addr(addr), .valid(valid_name));
	hash_rom romy(.addr(addr), .data(rom_out));
	
	assign valid = (hash == rom_out) & valid_name;
endmodule
