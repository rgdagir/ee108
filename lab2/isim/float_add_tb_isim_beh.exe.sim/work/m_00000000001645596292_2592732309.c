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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//afs/ir/class/ee108/groups/02/lab02/float_add_tb.v";
static unsigned int ng1[] = {8U, 0U};
static unsigned int ng2[] = {3U, 0U};
static const char *ng3 = "Output is %b, we expected %b";
static unsigned int ng4[] = {11U, 0U};
static unsigned int ng5[] = {49U, 0U};
static unsigned int ng6[] = {12U, 0U};
static unsigned int ng7[] = {55U, 0U};
static unsigned int ng8[] = {146U, 0U};
static unsigned int ng9[] = {95U, 0U};
static unsigned int ng10[] = {153U, 0U};
static unsigned int ng11[] = {254U, 0U};
static unsigned int ng12[] = {194U, 0U};
static unsigned int ng13[] = {255U, 0U};
static unsigned int ng14[] = {63U, 0U};
static unsigned int ng15[] = {1U, 0U};
static unsigned int ng16[] = {248U, 0U};
static unsigned int ng17[] = {226U, 0U};
static unsigned int ng18[] = {195U, 0U};
static unsigned int ng19[] = {31U, 0U};
static unsigned int ng20[] = {48U, 0U};
static unsigned int ng21[] = {30U, 0U};



static void Initial_9_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 1444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);

LAB4:    xsi_set_current_line(11, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(12, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(14, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t0, (char)118, t4, 8, (char)118, t3, 8);
    xsi_set_current_line(16, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng7)));
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t0, (char)118, t4, 8, (char)118, t3, 8);
    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng10)));
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t0, (char)118, t4, 8, (char)118, t3, 8);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng13)));
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t0, (char)118, t4, 8, (char)118, t3, 8);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng14)));
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t0, (char)118, t4, 8, (char)118, t3, 8);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng13)));
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t0, (char)118, t4, 8, (char)118, t3, 8);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng13)));
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t0, (char)118, t4, 8, (char)118, t3, 8);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng13)));
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t0, (char)118, t4, 8, (char)118, t3, 8);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng14)));
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t0, (char)118, t4, 8, (char)118, t3, 8);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng20)));
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t0, (char)118, t4, 8, (char)118, t3, 8);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng20)));
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t0, (char)118, t4, 8, (char)118, t3, 8);
    goto LAB1;

}


extern void work_m_00000000001645596292_2592732309_init()
{
	static char *pe[] = {(void *)Initial_9_0};
	xsi_register_didat("work_m_00000000001645596292_2592732309", "isim/float_add_tb_isim_beh.exe.sim/work/m_00000000001645596292_2592732309.didat");
	xsi_register_executes(pe);
}
