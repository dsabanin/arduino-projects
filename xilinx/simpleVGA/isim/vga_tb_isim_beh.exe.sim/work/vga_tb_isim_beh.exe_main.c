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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    unisims_ver_m_13701390776532775226_2297623829_init();
    unisims_ver_m_10756824001551653569_1564118187_init();
    unisims_ver_m_03306128100829070844_2591343773_init();
    unisims_ver_m_02760857255181855774_2593380106_init();
    work_m_17600995293907914319_0740721304_init();
    work_m_14709551764126924514_2643714390_init();
    work_m_04247709231896101119_3547482940_init();
    work_m_01939905220714868598_1110640149_init();
    work_m_13848511749955961629_0749069297_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_13848511749955961629_0749069297");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
