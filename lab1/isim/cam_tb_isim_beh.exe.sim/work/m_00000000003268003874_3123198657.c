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
static const char *ng0 = "//afs/ir/class/ee108/groups/02/lab1/cam_tb.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {5195084U, 0U, 0U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {1U, 0U};
static const char *ng5 = "CAM failed on valid user %h";
static const char *ng6 = "CAM returned wrong address on user %h";
static unsigned int ng7[] = {1330790721U, 0U, 78U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {1280069448U, 0U, 89U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {1230389572U, 0U, 68U, 0U};
static unsigned int ng12[] = {1229016131U, 0U, 17746U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {4U, 0U};
static unsigned int ng15[] = {1312903750U, 0U, 75U, 0U};
static unsigned int ng16[] = {1129201996U, 0U, 69U, 0U};
static unsigned int ng17[] = {1312905554U, 0U, 0U, 0U};
static unsigned int ng18[] = {7U, 0U};
static unsigned int ng19[] = {1431655765U, 0U, 0U, 0U};
static const char *ng20 = "CAM failed on invalid user %h";
static unsigned int ng21[] = {1U, 1U};
static unsigned int ng22[] = {0U, 1U};
static const char *ng23 = "CAM produced undefined output on valid for invalid user, Make sure you're not inferring a latch anywhere!";
static unsigned int ng24[] = {7U, 7U};
static unsigned int ng25[] = {0U, 7U};
static const char *ng26 = "CAM produced undefined output on addr for invalid user. Make sure you're not inferring a latch anywhere!";
static const char *ng27 = "CAM failed on valid user %h with invalid length %d";
static const char *ng28 = "All tests in test bench passed successfully!";



static void Initial_15_0(char *t0)
{
    char t5[8];
    char t17[8];
    char t22[8];
    char t25[8];
    char t33[8];
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
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);

LAB4:    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 692U);
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
LAB11:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB14;

LAB13:    t4 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t6))
        goto LAB14;

LAB15:    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB16;

LAB17:
LAB18:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB7:    *((unsigned int *)t5) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(23, ng0);

LAB12:    xsi_set_current_line(24, ng0);
    t14 = (t0 + 920);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t16, 64);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB11;

LAB14:    *((unsigned int *)t5) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(27, ng0);

LAB19:    xsi_set_current_line(28, ng0);
    t8 = (t0 + 920);
    t14 = (t8 + 36U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t15, 64);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB18;

LAB20:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB22;

LAB21:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB22;

LAB23:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB29;

LAB28:    t4 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t6))
        goto LAB29;

LAB30:    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB22:    *((unsigned int *)t5) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(35, ng0);

LAB27:    xsi_set_current_line(36, ng0);
    t14 = (t0 + 920);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t16, 64);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB26;

LAB29:    *((unsigned int *)t5) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(39, ng0);

LAB34:    xsi_set_current_line(40, ng0);
    t8 = (t0 + 920);
    t14 = (t8 + 36U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t15, 64);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB35:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB37;

LAB36:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB37;

LAB38:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB44;

LAB43:    t4 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t6))
        goto LAB44;

LAB45:    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB37:    *((unsigned int *)t5) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(47, ng0);

LAB42:    xsi_set_current_line(48, ng0);
    t14 = (t0 + 920);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t16, 64);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB41;

LAB44:    *((unsigned int *)t5) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(51, ng0);

LAB49:    xsi_set_current_line(52, ng0);
    t8 = (t0 + 920);
    t14 = (t8 + 36U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t15, 64);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB48;

LAB50:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB52;

LAB51:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB52;

LAB53:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB54;

LAB55:
LAB56:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB59;

LAB58:    t4 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t6))
        goto LAB59;

LAB60:    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB61;

LAB62:
LAB63:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB52:    *((unsigned int *)t5) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(59, ng0);

LAB57:    xsi_set_current_line(60, ng0);
    t14 = (t0 + 920);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t16, 64);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB56;

LAB59:    *((unsigned int *)t5) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(63, ng0);

LAB64:    xsi_set_current_line(64, ng0);
    t8 = (t0 + 920);
    t14 = (t8 + 36U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t15, 64);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB63;

LAB65:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB67;

LAB66:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB67;

LAB68:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB69;

LAB70:
LAB71:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng14)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB74;

LAB73:    t4 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t6))
        goto LAB74;

LAB75:    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB76;

LAB77:
LAB78:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB67:    *((unsigned int *)t5) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(71, ng0);

LAB72:    xsi_set_current_line(72, ng0);
    t14 = (t0 + 920);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t16, 64);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB71;

LAB74:    *((unsigned int *)t5) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(75, ng0);

LAB79:    xsi_set_current_line(76, ng0);
    t8 = (t0 + 920);
    t14 = (t8 + 36U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t15, 64);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB78;

LAB80:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB82;

LAB81:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB82;

LAB83:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB84;

LAB85:
LAB86:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB89;

LAB88:    t4 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t6))
        goto LAB89;

LAB90:    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB91;

LAB92:
LAB93:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB82:    *((unsigned int *)t5) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(83, ng0);

LAB87:    xsi_set_current_line(84, ng0);
    t14 = (t0 + 920);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t16, 64);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB86;

LAB89:    *((unsigned int *)t5) = 1;
    goto LAB90;

LAB91:    xsi_set_current_line(87, ng0);

LAB94:    xsi_set_current_line(88, ng0);
    t8 = (t0 + 920);
    t14 = (t8 + 36U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t15, 64);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB93;

LAB95:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB97;

LAB96:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB97;

LAB98:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB99;

LAB100:
LAB101:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB104;

LAB103:    t4 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t6))
        goto LAB104;

LAB105:    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB106;

LAB107:
LAB108:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB110;
    goto LAB1;

LAB97:    *((unsigned int *)t5) = 1;
    goto LAB98;

LAB99:    xsi_set_current_line(95, ng0);

LAB102:    xsi_set_current_line(96, ng0);
    t14 = (t0 + 920);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t16, 64);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB101;

LAB104:    *((unsigned int *)t5) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(99, ng0);

LAB109:    xsi_set_current_line(100, ng0);
    t8 = (t0 + 920);
    t14 = (t8 + 36U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t15, 64);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB108;

LAB110:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB112;

LAB111:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB112;

LAB113:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB114;

LAB115:
LAB116:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng18)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB119;

LAB118:    t4 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t6))
        goto LAB119;

LAB120:    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB121;

LAB122:
LAB123:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB125;
    goto LAB1;

LAB112:    *((unsigned int *)t5) = 1;
    goto LAB113;

LAB114:    xsi_set_current_line(107, ng0);

LAB117:    xsi_set_current_line(108, ng0);
    t14 = (t0 + 920);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t16, 64);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB116;

LAB119:    *((unsigned int *)t5) = 1;
    goto LAB120;

LAB121:    xsi_set_current_line(111, ng0);

LAB124:    xsi_set_current_line(112, ng0);
    t8 = (t0 + 920);
    t14 = (t8 + 36U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t15, 64);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB123;

LAB125:    xsi_set_current_line(120, ng0);
    t3 = (t0 + 692U);
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
LAB131:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng21)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB135;

LAB133:    t4 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t6))
        goto LAB135;

LAB134:    *((unsigned int *)t5) = 1;

LAB135:    memset(t17, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t7) != 0)
        goto LAB138;

LAB139:    t14 = (t17 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = *((unsigned int *)t14);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB140;

LAB141:    memcpy(t33, t17, 8);

LAB142:    t61 = (t33 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB153;

LAB154:
LAB155:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng24)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB159;

LAB157:    t4 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t6))
        goto LAB159;

LAB158:    *((unsigned int *)t5) = 1;

LAB159:    memset(t17, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB160;

LAB161:    if (*((unsigned int *)t7) != 0)
        goto LAB162;

LAB163:    t14 = (t17 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = *((unsigned int *)t14);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB164;

LAB165:    memcpy(t33, t17, 8);

LAB166:    t61 = (t33 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB177;

LAB178:
LAB179:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB181;
    goto LAB1;

LAB127:    *((unsigned int *)t5) = 1;
    goto LAB128;

LAB129:    xsi_set_current_line(120, ng0);

LAB132:    xsi_set_current_line(121, ng0);
    t14 = (t0 + 920);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)118, t16, 64);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB131;

LAB136:    *((unsigned int *)t17) = 1;
    goto LAB139;

LAB138:    t8 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB139;

LAB140:    t15 = (t0 + 692U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng22)));
    memset(t22, 0, 8);
    if (*((unsigned int *)t16) != *((unsigned int *)t15))
        goto LAB145;

LAB143:    t23 = (t16 + 4);
    t24 = (t15 + 4);
    if (*((unsigned int *)t23) != *((unsigned int *)t24))
        goto LAB145;

LAB144:    *((unsigned int *)t22) = 1;

LAB145:    memset(t25, 0, 8);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t26) != 0)
        goto LAB148;

LAB149:    t34 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t25);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = (t17 + 4);
    t38 = (t25 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB150;

LAB151:
LAB152:    goto LAB142;

LAB146:    *((unsigned int *)t25) = 1;
    goto LAB149;

LAB148:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB149;

LAB150:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t17 + 4);
    t48 = (t25 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t17);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t25);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB152;

LAB153:    xsi_set_current_line(127, ng0);

LAB156:    xsi_set_current_line(128, ng0);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t0);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB155;

LAB160:    *((unsigned int *)t17) = 1;
    goto LAB163;

LAB162:    t8 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB163;

LAB164:    t15 = (t0 + 600U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng25)));
    memset(t22, 0, 8);
    if (*((unsigned int *)t16) != *((unsigned int *)t15))
        goto LAB169;

LAB167:    t23 = (t16 + 4);
    t24 = (t15 + 4);
    if (*((unsigned int *)t23) != *((unsigned int *)t24))
        goto LAB169;

LAB168:    *((unsigned int *)t22) = 1;

LAB169:    memset(t25, 0, 8);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB170;

LAB171:    if (*((unsigned int *)t26) != 0)
        goto LAB172;

LAB173:    t34 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t25);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = (t17 + 4);
    t38 = (t25 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB174;

LAB175:
LAB176:    goto LAB166;

LAB170:    *((unsigned int *)t25) = 1;
    goto LAB173;

LAB172:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB173;

LAB174:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t17 + 4);
    t48 = (t25 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t17);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t25);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB176;

LAB177:    xsi_set_current_line(131, ng0);

LAB180:    xsi_set_current_line(132, ng0);
    xsi_vlogfile_write(1, 0, 0, ng26, 1, t0);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB179;

LAB181:    xsi_set_current_line(140, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB183;

LAB182:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB183;

LAB184:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB185;

LAB186:
LAB187:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB189;
    goto LAB1;

LAB183:    *((unsigned int *)t5) = 1;
    goto LAB184;

LAB185:    xsi_set_current_line(140, ng0);

LAB188:    xsi_set_current_line(141, ng0);
    t14 = (t0 + 920);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t23 = (t0 + 1012);
    t24 = (t23 + 36U);
    t26 = *((char **)t24);
    xsi_vlogfile_write(1, 0, 0, ng27, 3, t0, (char)118, t16, 64, (char)118, t26, 4);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB187;

LAB189:    xsi_set_current_line(148, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB191;

LAB190:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB191;

LAB192:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB193;

LAB194:
LAB195:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 1104);
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
    t18 = (t12 ^ t13);
    t19 = (t11 | t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t8);
    t27 = (t20 | t21);
    t28 = (~(t27));
    t29 = (t19 & t28);
    if (t29 != 0)
        goto LAB200;

LAB197:    if (t27 != 0)
        goto LAB199;

LAB198:    *((unsigned int *)t5) = 1;

LAB200:    t15 = (t5 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (~(t30));
    t34 = *((unsigned int *)t5);
    t35 = (t34 & t31);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB201;

LAB202:
LAB203:    goto LAB1;

LAB191:    *((unsigned int *)t5) = 1;
    goto LAB192;

LAB193:    xsi_set_current_line(148, ng0);

LAB196:    xsi_set_current_line(149, ng0);
    t14 = (t0 + 920);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t23 = (t0 + 1012);
    t24 = (t23 + 36U);
    t26 = *((char **)t24);
    xsi_vlogfile_write(1, 0, 0, ng27, 3, t0, (char)118, t16, 64, (char)118, t26, 4);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB195;

LAB199:    t14 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB200;

LAB201:    xsi_set_current_line(153, ng0);

LAB204:    xsi_set_current_line(154, ng0);
    xsi_vlogfile_write(1, 0, 0, ng28, 1, t0);
    goto LAB203;

}


extern void work_m_00000000003268003874_3123198657_init()
{
	static char *pe[] = {(void *)Initial_15_0};
	xsi_register_didat("work_m_00000000003268003874_3123198657", "isim/cam_tb_isim_beh.exe.sim/work/m_00000000003268003874_3123198657.didat");
	xsi_register_executes(pe);
}
