/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003349729749_0700480285_init();
    work_m_00000000001423992010_0778686763_init();
    work_m_00000000002129617870_1983210919_init();
    work_m_00000000002041808594_1678943863_init();
    work_m_00000000003079997875_1313920076_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003079997875_1313920076");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
