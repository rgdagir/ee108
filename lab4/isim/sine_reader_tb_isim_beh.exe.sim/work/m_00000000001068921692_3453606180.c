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
static const char *ng0 = "//afs/ir/class/ee108/groups/02/lab4/sine_reader.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {1024U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {21, 0};
static int ng7[] = {20, 0};
static int ng8[] = {19, 0};
static int ng9[] = {0, 0};



static void Always_35_0(char *t0)
{
    char t7[8];
    char t19[8];
    char t32[8];
    char t43[8];
    char t56[8];
    char t72[8];
    char t85[8];
    char t101[8];
    char t128[8];
    char t136[8];
    char t168[8];
    char t181[8];
    char t185[8];
    char t198[8];
    char t214[8];
    char t227[8];
    char t243[8];
    char t271[8];
    char t303[8];
    char t337[8];
    char t350[8];
    char t352[8];
    char t353[8];
    char t354[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
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
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    int t160;
    int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    char *t182;
    char *t183;
    char *t184;
    char *t186;
    char *t187;
    char *t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    char *t199;
    char *t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    char *t213;
    char *t215;
    char *t216;
    char *t217;
    char *t218;
    char *t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    char *t226;
    char *t228;
    char *t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    char *t242;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    char *t247;
    char *t248;
    char *t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    char *t257;
    char *t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    char *t275;
    char *t276;
    char *t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    char *t285;
    char *t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    int t295;
    int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    char *t307;
    char *t308;
    char *t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    char *t317;
    char *t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    int t322;
    unsigned int t323;
    unsigned int t324;
    unsigned int t325;
    int t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    char *t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    unsigned int t336;
    char *t338;
    char *t339;
    char *t340;
    char *t341;
    char *t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    char *t349;
    char *t351;
    char *t355;
    char *t356;
    char *t357;
    char *t358;
    char *t359;
    char *t360;
    unsigned int t361;
    int t362;
    char *t363;
    unsigned int t364;
    int t365;
    int t366;
    char *t367;
    unsigned int t368;
    int t369;
    int t370;
    unsigned int t371;
    int t372;
    unsigned int t373;
    unsigned int t374;
    int t375;
    int t376;

LAB0:    t1 = (t0 + 2272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2756);
    *((int *)t2) = 1;
    t3 = (t0 + 2300);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1244U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(74, ng0);

LAB99:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 22);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);

LAB16:    xsi_set_current_line(40, ng0);
    t8 = (t0 + 1152U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 1048575U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 1048575U);
    t17 = (t0 + 784U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 21, t7, 21, t18, 20);
    t17 = (t0 + 1748);
    xsi_vlogvar_assign_value(t17, t19, 0, 0, 21);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 10);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 10);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 1023U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 1023U);
    t8 = ((char*)((ng1)));
    memset(t19, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t8);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t9);
    t24 = *((unsigned int *)t10);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t10);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB20;

LAB17:    if (t29 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t19) = 1;

LAB20:    memset(t32, 0, 8);
    t18 = (t19 + 4);
    t33 = *((unsigned int *)t18);
    t34 = (~(t33));
    t35 = *((unsigned int *)t19);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t18) != 0)
        goto LAB23;

LAB24:    t39 = (t32 + 4);
    t40 = *((unsigned int *)t32);
    t41 = *((unsigned int *)t39);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB25;

LAB26:    memcpy(t136, t32, 8);

LAB27:    t169 = (t0 + 1748);
    t170 = (t169 + 36U);
    t171 = *((char **)t170);
    memset(t168, 0, 8);
    t172 = (t168 + 4);
    t173 = (t171 + 4);
    t174 = *((unsigned int *)t171);
    t175 = (t174 >> 10);
    *((unsigned int *)t168) = t175;
    t176 = *((unsigned int *)t173);
    t177 = (t176 >> 10);
    *((unsigned int *)t172) = t177;
    t178 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t178 & 2047U);
    t179 = *((unsigned int *)t172);
    *((unsigned int *)t172) = (t179 & 2047U);
    t180 = ((char*)((ng4)));
    memset(t181, 0, 8);
    t182 = (t168 + 4);
    if (*((unsigned int *)t182) != 0)
        goto LAB47;

LAB46:    t183 = (t180 + 4);
    if (*((unsigned int *)t183) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t168) < *((unsigned int *)t180))
        goto LAB49;

LAB48:    *((unsigned int *)t181) = 1;

LAB49:    t186 = (t0 + 1564);
    t187 = (t186 + 36U);
    t188 = *((char **)t187);
    memset(t185, 0, 8);
    t189 = (t185 + 4);
    t190 = (t188 + 4);
    t191 = *((unsigned int *)t188);
    t192 = (t191 >> 20);
    *((unsigned int *)t185) = t192;
    t193 = *((unsigned int *)t190);
    t194 = (t193 >> 20);
    *((unsigned int *)t189) = t194;
    t195 = *((unsigned int *)t185);
    *((unsigned int *)t185) = (t195 & 3U);
    t196 = *((unsigned int *)t189);
    *((unsigned int *)t189) = (t196 & 3U);
    t197 = ((char*)((ng1)));
    memset(t198, 0, 8);
    t199 = (t185 + 4);
    t200 = (t197 + 4);
    t201 = *((unsigned int *)t185);
    t202 = *((unsigned int *)t197);
    t203 = (t201 ^ t202);
    t204 = *((unsigned int *)t199);
    t205 = *((unsigned int *)t200);
    t206 = (t204 ^ t205);
    t207 = (t203 | t206);
    t208 = *((unsigned int *)t199);
    t209 = *((unsigned int *)t200);
    t210 = (t208 | t209);
    t211 = (~(t210));
    t212 = (t207 & t211);
    if (t212 != 0)
        goto LAB54;

LAB51:    if (t210 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t198) = 1;

LAB54:    t215 = (t0 + 1564);
    t216 = (t215 + 36U);
    t217 = *((char **)t216);
    memset(t214, 0, 8);
    t218 = (t214 + 4);
    t219 = (t217 + 4);
    t220 = *((unsigned int *)t217);
    t221 = (t220 >> 20);
    *((unsigned int *)t214) = t221;
    t222 = *((unsigned int *)t219);
    t223 = (t222 >> 20);
    *((unsigned int *)t218) = t223;
    t224 = *((unsigned int *)t214);
    *((unsigned int *)t214) = (t224 & 3U);
    t225 = *((unsigned int *)t218);
    *((unsigned int *)t218) = (t225 & 3U);
    t226 = ((char*)((ng5)));
    memset(t227, 0, 8);
    t228 = (t214 + 4);
    t229 = (t226 + 4);
    t230 = *((unsigned int *)t214);
    t231 = *((unsigned int *)t226);
    t232 = (t230 ^ t231);
    t233 = *((unsigned int *)t228);
    t234 = *((unsigned int *)t229);
    t235 = (t233 ^ t234);
    t236 = (t232 | t235);
    t237 = *((unsigned int *)t228);
    t238 = *((unsigned int *)t229);
    t239 = (t237 | t238);
    t240 = (~(t239));
    t241 = (t236 & t240);
    if (t241 != 0)
        goto LAB58;

LAB55:    if (t239 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t227) = 1;

LAB58:    t244 = *((unsigned int *)t198);
    t245 = *((unsigned int *)t227);
    t246 = (t244 | t245);
    *((unsigned int *)t243) = t246;
    t247 = (t198 + 4);
    t248 = (t227 + 4);
    t249 = (t243 + 4);
    t250 = *((unsigned int *)t247);
    t251 = *((unsigned int *)t248);
    t252 = (t250 | t251);
    *((unsigned int *)t249) = t252;
    t253 = *((unsigned int *)t249);
    t254 = (t253 != 0);
    if (t254 == 1)
        goto LAB59;

LAB60:
LAB61:    t272 = *((unsigned int *)t181);
    t273 = *((unsigned int *)t243);
    t274 = (t272 & t273);
    *((unsigned int *)t271) = t274;
    t275 = (t181 + 4);
    t276 = (t243 + 4);
    t277 = (t271 + 4);
    t278 = *((unsigned int *)t275);
    t279 = *((unsigned int *)t276);
    t280 = (t278 | t279);
    *((unsigned int *)t277) = t280;
    t281 = *((unsigned int *)t277);
    t282 = (t281 != 0);
    if (t282 == 1)
        goto LAB62;

LAB63:
LAB64:    t304 = *((unsigned int *)t136);
    t305 = *((unsigned int *)t271);
    t306 = (t304 | t305);
    *((unsigned int *)t303) = t306;
    t307 = (t136 + 4);
    t308 = (t271 + 4);
    t309 = (t303 + 4);
    t310 = *((unsigned int *)t307);
    t311 = *((unsigned int *)t308);
    t312 = (t310 | t311);
    *((unsigned int *)t309) = t312;
    t313 = *((unsigned int *)t309);
    t314 = (t313 != 0);
    if (t314 == 1)
        goto LAB65;

LAB66:
LAB67:    t331 = (t303 + 4);
    t332 = *((unsigned int *)t331);
    t333 = (~(t332));
    t334 = *((unsigned int *)t303);
    t335 = (t334 & t333);
    t336 = (t335 != 0);
    if (t336 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 20);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 20);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 3U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 3U);
    t10 = (t0 + 1564);
    t17 = (t0 + 1564);
    t18 = (t17 + 44U);
    t38 = *((char **)t18);
    t39 = ((char*)((ng6)));
    t44 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t19, t32, t43, ((int*)(t38)), 2, t39, 32, 1, t44, 32, 1);
    t45 = (t19 + 4);
    t20 = *((unsigned int *)t45);
    t6 = (!(t20));
    t46 = (t32 + 4);
    t21 = *((unsigned int *)t46);
    t123 = (!(t21));
    t160 = (t6 && t123);
    t47 = (t43 + 4);
    t22 = *((unsigned int *)t47);
    t161 = (!(t22));
    t262 = (t160 && t161);
    if (t262 == 1)
        goto LAB73;

LAB74:
LAB70:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 20);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 20);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 3U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 3U);

LAB75:    t10 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t10, 2);
    if (t6 == 1)
        goto LAB76;

LAB77:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t6 == 1)
        goto LAB78;

LAB79:    t3 = ((char*)((ng2)));
    t123 = xsi_vlog_unsigned_case_compare(t7, 2, t3, 2);
    if (t123 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t6 == 1)
        goto LAB82;

LAB83:
LAB85:
LAB84:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 22);

LAB86:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB93:    goto LAB15;

LAB9:    xsi_set_current_line(64, ng0);

LAB94:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 876U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB95;

LAB96:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB97:    goto LAB15;

LAB11:    xsi_set_current_line(70, ng0);

LAB98:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1656);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    goto LAB15;

LAB19:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t32) = 1;
    goto LAB24;

LAB23:    t38 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB24;

LAB25:    t44 = (t0 + 1564);
    t45 = (t44 + 36U);
    t46 = *((char **)t45);
    memset(t43, 0, 8);
    t47 = (t43 + 4);
    t48 = (t46 + 4);
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 20);
    *((unsigned int *)t43) = t50;
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 20);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t53 & 3U);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 & 3U);
    t55 = ((char*)((ng2)));
    memset(t56, 0, 8);
    t57 = (t43 + 4);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t43);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = *((unsigned int *)t57);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = (t61 | t64);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t58);
    t68 = (t66 | t67);
    t69 = (~(t68));
    t70 = (t65 & t69);
    if (t70 != 0)
        goto LAB31;

LAB28:    if (t68 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t56) = 1;

LAB31:    t73 = (t0 + 1564);
    t74 = (t73 + 36U);
    t75 = *((char **)t74);
    memset(t72, 0, 8);
    t76 = (t72 + 4);
    t77 = (t75 + 4);
    t78 = *((unsigned int *)t75);
    t79 = (t78 >> 20);
    *((unsigned int *)t72) = t79;
    t80 = *((unsigned int *)t77);
    t81 = (t80 >> 20);
    *((unsigned int *)t76) = t81;
    t82 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t82 & 3U);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t83 & 3U);
    t84 = ((char*)((ng3)));
    memset(t85, 0, 8);
    t86 = (t72 + 4);
    t87 = (t84 + 4);
    t88 = *((unsigned int *)t72);
    t89 = *((unsigned int *)t84);
    t90 = (t88 ^ t89);
    t91 = *((unsigned int *)t86);
    t92 = *((unsigned int *)t87);
    t93 = (t91 ^ t92);
    t94 = (t90 | t93);
    t95 = *((unsigned int *)t86);
    t96 = *((unsigned int *)t87);
    t97 = (t95 | t96);
    t98 = (~(t97));
    t99 = (t94 & t98);
    if (t99 != 0)
        goto LAB35;

LAB32:    if (t97 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t85) = 1;

LAB35:    t102 = *((unsigned int *)t56);
    t103 = *((unsigned int *)t85);
    t104 = (t102 | t103);
    *((unsigned int *)t101) = t104;
    t105 = (t56 + 4);
    t106 = (t85 + 4);
    t107 = (t101 + 4);
    t108 = *((unsigned int *)t105);
    t109 = *((unsigned int *)t106);
    t110 = (t108 | t109);
    *((unsigned int *)t107) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 != 0);
    if (t112 == 1)
        goto LAB36;

LAB37:
LAB38:    memset(t128, 0, 8);
    t129 = (t101 + 4);
    t130 = *((unsigned int *)t129);
    t131 = (~(t130));
    t132 = *((unsigned int *)t101);
    t133 = (t132 & t131);
    t134 = (t133 & 1U);
    if (t134 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t129) != 0)
        goto LAB41;

LAB42:    t137 = *((unsigned int *)t32);
    t138 = *((unsigned int *)t128);
    t139 = (t137 & t138);
    *((unsigned int *)t136) = t139;
    t140 = (t32 + 4);
    t141 = (t128 + 4);
    t142 = (t136 + 4);
    t143 = *((unsigned int *)t140);
    t144 = *((unsigned int *)t141);
    t145 = (t143 | t144);
    *((unsigned int *)t142) = t145;
    t146 = *((unsigned int *)t142);
    t147 = (t146 != 0);
    if (t147 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB27;

LAB30:    t71 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB31;

LAB34:    t100 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB35;

LAB36:    t113 = *((unsigned int *)t101);
    t114 = *((unsigned int *)t107);
    *((unsigned int *)t101) = (t113 | t114);
    t115 = (t56 + 4);
    t116 = (t85 + 4);
    t117 = *((unsigned int *)t115);
    t118 = (~(t117));
    t119 = *((unsigned int *)t56);
    t6 = (t119 & t118);
    t120 = *((unsigned int *)t116);
    t121 = (~(t120));
    t122 = *((unsigned int *)t85);
    t123 = (t122 & t121);
    t124 = (~(t6));
    t125 = (~(t123));
    t126 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t126 & t124);
    t127 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t127 & t125);
    goto LAB38;

LAB39:    *((unsigned int *)t128) = 1;
    goto LAB42;

LAB41:    t135 = (t128 + 4);
    *((unsigned int *)t128) = 1;
    *((unsigned int *)t135) = 1;
    goto LAB42;

LAB43:    t148 = *((unsigned int *)t136);
    t149 = *((unsigned int *)t142);
    *((unsigned int *)t136) = (t148 | t149);
    t150 = (t32 + 4);
    t151 = (t128 + 4);
    t152 = *((unsigned int *)t32);
    t153 = (~(t152));
    t154 = *((unsigned int *)t150);
    t155 = (~(t154));
    t156 = *((unsigned int *)t128);
    t157 = (~(t156));
    t158 = *((unsigned int *)t151);
    t159 = (~(t158));
    t160 = (t153 & t155);
    t161 = (t157 & t159);
    t162 = (~(t160));
    t163 = (~(t161));
    t164 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t164 & t162);
    t165 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t165 & t163);
    t166 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t166 & t162);
    t167 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t167 & t163);
    goto LAB45;

LAB47:    t184 = (t181 + 4);
    *((unsigned int *)t181) = 1;
    *((unsigned int *)t184) = 1;
    goto LAB49;

LAB53:    t213 = (t198 + 4);
    *((unsigned int *)t198) = 1;
    *((unsigned int *)t213) = 1;
    goto LAB54;

LAB57:    t242 = (t227 + 4);
    *((unsigned int *)t227) = 1;
    *((unsigned int *)t242) = 1;
    goto LAB58;

LAB59:    t255 = *((unsigned int *)t243);
    t256 = *((unsigned int *)t249);
    *((unsigned int *)t243) = (t255 | t256);
    t257 = (t198 + 4);
    t258 = (t227 + 4);
    t259 = *((unsigned int *)t257);
    t260 = (~(t259));
    t261 = *((unsigned int *)t198);
    t262 = (t261 & t260);
    t263 = *((unsigned int *)t258);
    t264 = (~(t263));
    t265 = *((unsigned int *)t227);
    t266 = (t265 & t264);
    t267 = (~(t262));
    t268 = (~(t266));
    t269 = *((unsigned int *)t249);
    *((unsigned int *)t249) = (t269 & t267);
    t270 = *((unsigned int *)t249);
    *((unsigned int *)t249) = (t270 & t268);
    goto LAB61;

LAB62:    t283 = *((unsigned int *)t271);
    t284 = *((unsigned int *)t277);
    *((unsigned int *)t271) = (t283 | t284);
    t285 = (t181 + 4);
    t286 = (t243 + 4);
    t287 = *((unsigned int *)t181);
    t288 = (~(t287));
    t289 = *((unsigned int *)t285);
    t290 = (~(t289));
    t291 = *((unsigned int *)t243);
    t292 = (~(t291));
    t293 = *((unsigned int *)t286);
    t294 = (~(t293));
    t295 = (t288 & t290);
    t296 = (t292 & t294);
    t297 = (~(t295));
    t298 = (~(t296));
    t299 = *((unsigned int *)t277);
    *((unsigned int *)t277) = (t299 & t297);
    t300 = *((unsigned int *)t277);
    *((unsigned int *)t277) = (t300 & t298);
    t301 = *((unsigned int *)t271);
    *((unsigned int *)t271) = (t301 & t297);
    t302 = *((unsigned int *)t271);
    *((unsigned int *)t271) = (t302 & t298);
    goto LAB64;

LAB65:    t315 = *((unsigned int *)t303);
    t316 = *((unsigned int *)t309);
    *((unsigned int *)t303) = (t315 | t316);
    t317 = (t136 + 4);
    t318 = (t271 + 4);
    t319 = *((unsigned int *)t317);
    t320 = (~(t319));
    t321 = *((unsigned int *)t136);
    t322 = (t321 & t320);
    t323 = *((unsigned int *)t318);
    t324 = (~(t323));
    t325 = *((unsigned int *)t271);
    t326 = (t325 & t324);
    t327 = (~(t322));
    t328 = (~(t326));
    t329 = *((unsigned int *)t309);
    *((unsigned int *)t309) = (t329 & t327);
    t330 = *((unsigned int *)t309);
    *((unsigned int *)t309) = (t330 & t328);
    goto LAB67;

LAB68:    xsi_set_current_line(46, ng0);
    t338 = (t0 + 1564);
    t339 = (t338 + 36U);
    t340 = *((char **)t339);
    memset(t337, 0, 8);
    t341 = (t337 + 4);
    t342 = (t340 + 4);
    t343 = *((unsigned int *)t340);
    t344 = (t343 >> 20);
    *((unsigned int *)t337) = t344;
    t345 = *((unsigned int *)t342);
    t346 = (t345 >> 20);
    *((unsigned int *)t341) = t346;
    t347 = *((unsigned int *)t337);
    *((unsigned int *)t337) = (t347 & 3U);
    t348 = *((unsigned int *)t341);
    *((unsigned int *)t341) = (t348 & 3U);
    t349 = ((char*)((ng2)));
    memset(t350, 0, 8);
    xsi_vlog_unsigned_add(t350, 2, t337, 2, t349, 2);
    t351 = (t0 + 1564);
    t355 = (t0 + 1564);
    t356 = (t355 + 44U);
    t357 = *((char **)t356);
    t358 = ((char*)((ng6)));
    t359 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t352, t353, t354, ((int*)(t357)), 2, t358, 32, 1, t359, 32, 1);
    t360 = (t352 + 4);
    t361 = *((unsigned int *)t360);
    t362 = (!(t361));
    t363 = (t353 + 4);
    t364 = *((unsigned int *)t363);
    t365 = (!(t364));
    t366 = (t362 && t365);
    t367 = (t354 + 4);
    t368 = *((unsigned int *)t367);
    t369 = (!(t368));
    t370 = (t366 && t369);
    if (t370 == 1)
        goto LAB71;

LAB72:    goto LAB70;

LAB71:    t371 = *((unsigned int *)t354);
    t372 = (t371 + 0);
    t373 = *((unsigned int *)t352);
    t374 = *((unsigned int *)t353);
    t375 = (t373 - t374);
    t376 = (t375 + 1);
    xsi_vlogvar_assign_value(t351, t350, t372, *((unsigned int *)t353), t376);
    goto LAB72;

LAB73:    t23 = *((unsigned int *)t43);
    t266 = (t23 + 0);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t32);
    t295 = (t24 - t25);
    t296 = (t295 + 1);
    xsi_vlogvar_assign_value(t10, t7, t266, *((unsigned int *)t32), t296);
    goto LAB74;

LAB76:    xsi_set_current_line(52, ng0);
    t17 = (t0 + 1152U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t19 + 4);
    t38 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    *((unsigned int *)t19) = t21;
    t22 = *((unsigned int *)t38);
    t23 = (t22 >> 0);
    *((unsigned int *)t17) = t23;
    t24 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t24 & 1048575U);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 1048575U);
    t39 = (t0 + 784U);
    t44 = *((char **)t39);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 20, t19, 20, t44, 20);
    t39 = (t0 + 1564);
    t45 = (t0 + 1564);
    t46 = (t45 + 44U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng8)));
    t55 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t43, t56, t72, ((int*)(t47)), 2, t48, 32, 1, t55, 32, 1);
    t57 = (t43 + 4);
    t26 = *((unsigned int *)t57);
    t123 = (!(t26));
    t58 = (t56 + 4);
    t27 = *((unsigned int *)t58);
    t160 = (!(t27));
    t161 = (t123 && t160);
    t71 = (t72 + 4);
    t28 = *((unsigned int *)t71);
    t262 = (!(t28));
    t266 = (t161 && t262);
    if (t266 == 1)
        goto LAB87;

LAB88:    goto LAB86;

LAB78:    goto LAB76;

LAB80:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1152U);
    t8 = *((char **)t4);
    memset(t19, 0, 8);
    t4 = (t19 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t19) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t15 & 1048575U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 1048575U);
    t10 = (t0 + 784U);
    t17 = *((char **)t10);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 20, t19, 20, t17, 20);
    t10 = (t0 + 1564);
    t18 = (t0 + 1564);
    t38 = (t18 + 44U);
    t39 = *((char **)t38);
    t44 = ((char*)((ng8)));
    t45 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t43, t56, t72, ((int*)(t39)), 2, t44, 32, 1, t45, 32, 1);
    t46 = (t43 + 4);
    t20 = *((unsigned int *)t46);
    t160 = (!(t20));
    t47 = (t56 + 4);
    t21 = *((unsigned int *)t47);
    t161 = (!(t21));
    t262 = (t160 && t161);
    t48 = (t72 + 4);
    t22 = *((unsigned int *)t48);
    t266 = (!(t22));
    t295 = (t262 && t266);
    if (t295 == 1)
        goto LAB89;

LAB90:    goto LAB86;

LAB82:    goto LAB80;

LAB87:    t29 = *((unsigned int *)t72);
    t295 = (t29 + 0);
    t30 = *((unsigned int *)t43);
    t31 = *((unsigned int *)t56);
    t296 = (t30 - t31);
    t322 = (t296 + 1);
    xsi_vlogvar_assign_value(t39, t32, t295, *((unsigned int *)t56), t322);
    goto LAB88;

LAB89:    t23 = *((unsigned int *)t72);
    t296 = (t23 + 0);
    t24 = *((unsigned int *)t43);
    t25 = *((unsigned int *)t56);
    t322 = (t24 - t25);
    t326 = (t322 + 1);
    xsi_vlogvar_assign_value(t10, t32, t296, *((unsigned int *)t56), t326);
    goto LAB90;

LAB91:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng5)));
    t8 = (t0 + 1656);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 2);
    goto LAB93;

LAB95:    xsi_set_current_line(66, ng0);
    t8 = ((char*)((ng3)));
    t9 = (t0 + 1656);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 2);
    goto LAB97;

}

static void Cont_84_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t31[8];
    char t42[8];
    char t58[8];
    char t99[8];
    char t106[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
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
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;

LAB0:    t1 = (t0 + 2416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1152U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 20);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 20);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    t32 = (t0 + 1152U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 20);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 20);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 3U);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 3U);
    t41 = ((char*)((ng2)));
    memset(t42, 0, 8);
    t43 = (t31 + 4);
    t44 = (t41 + 4);
    t45 = *((unsigned int *)t31);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB11;

LAB8:    if (t54 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t42) = 1;

LAB11:    t59 = *((unsigned int *)t15);
    t60 = *((unsigned int *)t42);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = (t15 + 4);
    t63 = (t42 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB12;

LAB13:
LAB14:    memset(t4, 0, 8);
    t86 = (t58 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t58);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t86) != 0)
        goto LAB17;

LAB18:    t93 = (t4 + 4);
    t94 = *((unsigned int *)t4);
    t95 = *((unsigned int *)t93);
    t96 = (t94 || t95);
    if (t96 > 0)
        goto LAB19;

LAB20:    t100 = *((unsigned int *)t4);
    t101 = (~(t100));
    t102 = *((unsigned int *)t93);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t93) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t4) > 0)
        goto LAB25;

LAB26:    memcpy(t3, t106, 8);

LAB27:    t104 = (t0 + 2816);
    t107 = (t104 + 32U);
    t108 = *((char **)t107);
    t109 = (t108 + 40U);
    t110 = *((char **)t109);
    memset(t110, 0, 8);
    t111 = 65535U;
    t112 = t111;
    t113 = (t3 + 4);
    t114 = *((unsigned int *)t3);
    t111 = (t111 & t114);
    t115 = *((unsigned int *)t113);
    t112 = (t112 & t115);
    t116 = (t110 + 4);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t117 | t111);
    t118 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t118 | t112);
    xsi_driver_vfirst_trans(t104, 0, 15);
    t119 = (t0 + 2764);
    *((int *)t119) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB10:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB11;

LAB12:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t15 + 4);
    t73 = (t42 + 4);
    t74 = *((unsigned int *)t72);
    t75 = (~(t74));
    t76 = *((unsigned int *)t15);
    t77 = (t76 & t75);
    t78 = *((unsigned int *)t73);
    t79 = (~(t78));
    t80 = *((unsigned int *)t42);
    t81 = (t80 & t79);
    t82 = (~(t77));
    t83 = (~(t81));
    t84 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t84 & t82);
    t85 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t85 & t83);
    goto LAB14;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB17:    t92 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB18;

LAB19:    t97 = (t0 + 1336U);
    t98 = *((char **)t97);
    memcpy(t99, t98, 8);
    goto LAB20;

LAB21:    t97 = ((char*)((ng9)));
    t104 = (t0 + 1336U);
    t105 = *((char **)t104);
    memset(t106, 0, 8);
    xsi_vlog_unsigned_minus(t106, 32, t97, 32, t105, 16);
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t3, 32, t99, 32, t106, 32);
    goto LAB27;

LAB25:    memcpy(t3, t99, 8);
    goto LAB27;

}

static void Cont_87_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 2560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 2852);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0);
    t33 = (t0 + 2772);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}


extern void work_m_00000000001068921692_3453606180_init()
{
	static char *pe[] = {(void *)Always_35_0,(void *)Cont_84_1,(void *)Cont_87_2};
	xsi_register_didat("work_m_00000000001068921692_3453606180", "isim/sine_reader_tb_isim_beh.exe.sim/work/m_00000000001068921692_3453606180.didat");
	xsi_register_executes(pe);
}
