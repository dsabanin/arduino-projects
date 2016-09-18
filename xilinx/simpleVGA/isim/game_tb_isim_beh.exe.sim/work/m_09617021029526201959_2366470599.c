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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "%0t, x = %d, y = %d";
static const char *ng1 = "/home/dsabanin/projects/embedded/xilinx/simpleVGA/game.v";
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {247U, 0U};
static unsigned int ng4[] = {255U, 0U};
static int ng5[] = {10, 0};

void Monitor_39_4(char *);
void Monitor_39_4(char *);


static void Monitor_39_4_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 3080U);
    t4 = *((char **)t3);
    t3 = (t0 + 3240U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 3, ng0, 4, t0, (char)118, t1, 64, (char)118, t4, 12, (char)118, t5, 12);

LAB1:    return;
}

static void Cont_32_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng1);
    t2 = (t0 + 2760U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 12, t3, 12, t2, 12);
    t5 = (t0 + 6168);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 4095U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 11);
    t18 = (t0 + 6024);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_33_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 4960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng1);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 6232);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 4095U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 11);
    t16 = (t0 + 6040);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_34_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t12[8];
    char t30[8];
    char t31[8];
    char t34[8];
    char t42[8];
    char t74[8];
    char t90[8];
    char t94[8];
    char t102[8];
    char t134[8];
    char t152[8];
    char t153[8];
    char t156[8];
    char t164[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
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
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t91;
    char *t92;
    char *t93;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    int t126;
    int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t154;
    char *t155;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    int t188;
    int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    char *t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t212;
    char *t213;
    char *t214;
    char *t215;
    char *t216;
    char *t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;
    unsigned int t221;
    unsigned int t222;
    char *t223;
    unsigned int t224;
    unsigned int t225;
    char *t226;

LAB0:    t1 = (t0 + 5208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng1);
    t2 = (t0 + 3080U);
    t5 = *((char **)t2);
    t2 = (t0 + 3640);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB4:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB6;

LAB7:    memset(t12, 0, 8);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t13) != 0)
        goto LAB11;

LAB12:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB13;

LAB14:    memcpy(t42, t12, 8);

LAB15:    memset(t74, 0, 8);
    t75 = (t42 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t42);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t75) != 0)
        goto LAB30;

LAB31:    t82 = (t74 + 4);
    t83 = *((unsigned int *)t74);
    t84 = *((unsigned int *)t82);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB32;

LAB33:    memcpy(t102, t74, 8);

LAB34:    memset(t134, 0, 8);
    t135 = (t102 + 4);
    t136 = *((unsigned int *)t135);
    t137 = (~(t136));
    t138 = *((unsigned int *)t102);
    t139 = (t138 & t137);
    t140 = (t139 & 1U);
    if (t140 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t135) != 0)
        goto LAB49;

LAB50:    t142 = (t134 + 4);
    t143 = *((unsigned int *)t134);
    t144 = *((unsigned int *)t142);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB51;

LAB52:    memcpy(t164, t134, 8);

LAB53:    memset(t4, 0, 8);
    t196 = (t164 + 4);
    t197 = *((unsigned int *)t196);
    t198 = (~(t197));
    t199 = *((unsigned int *)t164);
    t200 = (t199 & t198);
    t201 = (t200 & 1U);
    if (t201 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t196) != 0)
        goto LAB68;

LAB69:    t203 = (t4 + 4);
    t204 = *((unsigned int *)t4);
    t205 = *((unsigned int *)t203);
    t206 = (t204 || t205);
    if (t206 > 0)
        goto LAB70;

LAB71:    t208 = *((unsigned int *)t4);
    t209 = (~(t208));
    t210 = *((unsigned int *)t203);
    t211 = (t209 || t210);
    if (t211 > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t203) > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t4) > 0)
        goto LAB76;

LAB77:    memcpy(t3, t212, 8);

LAB78:    t213 = (t0 + 6296);
    t214 = (t213 + 56U);
    t215 = *((char **)t214);
    t216 = (t215 + 56U);
    t217 = *((char **)t216);
    memset(t217, 0, 8);
    t218 = 255U;
    t219 = t218;
    t220 = (t3 + 4);
    t221 = *((unsigned int *)t3);
    t218 = (t218 & t221);
    t222 = *((unsigned int *)t220);
    t219 = (t219 & t222);
    t223 = (t217 + 4);
    t224 = *((unsigned int *)t217);
    *((unsigned int *)t217) = (t224 | t218);
    t225 = *((unsigned int *)t223);
    *((unsigned int *)t223) = (t225 | t219);
    xsi_driver_vfirst_trans(t213, 0, 7);
    t226 = (t0 + 6056);
    *((int *)t226) = 1;

LAB1:    return;
LAB5:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB11:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB12;

LAB13:    t24 = (t0 + 3080U);
    t25 = *((char **)t24);
    t24 = (t0 + 3640);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 608);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t27, 12, t29, 32);
    memset(t31, 0, 8);
    t28 = (t25 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB17;

LAB16:    t32 = (t30 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t25) < *((unsigned int *)t30))
        goto LAB18;

LAB19:    memset(t34, 0, 8);
    t35 = (t31 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t35) != 0)
        goto LAB23;

LAB24:    t43 = *((unsigned int *)t12);
    t44 = *((unsigned int *)t34);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t12 + 4);
    t47 = (t34 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB17:    t33 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t31) = 1;
    goto LAB19;

LAB21:    *((unsigned int *)t34) = 1;
    goto LAB24;

LAB23:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB24;

LAB25:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t12 + 4);
    t57 = (t34 + 4);
    t58 = *((unsigned int *)t12);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t34);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB27;

LAB28:    *((unsigned int *)t74) = 1;
    goto LAB31;

LAB30:    t81 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB31;

LAB32:    t86 = (t0 + 3240U);
    t87 = *((char **)t86);
    t86 = (t0 + 3800);
    t88 = (t86 + 56U);
    t89 = *((char **)t88);
    memset(t90, 0, 8);
    t91 = (t87 + 4);
    if (*((unsigned int *)t91) != 0)
        goto LAB36;

LAB35:    t92 = (t89 + 4);
    if (*((unsigned int *)t92) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t87) > *((unsigned int *)t89))
        goto LAB37;

LAB38:    memset(t94, 0, 8);
    t95 = (t90 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t90);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t95) != 0)
        goto LAB42;

LAB43:    t103 = *((unsigned int *)t74);
    t104 = *((unsigned int *)t94);
    t105 = (t103 & t104);
    *((unsigned int *)t102) = t105;
    t106 = (t74 + 4);
    t107 = (t94 + 4);
    t108 = (t102 + 4);
    t109 = *((unsigned int *)t106);
    t110 = *((unsigned int *)t107);
    t111 = (t109 | t110);
    *((unsigned int *)t108) = t111;
    t112 = *((unsigned int *)t108);
    t113 = (t112 != 0);
    if (t113 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB34;

LAB36:    t93 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB38;

LAB37:    *((unsigned int *)t90) = 1;
    goto LAB38;

LAB40:    *((unsigned int *)t94) = 1;
    goto LAB43;

LAB42:    t101 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB43;

LAB44:    t114 = *((unsigned int *)t102);
    t115 = *((unsigned int *)t108);
    *((unsigned int *)t102) = (t114 | t115);
    t116 = (t74 + 4);
    t117 = (t94 + 4);
    t118 = *((unsigned int *)t74);
    t119 = (~(t118));
    t120 = *((unsigned int *)t116);
    t121 = (~(t120));
    t122 = *((unsigned int *)t94);
    t123 = (~(t122));
    t124 = *((unsigned int *)t117);
    t125 = (~(t124));
    t126 = (t119 & t121);
    t127 = (t123 & t125);
    t128 = (~(t126));
    t129 = (~(t127));
    t130 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t130 & t128);
    t131 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t131 & t129);
    t132 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t132 & t128);
    t133 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t133 & t129);
    goto LAB46;

LAB47:    *((unsigned int *)t134) = 1;
    goto LAB50;

LAB49:    t141 = (t134 + 4);
    *((unsigned int *)t134) = 1;
    *((unsigned int *)t141) = 1;
    goto LAB50;

LAB51:    t146 = (t0 + 3240U);
    t147 = *((char **)t146);
    t146 = (t0 + 3800);
    t148 = (t146 + 56U);
    t149 = *((char **)t148);
    t150 = (t0 + 472);
    t151 = *((char **)t150);
    memset(t152, 0, 8);
    xsi_vlog_unsigned_add(t152, 32, t149, 12, t151, 32);
    memset(t153, 0, 8);
    t150 = (t147 + 4);
    if (*((unsigned int *)t150) != 0)
        goto LAB55;

LAB54:    t154 = (t152 + 4);
    if (*((unsigned int *)t154) != 0)
        goto LAB55;

LAB58:    if (*((unsigned int *)t147) < *((unsigned int *)t152))
        goto LAB56;

LAB57:    memset(t156, 0, 8);
    t157 = (t153 + 4);
    t158 = *((unsigned int *)t157);
    t159 = (~(t158));
    t160 = *((unsigned int *)t153);
    t161 = (t160 & t159);
    t162 = (t161 & 1U);
    if (t162 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t157) != 0)
        goto LAB61;

LAB62:    t165 = *((unsigned int *)t134);
    t166 = *((unsigned int *)t156);
    t167 = (t165 & t166);
    *((unsigned int *)t164) = t167;
    t168 = (t134 + 4);
    t169 = (t156 + 4);
    t170 = (t164 + 4);
    t171 = *((unsigned int *)t168);
    t172 = *((unsigned int *)t169);
    t173 = (t171 | t172);
    *((unsigned int *)t170) = t173;
    t174 = *((unsigned int *)t170);
    t175 = (t174 != 0);
    if (t175 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB53;

LAB55:    t155 = (t153 + 4);
    *((unsigned int *)t153) = 1;
    *((unsigned int *)t155) = 1;
    goto LAB57;

LAB56:    *((unsigned int *)t153) = 1;
    goto LAB57;

LAB59:    *((unsigned int *)t156) = 1;
    goto LAB62;

LAB61:    t163 = (t156 + 4);
    *((unsigned int *)t156) = 1;
    *((unsigned int *)t163) = 1;
    goto LAB62;

LAB63:    t176 = *((unsigned int *)t164);
    t177 = *((unsigned int *)t170);
    *((unsigned int *)t164) = (t176 | t177);
    t178 = (t134 + 4);
    t179 = (t156 + 4);
    t180 = *((unsigned int *)t134);
    t181 = (~(t180));
    t182 = *((unsigned int *)t178);
    t183 = (~(t182));
    t184 = *((unsigned int *)t156);
    t185 = (~(t184));
    t186 = *((unsigned int *)t179);
    t187 = (~(t186));
    t188 = (t181 & t183);
    t189 = (t185 & t187);
    t190 = (~(t188));
    t191 = (~(t189));
    t192 = *((unsigned int *)t170);
    *((unsigned int *)t170) = (t192 & t190);
    t193 = *((unsigned int *)t170);
    *((unsigned int *)t170) = (t193 & t191);
    t194 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t194 & t190);
    t195 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t195 & t191);
    goto LAB65;

LAB66:    *((unsigned int *)t4) = 1;
    goto LAB69;

LAB68:    t202 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t202) = 1;
    goto LAB69;

LAB70:    t207 = ((char*)((ng3)));
    goto LAB71;

LAB72:    t212 = ((char*)((ng4)));
    goto LAB73;

LAB74:    xsi_vlog_unsigned_bit_combine(t3, 8, t207, 8, t212, 8);
    goto LAB78;

LAB76:    memcpy(t3, t207, 8);
    goto LAB78;

}

static void Always_38_3(char *t0)
{
    char t4[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;

LAB0:    t1 = (t0 + 5456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng1);
    t2 = (t0 + 6072);
    *((int *)t2) = 1;
    t3 = (t0 + 5488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng1);

LAB5:    xsi_set_current_line(39, ng1);
    Monitor_39_4(t0);
    xsi_set_current_line(40, ng1);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(42, ng1);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(45, ng1);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t12 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t12, t5, 0, 0, 12, 0LL);

LAB11:
LAB8:    xsi_set_current_line(47, ng1);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(49, ng1);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 4);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(52, ng1);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t12 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t12, t5, 0, 0, 12, 0LL);

LAB17:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(41, ng1);
    t18 = (t0 + 3640);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 32, t20, 12, t21, 32);
    t23 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 12, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(43, ng1);
    t18 = (t0 + 3640);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t20, 12, t21, 32);
    t23 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 12, 0LL);
    goto LAB11;

LAB12:    xsi_set_current_line(48, ng1);
    t18 = (t0 + 3800);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t20, 12, t21, 32);
    t23 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 12, 0LL);
    goto LAB14;

LAB15:    xsi_set_current_line(50, ng1);
    t18 = (t0 + 3800);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 32, t20, 12, t21, 32);
    t23 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 12, 0LL);
    goto LAB17;

}

void Monitor_39_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 5512);
    t2 = (t0 + 6088);
    xsi_vlogfile_monitor((void *)Monitor_39_4_Func, t1, t2);

LAB1:    return;
}


extern void work_m_09617021029526201959_2366470599_init()
{
	static char *pe[] = {(void *)Cont_32_0,(void *)Cont_33_1,(void *)Cont_34_2,(void *)Always_38_3,(void *)Monitor_39_4};
	xsi_register_didat("work_m_09617021029526201959_2366470599", "isim/game_tb_isim_beh.exe.sim/work/m_09617021029526201959_2366470599.didat");
	xsi_register_executes(pe);
}
