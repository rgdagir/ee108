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
static const char *ng0 = "//afs/ir/class/ee108/groups/02/lab1/verifier_tb.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {5195084U, 0U, 0U, 0U};
static unsigned int ng3[] = {826361412U, 0U, 3749689U, 0U};
static unsigned int ng4[] = {1U, 0U};
static const char *ng5 = "Verifier failed on valid combo %h/%h";
static unsigned int ng6[] = {1431655765U, 0U, 1431655765U, 0U};
static const char *ng7 = "Verifier failed on invalid password %h/%h";
static unsigned int ng8[] = {1330790721U, 0U, 78U, 0U};
static unsigned int ng9[] = {1398230851U, 0U, 1162630482U, 0U};
static unsigned int ng10[] = {1280069448U, 0U, 89U, 0U};
static unsigned int ng11[] = {1380865362U, 0U, 20053U, 0U};
static unsigned int ng12[] = {1230389572U, 0U, 68U, 0U};
static unsigned int ng13[] = {1380008777U, 0U, 21333U, 0U};
static unsigned int ng14[] = {1229016131U, 0U, 17746U, 0U};
static unsigned int ng15[] = {1480935768U, 0U, 17737U, 0U};
static unsigned int ng16[] = {1312903750U, 0U, 75U, 0U};
static unsigned int ng17[] = {860631888U, 0U, 1330532935U, 0U};
static unsigned int ng18[] = {1129201996U, 0U, 69U, 0U};
static unsigned int ng19[] = {1314009158U, 0U, 1414283607U, 0U};
static unsigned int ng20[] = {1312905554U, 0U, 0U, 0U};
static unsigned int ng21[] = {1395741249U, 0U, 16724U, 0U};
static unsigned int ng22[] = {2863311530U, 0U, 2863311530U, 0U};
static const char *ng23 = "Verifier failed on invalid combo %h/%h";
static const char *ng24 = "Verifier failed on invalid username %h/%h";
static const char *ng25 = "All tests in test bench passed successfully!";



static void Initial_10_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);

LAB4:    xsi_set_current_line(11, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(15, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(16, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(18, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB7;

LAB6:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB7;

LAB8:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB7:    *((unsigned int *)t5) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(18, ng0);

LAB12:    xsi_set_current_line(18, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB11;

LAB13:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB15;

LAB14:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB15;

LAB16:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB15:    *((unsigned int *)t5) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(20, ng0);

LAB20:    xsi_set_current_line(20, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB19;

LAB21:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB23;

LAB22:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB23;

LAB24:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB23:    *((unsigned int *)t5) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(25, ng0);

LAB28:    xsi_set_current_line(25, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB27;

LAB29:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB31;

LAB30:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB31;

LAB32:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB33;

LAB34:
LAB35:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB31:    *((unsigned int *)t5) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(27, ng0);

LAB36:    xsi_set_current_line(27, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB35;

LAB37:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB39;

LAB38:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB39;

LAB40:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB41;

LAB42:
LAB43:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB39:    *((unsigned int *)t5) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(32, ng0);

LAB44:    xsi_set_current_line(32, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB43;

LAB45:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB47;

LAB46:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB47;

LAB48:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB49;

LAB50:
LAB51:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB47:    *((unsigned int *)t5) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(34, ng0);

LAB52:    xsi_set_current_line(34, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB51;

LAB53:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB55;

LAB54:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB55;

LAB56:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB57;

LAB58:
LAB59:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB55:    *((unsigned int *)t5) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(39, ng0);

LAB60:    xsi_set_current_line(39, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB59;

LAB61:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB63;

LAB62:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB63;

LAB64:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB65;

LAB66:
LAB67:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB69;
    goto LAB1;

LAB63:    *((unsigned int *)t5) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(41, ng0);

LAB68:    xsi_set_current_line(41, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB67;

LAB69:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB71;

LAB70:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB71;

LAB72:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB73;

LAB74:
LAB75:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB71:    *((unsigned int *)t5) = 1;
    goto LAB72;

LAB73:    xsi_set_current_line(46, ng0);

LAB76:    xsi_set_current_line(46, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB75;

LAB77:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB79;

LAB78:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB79;

LAB80:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB81;

LAB82:
LAB83:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB79:    *((unsigned int *)t5) = 1;
    goto LAB80;

LAB81:    xsi_set_current_line(48, ng0);

LAB84:    xsi_set_current_line(48, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB83;

LAB85:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB87;

LAB86:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB87;

LAB88:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB89;

LAB90:
LAB91:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB93;
    goto LAB1;

LAB87:    *((unsigned int *)t5) = 1;
    goto LAB88;

LAB89:    xsi_set_current_line(53, ng0);

LAB92:    xsi_set_current_line(53, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB91;

LAB93:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB95;

LAB94:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB95;

LAB96:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB97;

LAB98:
LAB99:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB101;
    goto LAB1;

LAB95:    *((unsigned int *)t5) = 1;
    goto LAB96;

LAB97:    xsi_set_current_line(55, ng0);

LAB100:    xsi_set_current_line(55, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB99;

LAB101:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB103;

LAB102:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB103;

LAB104:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB105;

LAB106:
LAB107:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB109;
    goto LAB1;

LAB103:    *((unsigned int *)t5) = 1;
    goto LAB104;

LAB105:    xsi_set_current_line(60, ng0);

LAB108:    xsi_set_current_line(60, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB107;

LAB109:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB111;

LAB110:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB111;

LAB112:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB113;

LAB114:
LAB115:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB117;
    goto LAB1;

LAB111:    *((unsigned int *)t5) = 1;
    goto LAB112;

LAB113:    xsi_set_current_line(62, ng0);

LAB116:    xsi_set_current_line(62, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB115;

LAB117:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB119;

LAB118:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB119;

LAB120:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB121;

LAB122:
LAB123:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB125;
    goto LAB1;

LAB119:    *((unsigned int *)t5) = 1;
    goto LAB120;

LAB121:    xsi_set_current_line(67, ng0);

LAB124:    xsi_set_current_line(67, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB123;

LAB125:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB127;

LAB126:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB127;

LAB128:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB129;

LAB130:
LAB131:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB133;
    goto LAB1;

LAB127:    *((unsigned int *)t5) = 1;
    goto LAB128;

LAB129:    xsi_set_current_line(69, ng0);

LAB132:    xsi_set_current_line(69, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB131;

LAB133:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB135;

LAB134:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB135;

LAB136:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB137;

LAB138:
LAB139:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB141;
    goto LAB1;

LAB135:    *((unsigned int *)t5) = 1;
    goto LAB136;

LAB137:    xsi_set_current_line(74, ng0);

LAB140:    xsi_set_current_line(74, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng23, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB139;

LAB141:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB143;

LAB142:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB143;

LAB144:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB145;

LAB146:
LAB147:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t5, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t20 = (t12 ^ t13);
    t21 = (t11 | t20);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB152;

LAB149:    if (t24 != 0)
        goto LAB151;

LAB150:    *((unsigned int *)t5) = 1;

LAB152:    t15 = (t5 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t5);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB153;

LAB154:
LAB155:    goto LAB1;

LAB143:    *((unsigned int *)t5) = 1;
    goto LAB144;

LAB145:    xsi_set_current_line(79, ng0);

LAB148:    xsi_set_current_line(79, ng0);
    t14 = (t0 + 828);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 920);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng24, 3, t0, (char)118, t16, 64, (char)118, t19, 64);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB147;

LAB151:    t14 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB152;

LAB153:    xsi_set_current_line(81, ng0);

LAB156:    xsi_set_current_line(82, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    goto LAB155;

}


extern void work_m_00000000000443571577_3422544495_init()
{
	static char *pe[] = {(void *)Initial_10_0};
	xsi_register_didat("work_m_00000000000443571577_3422544495", "isim/verifier_tb_isim_beh.exe.sim/work/m_00000000000443571577_3422544495.didat");
	xsi_register_executes(pe);
}
