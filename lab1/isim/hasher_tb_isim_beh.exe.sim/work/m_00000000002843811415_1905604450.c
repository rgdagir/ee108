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
static const char *ng0 = "//afs/ir/class/ee108/groups/02/lab1/hasher_tb.v";
static unsigned int ng1[] = {826361412U, 0U, 3749689U, 0U};
static unsigned int ng2[] = {7U, 0U};
static const char *ng3 = "%h,%h,%h";
static unsigned int ng4[] = {1398230851U, 0U, 1162630482U, 0U};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {1380865362U, 0U, 20053U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {1380008777U, 0U, 21333U, 0U};
static unsigned int ng9[] = {1480935768U, 0U, 17737U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {860631888U, 0U, 1330532935U, 0U};
static unsigned int ng12[] = {1314009158U, 0U, 1414283607U, 0U};
static unsigned int ng13[] = {1395741249U, 0U, 16724U, 0U};
static const char *ng14 = "---";
static int ng15[] = {0, 0, 0, 0};
static int ng16[] = {1, 0};
static int ng17[] = {256, 0};



static void Initial_14_0(char *t0)
{
    char t15[8];
    char t16[16];
    char t30[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    int t14;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    char *t48;

LAB0:    t1 = (t0 + 1444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);

LAB4:    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 828);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 920);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 600U);
    t10 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t0, (char)118, t5, 64, (char)118, t8, 4, (char)118, t10, 32);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 828);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 920);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 600U);
    t10 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t0, (char)118, t5, 64, (char)118, t8, 4, (char)118, t10, 32);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 828);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 920);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 600U);
    t10 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t0, (char)118, t5, 64, (char)118, t8, 4, (char)118, t10, 32);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 828);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 920);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 600U);
    t10 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t0, (char)118, t5, 64, (char)118, t8, 4, (char)118, t10, 32);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 828);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 920);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 600U);
    t10 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t0, (char)118, t5, 64, (char)118, t8, 4, (char)118, t10, 32);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 828);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 920);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 600U);
    t10 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t0, (char)118, t5, 64, (char)118, t8, 4, (char)118, t10, 32);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 828);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 920);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 600U);
    t10 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t0, (char)118, t5, 64, (char)118, t8, 4, (char)118, t10, 32);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 828);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 920);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 600U);
    t10 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t0, (char)118, t5, 64, (char)118, t8, 4, (char)118, t10, 32);
    xsi_set_current_line(49, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t2);
    t14 = (t13 & t12);
    t4 = (t0 + 2776);
    *((int *)t4) = t14;

LAB13:    t5 = (t0 + 2776);
    if (*((int *)t5) > 0)
        goto LAB14;

LAB15:    goto LAB1;

LAB14:    xsi_set_current_line(55, ng0);

LAB16:    xsi_set_current_line(56, ng0);
    *((int *)t15) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t6 = (t15 + 4);
    *((int *)t6) = 0;
    memcpy(t16, t15, 8);
    t7 = (t16 + 8);
    memset(t7, 0, 8);
    t19 = *((unsigned int *)t15);
    t20 = (t19 & 2147483648U);
    t17 = t20;
    t8 = (t15 + 4);
    t21 = *((unsigned int *)t8);
    t22 = (t21 & 2147483648U);
    t18 = t22;
    t23 = (t20 != 0);
    if (t23 == 1)
        goto LAB17;

LAB18:    t26 = (t22 != 0);
    if (t26 == 1)
        goto LAB19;

LAB20:    memcpy(t30, t16, 8);
    t31 = (t30 + 8);
    memset(t31, 0, 8);
    t34 = *((unsigned int *)t16);
    t35 = (t34 & 2147483648U);
    t32 = t35;
    t36 = (t16 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (t37 & 2147483648U);
    t33 = t38;
    t39 = (t35 != 0);
    if (t39 == 1)
        goto LAB21;

LAB22:    t43 = (t38 != 0);
    if (t43 == 1)
        goto LAB23;

LAB24:    t48 = (t0 + 828);
    xsi_vlogvar_assign_value(t48, t30, 0, 0, 64);
    xsi_set_current_line(57, ng0);
    *((int *)t15) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t15 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t15, 0, 0, 4);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB17:    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 | 0U);
    t9 = (t16 + 8);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t25 | 4294967295U);
    goto LAB18;

LAB19:    t10 = (t16 + 4);
    t27 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t27 | 0U);
    t28 = (t16 + 12);
    t29 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t29 | 4294967295U);
    goto LAB20;

LAB21:    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 | 0U);
    t41 = (t30 + 8);
    t42 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t42 | 4294967295U);
    goto LAB22;

LAB23:    t44 = (t30 + 4);
    t45 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t45 | 0U);
    t46 = (t30 + 12);
    t47 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t47 | 4294967295U);
    goto LAB24;

LAB25:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 828);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 920);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 600U);
    t10 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t0, (char)118, t5, 64, (char)118, t8, 4, (char)118, t10, 32);
    t2 = (t0 + 2776);
    t14 = *((int *)t2);
    *((int *)t2) = (t14 - 1);
    goto LAB13;

}


extern void work_m_00000000002843811415_1905604450_init()
{
	static char *pe[] = {(void *)Initial_14_0};
	xsi_register_didat("work_m_00000000002843811415_1905604450", "isim/hasher_tb_isim_beh.exe.sim/work/m_00000000002843811415_1905604450.didat");
	xsi_register_executes(pe);
}
