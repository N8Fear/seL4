/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

#ifndef __PLAT_MACHINE_DEVICES_H
#define __PLAT_MACHINE_DEVICES_H

/* These devices are used by the kernel. */
#define INTC_PPTR                       0xfff01000
#define UART0_PPTR                      0xfff02000
#define DMTIMER0_PPTR                   0xfff03000
#define WDT1_PPTR                       0xfff04000
#define CMPER_PPTR                      0xfff05000
#define ARM_DEBUG_MMAPPING_PPTR         0xfff06000


/* Other devices on the SoC. */
:#define PRCM_PADDR      0x44E00000

#define CMPER_PADDR           0x44E00000   /*   1 kB */
#define CM_WKUP_PADDR         0x44E00400   /*  256 B */
#define CM_DPLL_PADDR         0x44E00500   /*  256 B */
#define CM_MPU_PADDR          0x44E00600   /*  256 B */
#define CM_DEVICE_PADDR       0x44E00700   /*  256 B */
#define CM_RTC_PADDR          0x44E00800   /*  256 B */
#define CM_GFX_PADDR          0x44E00900   /*  256 B */
#define CM_CEFUSE_PADDR       0x44E00A00   /*  256 B */
#define PRM_IRQ_PADDR         0x44E00B00   /*  256 B */
#define PRM_PER_PADDR         0x44E00C00   /*  256 B */
#define PRM_WKUP_PADDR        0x44E00D00   /*  256 B */
#define PRM_MPU_PADDR         0x44E00E00   /*  256 B */
#define PRM_DEV_PADDR         0x44E00F00   /*  256 B */
#define PRM_RTC_PADDR         0x44E01000   /*  256 B */
#define PRM_GFX_PADDR         0x44E01100   /*  256 B */
#define PRM_CEFUSE_PADDR      0x44E01200   /*  256 B */
#define DMTIMER0_PADDR        0x44E05000   /*   4 kB */
#define GPIO0_PADDR           0x44E07000   /*   4 kB */
#define UART0_PADDR           0x44E09000   /*   4 kB */
#define I2C0_PADDR            0x44E0B000   /*   4 kB */
#define ADC_TSC_PADDR         0x44E0D000   /*   4 kB */
#define CTRL_PADDR            0x44E10000   /* 128 kB s */
#define DDR2_3_mDDR_PHY_PADDR 0x44E12000   /* 128 kB s */
#define DMTIMER1_1MS_PADDR    0x44E31000   /*   4 kB */
#define WDT1_PADDR            0x44E35000   /*   4 kB */
#define RTCSS_PADDR           0x44E3E000   /*   4 kB */
#define UART1_PADDR           0x48022000   /*   4 kB */
#define UART2_PADDR           0x48024000   /*   4 kB */
#define I2C1_PADDR            0x4802AFFF   /*   4 kB */
#define MCSPI0_PADDR          0x48030000   /*   4 kB */
#define McASP0_CFG_PADDR      0x48038000   /*   8 kB */
#define McASP1_CFG_PADDR      0x4803C000   /*   8 kB */
#define DMTIMER2_PADDR        0x48040000   /*   4 kB */
#define DMTIMER3_PADDR        0x48042000   /*   4 kB */
#define DMTIMER4_PADDR        0x48044000   /*   4 kB */
#define DMTIMER5_PADDR        0x48046000   /*   4 kB */
#define DMTIMER6_PADDR        0x48048000   /*   4 kB */
#define DMTIMER7_PADDR        0x4804A000   /*   4 kB */
#define GPIO1_PADDR           0x4804C000   /*   4 kB */
#define MMCHS0_PADDR          0x48060000   /*   4 kB */
#define ELM_PADDR             0x48080000   /*  64 kB */
#define MAILBOX_0_PADDR       0x480C8000   /*   4 kB */
#define SPINLOCK_PADDR        0x480CA000   /*   4 kB */
#define OCP_WATCHPOINT_PADDR  0x4818C000   /*   4 kB */
#define I2C2_PADDR            0x4819C000   /*   4 kB */
#define MCSPI1_PADDR          0x481A0000   /*   4 kB */
#define UART3_PADDR           0x481A6000   /*   4 kB */
#define UART4_PADDR           0x481A8000   /*   4 kB */
#define UART5_PADDR           0x481AA000   /*   4 kB */
#define GPIO2_PADDR           0x481AC000   /*   4 kB */
#define GPIO3_PADDR           0x481AE000   /*   4 kB */
#define DCAN0_PADDR           0x481CC000   /*   8 kB */
#define DCAN1_PADDR           0x481D0000   /*   8 kB */
#define MMC1_PADDR            0x481D8000   /*   4 kB */
#define INTC_PADDR            0x48200000   /*   4 kB */

/* PWM missing */
/* LCD MISSING */
/* Network subsystem CPSW */
#define CPSW_PADDR            0x4A100000   /*  32 kB */
#define CPSW_PORT_PADDR       0x4A101000   /* 1792   */
#define CPSW_CPDMA_PADDR      0x4A100800   /*  256   */
#define CPSW_STATS_PADDR      0x4A100900   /*  256   */
#define CPSW_STATERAM_PADDR   0x4A100A00   /*  512   */
#define CPSW_CPTS_PADDR       0x4A100C00   /*  512   */
#define CPSW_ALE_PADDR        0x4A100D00   /*  128   */
#define CPSW_SL1_PADDR        0x4A100D80   /*   64   */
#define CPSW_SL2_PADDR        0x4A100DC0   /*   64   */
#define MDIO_PADDR            0x4A101000   /*  256   */
#define CPSW_WR_PADDR         0x4A101200   /* 3584   */
#define CPPI_RAM_PADDR        0x4A102000   /* 8192   */
#define PRU_ICSS_PADDR        0x4A300000   /* 512 KB */

#endif
