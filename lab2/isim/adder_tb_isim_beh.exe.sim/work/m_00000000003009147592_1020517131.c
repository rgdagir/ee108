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
static const char *ng0 = "//afs/ir/class/ee108/groups/02/lab02/adder_tb.v";
static unsigned int ng1[] = {16U, 0U};
static const char *ng2 = "Output is %b and carry is %b, we expected %b and %b";
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {31U, 0U};
static unsigned int ng6[] = {30U, 0U};
static unsigned int ng7[] = {21U, 0U};
static unsigned int ng8[] = {10U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {6U, 0U};



static void Initial_11_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);

LAB4:    xsi_set_current_line(13, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(14, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng3)));
    t6 = ((char*)((ng4)));
    xsi_vlogfile_write(1, 0, 0, ng2, 5, t0, (char)118, t4, 5, (char)118, t5, 1, (char)118, t3, 5, (char)118, t6, 1);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng6)));
    t6 = ((char*)((ng4)));
    xsi_vlogfile_write(1, 0, 0, ng2, 5, t0, (char)118, t4, 5, (char)118, t5, 1, (char)118, t3, 5, (char)118, t6, 1);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng3)));
    t6 = ((char*)((ng4)));
    xsi_vlogfile_write(1, 0, 0, ng2, 5, t0, (char)118, t4, 5, (char)118, t5, 1, (char)118, t3, 5, (char)118, t6, 1);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng5)));
    t6 = ((char*)((ng3)));
    xsi_vlogfile_write(1, 0, 0, ng2, 5, t0, (char)118, t4, 5, (char)118, t5, 1, (char)118, t3, 5, (char)118, t6, 1);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng10)));
    t6 = ((char*)((ng3)));
    xsi_vlogfile_write(1, 0, 0, ng2, 5, t0, (char)118, t4, 5, (char)118, t5, 1, (char)118, t3, 5, (char)118, t6, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    t6 = ((char*)((ng3)));
    xsi_vlogfile_write(1, 0, 0, ng2, 5, t0, (char)118, t4, 5, (char)118, t5, 1, (char)118, t3, 5, (char)118, t6, 1);
    goto LAB1;

}


extern void work_m_00000000003009147592_1020517131_init()
{
	static char *pe[] = {(void *)Initial_11_0};
	xsi_register_didat("work_m_00000000003009147592_1020517131", "isim/adder_tb_isim_beh.exe.sim/work/m_00000000003009147592_1020517131.didat");
	xsi_register_executes(pe);
}
