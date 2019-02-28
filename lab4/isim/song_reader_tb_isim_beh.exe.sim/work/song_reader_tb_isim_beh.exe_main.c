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
    work_m_00000000000036348317_2153102842_init();
    work_m_00000000003349729749_0773660786_init();
    work_m_00000000003349729749_2017953780_init();
    work_m_00000000003413351003_2195893790_init();
    work_m_00000000000978949549_1670653869_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000978949549_1670653869");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
