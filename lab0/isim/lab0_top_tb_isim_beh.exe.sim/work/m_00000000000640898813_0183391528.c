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
static const char *ng0 = "//afs/ir/class/ee108/groups/02/lab0/lab0_top_tb.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {12U, 0U};
static unsigned int ng4[] = {10U, 0U};
static const char *ng5 = "Output is %b, we expected %b";
static unsigned int ng6[] = {3U, 0U};



static void Initial_13_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);

LAB4:    xsi_set_current_line(14, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(15, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    t4 = ((char*)((ng4)));
    t6 = *((unsigned int *)t2);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t9 = (t2 + 4);
    t10 = (t4 + 4);
    t11 = (t5 + 4);
    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB7;

LAB8:
LAB9:    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)118, t3, 4, (char)118, t5, 4);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB7:    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t17 | t18);
    t19 = (t2 + 4);
    t20 = (t4 + 4);
    t21 = *((unsigned int *)t2);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t34 & t32);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    t36 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t36 & t32);
    goto LAB9;

LAB10:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    t9 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 4, t3, 4, t9, 4);
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)118, t4, 4, (char)118, t5, 4);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    t9 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 4, t3, 4, t9, 4);
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)118, t4, 4, (char)118, t5, 4);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    t9 = ((char*)((ng6)));
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t9);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t10 = (t3 + 4);
    t11 = (t9 + 4);
    t19 = (t5 + 4);
    t12 = *((unsigned int *)t10);
    t13 = *((unsigned int *)t11);
    t14 = (t12 | t13);
    *((unsigned int *)t19) = t14;
    t15 = *((unsigned int *)t19);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)118, t4, 4, (char)118, t5, 4);
    xsi_set_current_line(56, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

LAB13:    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t19);
    *((unsigned int *)t5) = (t17 | t18);
    t20 = (t3 + 4);
    t37 = (t9 + 4);
    t21 = *((unsigned int *)t3);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (~(t25));
    t27 = *((unsigned int *)t37);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t33 & t31);
    t34 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t34 & t32);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    t36 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t36 & t32);
    goto LAB15;

}


extern void work_m_00000000000640898813_0183391528_init()
{
	static char *pe[] = {(void *)Initial_13_0};
	xsi_register_didat("work_m_00000000000640898813_0183391528", "isim/lab0_top_tb_isim_beh.exe.sim/work/m_00000000000640898813_0183391528.didat");
	xsi_register_executes(pe);
}
