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
static const char *ng0 = "/home/dsabanin/projects/embedded/xilinx/spartan6-1/myModule/myModule.v";
static unsigned int ng1[] = {32767U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {127U, 0U};
static unsigned int ng5[] = {255U, 0U};



static void Always_27_0(char *t0)
{
    char t5[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
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
    unsigned int t32;

LAB0:    xsi_set_current_line(27, ng0);

LAB2:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng1)));
    memset(t5, 0, 8);
    t6 = (t3 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB4;

LAB3:    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB4;

LAB7:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB5;

LAB6:    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(30, ng0);

LAB11:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 16, 0LL);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1448);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t6 = (t3 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t21 = (t13 ^ t14);
    t22 = (t12 | t21);
    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t7);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB15;

LAB12:    if (t25 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t5) = 1;

LAB15:    t9 = (t5 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t5);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);

LAB18:
LAB10:    goto LAB10;

LAB4:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB6;

LAB5:    *((unsigned int *)t5) = 1;
    goto LAB6;

LAB8:    xsi_set_current_line(29, ng0);
    t15 = (t0 + 1608);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng2)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t17, 16, t18, 32);
    t20 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 16, 0LL);
    goto LAB10;

LAB14:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(33, ng0);
    t15 = ((char*)((ng3)));
    t16 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 8, 0LL);
    goto LAB18;

LAB1:    return;
}

static void Cont_39_1(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3168);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
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
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 3088);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_03713045366562459041_1538374042_init()
{
	static char *pe[] = {(void *)Always_27_0,(void *)Cont_39_1};
	xsi_register_didat("work_m_03713045366562459041_1538374042", "isim/myModule_isim_beh.exe.sim/work/m_03713045366562459041_1538374042.didat");
	xsi_register_executes(pe);
}
