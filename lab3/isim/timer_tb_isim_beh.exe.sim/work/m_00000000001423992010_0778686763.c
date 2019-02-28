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
static const char *ng0 = "//afs/ir/class/ee108/groups/02/lab3/beat32.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {1U, 0U, 0U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};



static void Always_11_0(char *t0)
{
    char t10[16];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 1824);
    *((int *)t2) = 1;
    t3 = (t0 + 1656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(12, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:
LAB10:
LAB9:    xsi_set_current_line(15, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 32, t3, 32);
    xsi_vlogtype_concat(t10, 33, 33, 2U, t11, 32, t2, 1);
    t7 = (t0 + 1012);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 1);
    t8 = (t0 + 1104);
    xsi_vlogvar_assign_value(t8, t10, 1, 0, 32);

LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(14, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1012);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    t9 = (t0 + 1104);
    xsi_vlogvar_assign_value(t9, t7, 1, 0, 32);
    goto LAB11;

}


extern void work_m_00000000001423992010_0778686763_init()
{
	static char *pe[] = {(void *)Always_11_0};
	xsi_register_didat("work_m_00000000001423992010_0778686763", "isim/timer_tb_isim_beh.exe.sim/work/m_00000000001423992010_0778686763.didat");
	xsi_register_executes(pe);
}
