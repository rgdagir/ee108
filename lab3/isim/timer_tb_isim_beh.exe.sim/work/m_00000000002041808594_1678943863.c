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
static const char *ng0 = "//afs/ir/class/ee108/groups/02/lab3/timer.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};



static void Always_72_0(char *t0)
{
    char t6[8];
    char t18[8];
    char t22[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2008);
    *((int *)t2) = 1;
    t3 = (t0 + 1840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) > *((unsigned int *)t4))
        goto LAB8;

LAB9:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t19 = (t14 ^ t15);
    t20 = (t13 | t19);
    t21 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t5);
    t24 = (t21 | t23);
    t25 = (~(t24));
    t26 = (t20 & t25);
    if (t26 != 0)
        goto LAB31;

LAB28:    if (t24 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t6) = 1;

LAB31:    t8 = (t6 + 4);
    t28 = *((unsigned int *)t8);
    t29 = (~(t28));
    t30 = *((unsigned int *)t6);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(83, ng0);

LAB36:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    xsi_vlogtype_concat(t6, 9, 9, 2U, t4, 7, t2, 2);
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 9);

LAB34:
LAB13:    goto LAB2;

LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(74, ng0);

LAB14:    xsi_set_current_line(75, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 1196);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t2) != 0)
        goto LAB17;

LAB18:    t5 = (t18 + 4);
    t19 = *((unsigned int *)t18);
    t20 = *((unsigned int *)t5);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB19;

LAB20:    t23 = *((unsigned int *)t18);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t5) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t18) > 0)
        goto LAB25;

LAB26:    memcpy(t6, t27, 8);

LAB27:    t17 = (t0 + 1288);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 9);
    goto LAB13;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB17:    t4 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB19:    t7 = (t0 + 968U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 32, t8, 9, t7, 32);
    goto LAB20;

LAB21:    t9 = (t0 + 1288);
    t10 = (t9 + 36U);
    t16 = *((char **)t10);
    memcpy(t27, t16, 8);
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t6, 32, t22, 32, t27, 32);
    goto LAB27;

LAB25:    memcpy(t6, t22, 8);
    goto LAB27;

LAB30:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(79, ng0);

LAB35:    xsi_set_current_line(80, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 1196);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    xsi_vlogtype_concat(t6, 9, 9, 2U, t4, 7, t2, 2);
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 9);
    goto LAB34;

}


extern void work_m_00000000002041808594_1678943863_init()
{
	static char *pe[] = {(void *)Always_72_0};
	xsi_register_didat("work_m_00000000002041808594_1678943863", "isim/timer_tb_isim_beh.exe.sim/work/m_00000000002041808594_1678943863.didat");
	xsi_register_executes(pe);
}
