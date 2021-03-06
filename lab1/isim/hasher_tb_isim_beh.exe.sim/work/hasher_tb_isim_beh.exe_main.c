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
    work_m_00000000003233392633_3349951390_init();
    work_m_00000000000419320097_4204294736_init();
    work_m_00000000000419320097_2731277283_init();
    work_m_00000000000419320097_2313594912_init();
    work_m_00000000000419320097_2432538977_init();
    work_m_00000000000419320097_3753643942_init();
    work_m_00000000000419320097_3332849383_init();
    work_m_00000000000419320097_3985272100_init();
    work_m_00000000000419320097_4103167077_init();
    work_m_00000000003233392633_0889073672_init();
    work_m_00000000002056125057_0258157263_init();
    work_m_00000000002843811415_1905604450_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002843811415_1905604450");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
