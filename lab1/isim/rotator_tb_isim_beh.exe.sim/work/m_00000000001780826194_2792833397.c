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
static const char *ng0 = "//afs/ir/class/ee108/groups/02/lab1/rotator_tb.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {16U, 0U};
static unsigned int ng4[] = {4U, 0U};
static const char *ng5 = "%b -> %b, expected %b";
static int ng6[] = {1, 0};
static unsigned int ng7[] = {64U, 0U};
static unsigned int ng8[] = {129U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {65U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {1024U, 0U};
static unsigned int ng13[] = {1U, 0U};
static unsigned int ng14[] = {4294967295U, 0U};
static unsigned int ng15[] = {0U, 0U};
static unsigned int ng16[] = {2147483649U, 0U};
static unsigned int ng17[] = {3221225472U, 0U};



static void Initial_29_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);

LAB4:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1988);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 920);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 600U);
    t7 = *((char **)t6);
    t6 = (t0 + 1012);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t0, (char)118, t5, 8, (char)118, t7, 8, (char)118, t9, 8);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1988);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 920);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 600U);
    t7 = *((char **)t6);
    t6 = (t0 + 1012);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t0, (char)118, t5, 8, (char)118, t7, 8, (char)118, t9, 8);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1988);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 920);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 600U);
    t7 = *((char **)t6);
    t6 = (t0 + 1012);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t0, (char)118, t5, 8, (char)118, t7, 8, (char)118, t9, 8);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1988);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 920);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 600U);
    t7 = *((char **)t6);
    t6 = (t0 + 1012);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t0, (char)118, t5, 8, (char)118, t7, 8, (char)118, t9, 8);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1988);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 1288);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 692U);
    t7 = *((char **)t6);
    t6 = (t0 + 1380);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t0, (char)118, t5, 32, (char)118, t7, 32, (char)118, t9, 32);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1988);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 1288);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 692U);
    t7 = *((char **)t6);
    t6 = (t0 + 1380);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t0, (char)118, t5, 32, (char)118, t7, 32, (char)118, t9, 32);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1988);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1288);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 692U);
    t7 = *((char **)t6);
    t6 = (t0 + 1380);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t0, (char)118, t5, 32, (char)118, t7, 32, (char)118, t9, 32);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1988);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 1288);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 692U);
    t7 = *((char **)t6);
    t6 = (t0 + 1380);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t0, (char)118, t5, 32, (char)118, t7, 32, (char)118, t9, 32);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1988);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 1288);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 692U);
    t7 = *((char **)t6);
    t6 = (t0 + 1380);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t0, (char)118, t5, 32, (char)118, t7, 32, (char)118, t9, 32);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1988);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 1288);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 692U);
    t7 = *((char **)t6);
    t6 = (t0 + 1380);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t0, (char)118, t5, 32, (char)118, t7, 32, (char)118, t9, 32);
    goto LAB1;

}


extern void work_m_00000000001780826194_2792833397_init()
{
	static char *pe[] = {(void *)Initial_29_0};
	xsi_register_didat("work_m_00000000001780826194_2792833397", "isim/rotator_tb_isim_beh.exe.sim/work/m_00000000001780826194_2792833397.didat");
	xsi_register_executes(pe);
}
