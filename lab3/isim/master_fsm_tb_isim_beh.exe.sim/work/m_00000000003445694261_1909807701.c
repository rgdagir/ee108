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
static const char *ng0 = "//afs/ir/class/ee108/groups/02/lab3/master_fsm.v";
static unsigned int ng1[] = {3U, 0U};
static unsigned int ng2[] = {5U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {4U, 0U};



static void Always_24_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2756);
    *((int *)t2) = 1;
    t3 = (t0 + 2300);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t7 = (t0 + 1472);
    xsi_vlogvar_assign_value(t7, t2, 2, 0, 1);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t2, 3, 0, 1);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(26, ng0);

LAB14:    xsi_set_current_line(27, ng0);
    t7 = (t0 + 968U);
    t8 = *((char **)t7);
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 1472);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB13;

LAB9:    xsi_set_current_line(31, ng0);

LAB15:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 968U);
    t4 = *((char **)t3);
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 1656);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB13;

}

static void Always_40_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2764);
    *((int *)t2) = 1;
    t3 = (t0 + 2444);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(66, ng0);

LAB28:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(42, ng0);

LAB22:    xsi_set_current_line(43, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t0 + 1748);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    goto LAB21;

LAB9:    xsi_set_current_line(46, ng0);

LAB23:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB21;

LAB11:    xsi_set_current_line(50, ng0);

LAB24:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB21;

LAB13:    xsi_set_current_line(54, ng0);

LAB25:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB21;

LAB15:    xsi_set_current_line(58, ng0);

LAB26:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB21;

LAB17:    xsi_set_current_line(62, ng0);

LAB27:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB21;

}

static void Always_73_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;
    int t10;

LAB0:    t1 = (t0 + 2560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2772);
    *((int *)t2) = 1;
    t3 = (t0 + 2588);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(73, ng0);

LAB5:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t3 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 3);
    if (t9 == 1)
        goto LAB11;

LAB12:    t4 = ((char*)((ng1)));
    t10 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t10 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(75, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t0 + 1288);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 2);
    goto LAB21;

LAB9:    goto LAB7;

LAB11:    goto LAB7;

LAB13:    xsi_set_current_line(76, ng0);
    t7 = ((char*)((ng5)));
    t8 = (t0 + 1288);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 2);
    goto LAB21;

LAB15:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    goto LAB21;

LAB17:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    goto LAB21;

}


extern void work_m_00000000003445694261_1909807701_init()
{
	static char *pe[] = {(void *)Always_24_0,(void *)Always_40_1,(void *)Always_73_2};
	xsi_register_didat("work_m_00000000003445694261_1909807701", "isim/master_fsm_tb_isim_beh.exe.sim/work/m_00000000003445694261_1909807701.didat");
	xsi_register_executes(pe);
}
