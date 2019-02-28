library verilog;
use verilog.vl_types.all;
entity ram_1w2r is
    generic(
        WIDTH           : integer := 8;
        DEPTH           : integer := 8
    );
    port(
        clka            : in     vl_logic;
        wea             : in     vl_logic;
        addra           : in     vl_logic_vector;
        dina            : in     vl_logic_vector;
        douta           : out    vl_logic_vector;
        clkb            : in     vl_logic;
        addrb           : in     vl_logic_vector;
        doutb           : out    vl_logic_vector
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of WIDTH : constant is 1;
    attribute mti_svvh_generic_type of DEPTH : constant is 1;
end ram_1w2r;
