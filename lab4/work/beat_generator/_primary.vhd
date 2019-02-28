library verilog;
use verilog.vl_types.all;
entity beat_generator is
    generic(
        WIDTH           : integer := 10;
        STOP            : integer := 1000
    );
    port(
        clk             : in     vl_logic;
        reset           : in     vl_logic;
        en              : in     vl_logic;
        beat            : out    vl_logic
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of WIDTH : constant is 1;
    attribute mti_svvh_generic_type of STOP : constant is 1;
end beat_generator;
