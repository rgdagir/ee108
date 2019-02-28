library verilog;
use verilog.vl_types.all;
entity ac97_if is
    port(
        ClkIn           : in     vl_logic;
        Reset           : in     vl_logic;
        PCM_Playback_Left: in     vl_logic_vector(15 downto 0);
        PCM_Playback_Right: in     vl_logic_vector(15 downto 0);
        PCM_Record_Left : out    vl_logic_vector(15 downto 0);
        PCM_Record_Right: out    vl_logic_vector(15 downto 0);
        PCM_Record_Valid: out    vl_logic;
        PCM_Playback_Accept: out    vl_logic;
        AC97Reset_n     : out    vl_logic;
        AC97Clk         : in     vl_logic;
        Sync            : out    vl_logic;
        SData_Out       : out    vl_logic;
        SData_In        : in     vl_logic
    );
end ac97_if;
