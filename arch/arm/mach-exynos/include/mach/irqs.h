/*
 * Copyright (c) 2010-2012 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * EXYNOS - IRQ definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_IRQS_H
#define __ASM_ARCH_IRQS_H __FILE__

#include <plat/irqs.h>

/* PPI: Private Peripheral Interrupt */

#define IRQ_PPI(x)			(x + 16)

/* SPI: Shared Peripheral Interrupt */

#define IRQ_SPI(x)			(x + 32)

/* COMBINER */

#define MAX_IRQ_IN_COMBINER		8
#define COMBINER_GROUP(x)		((x) * MAX_IRQ_IN_COMBINER + IRQ_SPI(128))
#define COMBINER_IRQ(x, y)		(COMBINER_GROUP(x) + y)

/* For EXYNOS4 and EXYNOS5 */

#define EXYNOS_IRQ_EINT16_31		IRQ_SPI(32)

/* For EXYNOS4 SoCs */

#define EXYNOS4_IRQ_EINT0		IRQ_SPI(16)
#define EXYNOS4_IRQ_EINT1		IRQ_SPI(17)
#define EXYNOS4_IRQ_EINT2		IRQ_SPI(18)
#define EXYNOS4_IRQ_EINT3		IRQ_SPI(19)
#define EXYNOS4_IRQ_EINT4		IRQ_SPI(20)
#define EXYNOS4_IRQ_EINT5		IRQ_SPI(21)
#define EXYNOS4_IRQ_EINT6		IRQ_SPI(22)
#define EXYNOS4_IRQ_EINT7		IRQ_SPI(23)
#define EXYNOS4_IRQ_EINT8		IRQ_SPI(24)
#define EXYNOS4_IRQ_EINT9		IRQ_SPI(25)
#define EXYNOS4_IRQ_EINT10		IRQ_SPI(26)
#define EXYNOS4_IRQ_EINT11		IRQ_SPI(27)
#define EXYNOS4_IRQ_EINT12		IRQ_SPI(28)
#define EXYNOS4_IRQ_EINT13		IRQ_SPI(29)
#define EXYNOS4_IRQ_EINT14		IRQ_SPI(30)
#define EXYNOS4_IRQ_EINT15		IRQ_SPI(31)

#define EXYNOS4_IRQ_MDMA0		IRQ_SPI(33)
#define EXYNOS4_IRQ_MDMA1		IRQ_SPI(34)
#define EXYNOS4_IRQ_PDMA0		IRQ_SPI(35)
#define EXYNOS4_IRQ_PDMA1		IRQ_SPI(36)
#define EXYNOS4_IRQ_TIMER0_VIC		IRQ_SPI(37)
#define EXYNOS4_IRQ_TIMER1_VIC		IRQ_SPI(38)
#define EXYNOS4_IRQ_TIMER2_VIC		IRQ_SPI(39)
#define EXYNOS4_IRQ_TIMER3_VIC		IRQ_SPI(40)
#define EXYNOS4_IRQ_TIMER4_VIC		IRQ_SPI(41)
#define EXYNOS4_IRQ_MCT_L0		IRQ_SPI(42)
#define EXYNOS4_IRQ_WDT			IRQ_SPI(43)
#define EXYNOS4_IRQ_RTC_ALARM		IRQ_SPI(44)
#define EXYNOS4_IRQ_RTC_TIC		IRQ_SPI(45)
#define EXYNOS4_IRQ_GPIO_XB		IRQ_SPI(46)
#define EXYNOS4_IRQ_GPIO_XA		IRQ_SPI(47)
#define EXYNOS4_IRQ_MCT_L1		IRQ_SPI(48)

#define EXYNOS4_IRQ_UART0		IRQ_SPI(52)
#define EXYNOS4_IRQ_UART1		IRQ_SPI(53)
#define EXYNOS4_IRQ_UART2		IRQ_SPI(54)
#define EXYNOS4_IRQ_UART3		IRQ_SPI(55)
#define EXYNOS4_IRQ_UART4		IRQ_SPI(56)
#define EXYNOS4_IRQ_MCT_G0		IRQ_SPI(57)
#define EXYNOS4_IRQ_IIC			IRQ_SPI(58)
#define EXYNOS4_IRQ_IIC1		IRQ_SPI(59)
#define EXYNOS4_IRQ_IIC2		IRQ_SPI(60)
#define EXYNOS4_IRQ_IIC3		IRQ_SPI(61)
#define EXYNOS4_IRQ_IIC4		IRQ_SPI(62)
#define EXYNOS4_IRQ_IIC5		IRQ_SPI(63)
#define EXYNOS4_IRQ_IIC6		IRQ_SPI(64)
#define EXYNOS4_IRQ_IIC7		IRQ_SPI(65)
#define EXYNOS4_IRQ_SPI0		IRQ_SPI(66)
#define EXYNOS4_IRQ_SPI1		IRQ_SPI(67)
#define EXYNOS4_IRQ_SPI2		IRQ_SPI(68)

#define EXYNOS4_IRQ_USB_HOST		IRQ_SPI(70)
#define EXYNOS4_IRQ_USB_HSOTG		IRQ_SPI(71)
#define EXYNOS4_IRQ_MODEM_IF		IRQ_SPI(72)
#define EXYNOS4_IRQ_HSMMC0		IRQ_SPI(73)
#define EXYNOS4_IRQ_HSMMC1		IRQ_SPI(74)
#define EXYNOS4_IRQ_HSMMC2		IRQ_SPI(75)
#define EXYNOS4_IRQ_HSMMC3		IRQ_SPI(76)
#define EXYNOS4_IRQ_DWMCI		IRQ_SPI(77)

#define EXYNOS4_IRQ_MIPI_CSIS0		IRQ_SPI(78)
#define EXYNOS4_IRQ_MIPI_CSIS1		IRQ_SPI(80)

#define EXYNOS4_IRQ_ONENAND_AUDI	IRQ_SPI(82)
#define EXYNOS4_IRQ_ROTATOR		IRQ_SPI(83)
#define EXYNOS4_IRQ_FIMC0		IRQ_SPI(84)
#define EXYNOS4_IRQ_FIMC1		IRQ_SPI(85)
#define EXYNOS4_IRQ_FIMC2		IRQ_SPI(86)
#define EXYNOS4_IRQ_FIMC3		IRQ_SPI(87)
#define EXYNOS4_IRQ_JPEG		IRQ_SPI(88)
#define EXYNOS4_IRQ_2D			IRQ_SPI(89)
#define EXYNOS4_IRQ_PCIE		IRQ_SPI(90)

#define EXYNOS4_IRQ_MIXER		IRQ_SPI(91)
#define EXYNOS4_IRQ_HDMI		IRQ_SPI(92)
#define EXYNOS4_IRQ_IIC_HDMIPHY		IRQ_SPI(93)
#define EXYNOS4_IRQ_MFC			IRQ_SPI(94)
#define EXYNOS4_IRQ_SDO			IRQ_SPI(95)

#define EXYNOS4_IRQ_AUDIO_SS		IRQ_SPI(96)
#define EXYNOS4_IRQ_I2S0		IRQ_SPI(97)
#define EXYNOS4_IRQ_I2S1		IRQ_SPI(98)
#define EXYNOS4_IRQ_I2S2		IRQ_SPI(99)
#define EXYNOS4_IRQ_AC97		IRQ_SPI(100)

#define EXYNOS4_IRQ_SPDIF		IRQ_SPI(104)
#define EXYNOS4_IRQ_ADC0		IRQ_SPI(105)
#define EXYNOS4_IRQ_PEN0		IRQ_SPI(106)
#define EXYNOS4_IRQ_ADC1		IRQ_SPI(107)
#define EXYNOS4_IRQ_PEN1		IRQ_SPI(108)
#define EXYNOS4_IRQ_KEYPAD		IRQ_SPI(109)
#define EXYNOS4_IRQ_POWER_PMU		IRQ_SPI(110)
#define EXYNOS4_IRQ_GPS			IRQ_SPI(111)
#define EXYNOS4_IRQ_INTFEEDCTRL_SSS	IRQ_SPI(112)
#define EXYNOS4_IRQ_SLIMBUS		IRQ_SPI(113)

#define EXYNOS4_IRQ_TSI			IRQ_SPI(115)
#define EXYNOS4_IRQ_SATA		IRQ_SPI(116)

#define EXYNOS4_IRQ_PMU			COMBINER_IRQ(2, 2)
#define EXYNOS4_IRQ_PMU_CPU1		COMBINER_IRQ(3, 2)
#define EXYNOS4_IRQ_PMU_CPU2		COMBINER_IRQ(18, 2)
#define EXYNOS4_IRQ_PMU_CPU3		COMBINER_IRQ(19, 2)

#define EXYNOS4_IRQ_TMU_TRIG0		COMBINER_IRQ(2, 4)
#define EXYNOS4_IRQ_TMU_TRIG1		COMBINER_IRQ(3, 4)

#define EXYNOS4_IRQ_SYSMMU_MDMA0_0	COMBINER_IRQ(4, 0)
#define EXYNOS4_IRQ_SYSMMU_SSS_0	COMBINER_IRQ(4, 1)
#define EXYNOS4_IRQ_SYSMMU_FIMC0_0	COMBINER_IRQ(4, 2)
#define EXYNOS4_IRQ_SYSMMU_FIMC1_0	COMBINER_IRQ(4, 3)
#define EXYNOS4_IRQ_SYSMMU_FIMC2_0	COMBINER_IRQ(4, 4)
#define EXYNOS4_IRQ_SYSMMU_FIMC3_0	COMBINER_IRQ(4, 5)
#define EXYNOS4_IRQ_SYSMMU_JPEG_0	COMBINER_IRQ(4, 6)
#define EXYNOS4_IRQ_SYSMMU_2D_0		COMBINER_IRQ(4, 7)

#define EXYNOS4_IRQ_SYSMMU_ROTATOR_0	COMBINER_IRQ(5, 0)
#define EXYNOS4_IRQ_SYSMMU_MDMA1_0	COMBINER_IRQ(5, 1)
#define EXYNOS4_IRQ_SYSMMU_LCD0_M0_0	COMBINER_IRQ(5, 2)
#define EXYNOS4_IRQ_SYSMMU_LCD1_M1_0	COMBINER_IRQ(5, 3)
#define EXYNOS4_IRQ_SYSMMU_TV_M0_0	COMBINER_IRQ(5, 4)
#define EXYNOS4_IRQ_SYSMMU_MFC_M0_0	COMBINER_IRQ(5, 5)
#define EXYNOS4_IRQ_SYSMMU_MFC_M1_0	COMBINER_IRQ(5, 6)
#define EXYNOS4_IRQ_SYSMMU_PCIE_0	COMBINER_IRQ(5, 7)

#define EXYNOS4_IRQ_SYSMMU_FIMC_LITE0_0	COMBINER_IRQ(16, 0)
#define EXYNOS4_IRQ_SYSMMU_FIMC_LITE1_0	COMBINER_IRQ(16, 1)
#define EXYNOS4_IRQ_SYSMMU_FIMC_ISP_0	COMBINER_IRQ(16, 2)
#define EXYNOS4_IRQ_SYSMMU_FIMC_DRC_0	COMBINER_IRQ(16, 3)
#define EXYNOS4_IRQ_SYSMMU_FIMC_FD_0	COMBINER_IRQ(16, 4)
#define EXYNOS4_IRQ_SYSMMU_FIMC_CX_0	COMBINER_IRQ(16, 5)

#define EXYNOS4_IRQ_FIMD0_FIFO		COMBINER_IRQ(11, 0)
#define EXYNOS4_IRQ_FIMD0_VSYNC		COMBINER_IRQ(11, 1)
#define EXYNOS4_IRQ_FIMD0_SYSTEM	COMBINER_IRQ(11, 2)

#define EXYNOS4210_MAX_COMBINER_NR	16
#define EXYNOS4212_MAX_COMBINER_NR	18
#define EXYNOS4412_MAX_COMBINER_NR	20
#define EXYNOS4_MAX_COMBINER_NR		EXYNOS4412_MAX_COMBINER_NR

#define EXYNOS4_IRQ_GPIO1_NR_GROUPS	16
#define EXYNOS4_IRQ_GPIO2_NR_GROUPS	9

/*
 * For Compatibility:
 * the default is for EXYNOS4, and
 * for exynos5, should be re-mapped at function
 */

#define IRQ_TIMER0_VIC			EXYNOS4_IRQ_TIMER0_VIC
#define IRQ_TIMER1_VIC			EXYNOS4_IRQ_TIMER1_VIC
#define IRQ_TIMER2_VIC			EXYNOS4_IRQ_TIMER2_VIC
#define IRQ_TIMER3_VIC			EXYNOS4_IRQ_TIMER3_VIC
#define IRQ_TIMER4_VIC			EXYNOS4_IRQ_TIMER4_VIC

#define IRQ_WDT				EXYNOS4_IRQ_WDT
#define IRQ_RTC_ALARM			EXYNOS4_IRQ_RTC_ALARM
#define IRQ_RTC_TIC			EXYNOS4_IRQ_RTC_TIC
#define IRQ_GPIO_XB			EXYNOS4_IRQ_GPIO_XB
#define IRQ_GPIO_XA			EXYNOS4_IRQ_GPIO_XA

#define IRQ_IIC				EXYNOS4_IRQ_IIC
#define IRQ_IIC1			EXYNOS4_IRQ_IIC1
#define IRQ_IIC3			EXYNOS4_IRQ_IIC3
#define IRQ_IIC5			EXYNOS4_IRQ_IIC5
#define IRQ_IIC6			EXYNOS4_IRQ_IIC6
#define IRQ_IIC7			EXYNOS4_IRQ_IIC7

#define IRQ_SPI0			EXYNOS4_IRQ_SPI0
#define IRQ_SPI1			EXYNOS4_IRQ_SPI1
#define IRQ_SPI2			EXYNOS4_IRQ_SPI2

#define IRQ_USB_HOST			EXYNOS4_IRQ_USB_HOST
#define IRQ_OTG				EXYNOS4_IRQ_USB_HSOTG

#define IRQ_HSMMC0			EXYNOS4_IRQ_HSMMC0
#define IRQ_HSMMC1			EXYNOS4_IRQ_HSMMC1
#define IRQ_HSMMC2			EXYNOS4_IRQ_HSMMC2
#define IRQ_HSMMC3			EXYNOS4_IRQ_HSMMC3

#define IRQ_MIPI_CSIS0			EXYNOS4_IRQ_MIPI_CSIS0

#define IRQ_ONENAND_AUDI		EXYNOS4_IRQ_ONENAND_AUDI

#define IRQ_FIMC0			EXYNOS4_IRQ_FIMC0
#define IRQ_FIMC1			EXYNOS4_IRQ_FIMC1
#define IRQ_FIMC2			EXYNOS4_IRQ_FIMC2
#define IRQ_FIMC3			EXYNOS4_IRQ_FIMC3
#define IRQ_JPEG			EXYNOS4_IRQ_JPEG
#define IRQ_2D				EXYNOS4_IRQ_2D

#define IRQ_MIXER			EXYNOS4_IRQ_MIXER
#define IRQ_HDMI			EXYNOS4_IRQ_HDMI
#define IRQ_IIC_HDMIPHY			EXYNOS4_IRQ_IIC_HDMIPHY
#define IRQ_MFC				EXYNOS4_IRQ_MFC
#define IRQ_SDO				EXYNOS4_IRQ_SDO

#define IRQ_I2S0			EXYNOS4_IRQ_I2S0

#define IRQ_ADC				EXYNOS4_IRQ_ADC0
#define IRQ_TC				EXYNOS4_IRQ_PEN0

#define IRQ_KEYPAD			EXYNOS4_IRQ_KEYPAD

#define IRQ_FIMD0_FIFO			EXYNOS4_IRQ_FIMD0_FIFO
#define IRQ_FIMD0_VSYNC			EXYNOS4_IRQ_FIMD0_VSYNC
#define IRQ_FIMD0_SYSTEM		EXYNOS4_IRQ_FIMD0_SYSTEM

#define IRQ_GPIO1_NR_GROUPS		EXYNOS4_IRQ_GPIO1_NR_GROUPS
#define IRQ_GPIO2_NR_GROUPS		EXYNOS4_IRQ_GPIO2_NR_GROUPS

/* For EXYNOS5 SoCs */

#define EXYNOS5_IRQ_MDMA0		IRQ_SPI(33)
#define EXYNOS5_IRQ_PDMA0		IRQ_SPI(34)
#define EXYNOS5_IRQ_PDMA1		IRQ_SPI(35)
#define EXYNOS5_IRQ_TIMER0_VIC		IRQ_SPI(36)
#define EXYNOS5_IRQ_TIMER1_VIC		IRQ_SPI(37)
#define EXYNOS5_IRQ_TIMER2_VIC		IRQ_SPI(38)
#define EXYNOS5_IRQ_TIMER3_VIC		IRQ_SPI(39)
#define EXYNOS5_IRQ_TIMER4_VIC		IRQ_SPI(40)
#define EXYNOS5_IRQ_RTIC		IRQ_SPI(41)
#define EXYNOS5_IRQ_WDT			IRQ_SPI(42)
#define EXYNOS5_IRQ_RTC_ALARM		IRQ_SPI(43)
#define EXYNOS5_IRQ_RTC_TIC		IRQ_SPI(44)
#define EXYNOS5_IRQ_GPIO_XB		IRQ_SPI(45)
#define EXYNOS5_IRQ_GPIO_XA		IRQ_SPI(46)
#define EXYNOS5_IRQ_GPIO		IRQ_SPI(47)
#define EXYNOS5_IRQ_IEM_IEC		IRQ_SPI(48)
#define EXYNOS5_IRQ_IEM_APC		IRQ_SPI(49)
#define EXYNOS5_IRQ_GPIO_C2C		IRQ_SPI(50)
#define EXYNOS5_IRQ_IIC			IRQ_SPI(56)
#define EXYNOS5_IRQ_IIC1		IRQ_SPI(57)
#define EXYNOS5_IRQ_IIC2		IRQ_SPI(58)
#define EXYNOS5_IRQ_IIC3		IRQ_SPI(59)
#define EXYNOS5_IRQ_IIC4		IRQ_SPI(60)
#define EXYNOS5_IRQ_IIC5		IRQ_SPI(61)
#define EXYNOS5_IRQ_IIC6		IRQ_SPI(62)
#define EXYNOS5_IRQ_IIC7		IRQ_SPI(63)
#define EXYNOS5_IRQ_IIC_HDMIPHY		IRQ_SPI(64)
#define EXYNOS5_IRQ_TMU			IRQ_SPI(65)
#define EXYNOS5_IRQ_FIQ_0		IRQ_SPI(66)
#define EXYNOS5_IRQ_FIQ_1		IRQ_SPI(67)
#define EXYNOS5_IRQ_SPI0		IRQ_SPI(68)
#define EXYNOS5_IRQ_SPI1		IRQ_SPI(69)
#define EXYNOS5_IRQ_SPI2		IRQ_SPI(70)
#define EXYNOS5_IRQ_USB_HOST		IRQ_SPI(71)
#define EXYNOS5_IRQ_USB3_DRD		IRQ_SPI(72)
#define EXYNOS5_IRQ_MIPI_HSI		IRQ_SPI(73)
#define EXYNOS5_IRQ_USB_HSOTG		IRQ_SPI(74)
#define EXYNOS5_IRQ_HSMMC0		IRQ_SPI(75)
#define EXYNOS5_IRQ_HSMMC1		IRQ_SPI(76)
#define EXYNOS5_IRQ_HSMMC2		IRQ_SPI(77)
#define EXYNOS5_IRQ_HSMMC3		IRQ_SPI(78)
#define EXYNOS5_IRQ_MIPICSI0		IRQ_SPI(79)
#define EXYNOS5_IRQ_MIPICSI1		IRQ_SPI(80)
#define EXYNOS5_IRQ_EFNFCON_DMA_ABORT	IRQ_SPI(81)
#define EXYNOS5_IRQ_MIPIDSI0		IRQ_SPI(82)
#define EXYNOS5_IRQ_WDT_IOP		IRQ_SPI(83)
#define EXYNOS5_IRQ_ROTATOR		IRQ_SPI(84)
#define EXYNOS5_IRQ_GSC0		IRQ_SPI(85)
#define EXYNOS5_IRQ_GSC1		IRQ_SPI(86)
#define EXYNOS5_IRQ_GSC2		IRQ_SPI(87)
#define EXYNOS5_IRQ_GSC3		IRQ_SPI(88)
#define EXYNOS5_IRQ_JPEG		IRQ_SPI(89)
#define EXYNOS5_IRQ_EFNFCON_DMA		IRQ_SPI(90)
#define EXYNOS5_IRQ_2D			IRQ_SPI(91)
#define EXYNOS5_IRQ_EFNFCON_0		IRQ_SPI(92)
#define EXYNOS5_IRQ_EFNFCON_1		IRQ_SPI(93)
#define EXYNOS5_IRQ_MIXER		IRQ_SPI(94)
#define EXYNOS5_IRQ_HDMI		IRQ_SPI(95)
#define EXYNOS5_IRQ_MFC			IRQ_SPI(96)
#define EXYNOS5_IRQ_AUDIO_SS		IRQ_SPI(97)
#define EXYNOS5_IRQ_I2S0		IRQ_SPI(98)
#define EXYNOS5_IRQ_I2S1		IRQ_SPI(99)
#define EXYNOS5_IRQ_I2S2		IRQ_SPI(100)
#define EXYNOS5_IRQ_AC97		IRQ_SPI(101)
#define EXYNOS5_IRQ_PCM0		IRQ_SPI(102)
#define EXYNOS5_IRQ_PCM1		IRQ_SPI(103)
#define EXYNOS5_IRQ_PCM2		IRQ_SPI(104)
#define EXYNOS5_IRQ_SPDIF		IRQ_SPI(105)
#define EXYNOS5_IRQ_ADC0		IRQ_SPI(106)
#define EXYNOS5_IRQ_ADC1		IRQ_SPI(107)
#define EXYNOS5_IRQ_SATA_PHY		IRQ_SPI(108)
#define EXYNOS5_IRQ_SATA_PMEMREQ	IRQ_SPI(109)
#define EXYNOS5_IRQ_CAM_C		IRQ_SPI(110)
#define EXYNOS5_IRQ_EAGLE_PMU		IRQ_SPI(111)
#define EXYNOS5_IRQ_INTFEEDCTRL_SSS	IRQ_SPI(112)
#define EXYNOS5_IRQ_DP1_INTP1		IRQ_SPI(113)
#define EXYNOS5_IRQ_CEC			IRQ_SPI(114)
#define EXYNOS5_IRQ_SATA		IRQ_SPI(115)

#define EXYNOS5_IRQ_MMC44		IRQ_SPI(123)
#define EXYNOS5_IRQ_MDMA1		IRQ_SPI(124)
#define EXYNOS5_IRQ_FIMC_LITE0		IRQ_SPI(125)
#define EXYNOS5_IRQ_FIMC_LITE1		IRQ_SPI(126)
#define EXYNOS5_IRQ_FIMC_LITE2		IRQ_SPI(90)
#define EXYNOS5_IRQ_RP_TIMER		IRQ_SPI(127)

#define EXYNOS5_IRQ_CSIS0		IRQ_SPI(138)
#define EXYNOS5_IRQ_CSIS1		IRQ_SPI(139)
#define EXYNOS5_IRQ_FIMC_LITE_A		IRQ_SPI(140)
#define EXYNOS5_IRQ_FIMC_LITE_B		IRQ_SPI(141)
#define EXYNOS5_IRQ_FIMC_LITE_D		IRQ_SPI(142)
#define EXYNOS5_IRQ_CSIS2		IRQ_SPI(172)
#define EXYNOS5_IRQ_FIMC_LITE_C		IRQ_SPI(173)

#define EXYNOS5_GPU_IRQ_NUMBER      IRQ_SPI(117)
#define EXYNOS5_JOB_IRQ_NUMBER      IRQ_SPI(219)
#define EXYNOS5_MMU_IRQ_NUMBER      IRQ_SPI(74)

#define EXYNOS5430_G3D_IRQGPU	IRQ_SPI(281)
#define EXYNOS5430_G3D_IRQJOB	IRQ_SPI(282)
#define EXYNOS5430_G3D_IRQMMU	IRQ_SPI(283)

#define EXYNOS7420_G3D_IRQGPU	IRQ_SPI(240)
#define EXYNOS7420_G3D_IRQJOB	IRQ_SPI(241)
#define EXYNOS7420_G3D_IRQMMU	IRQ_SPI(242)

/* For Compatibility */
#define GPU_IRQ_NUMBER EXYNOS5430_G3D_IRQGPU
#define JOB_IRQ_NUMBER EXYNOS5430_G3D_IRQJOB
#define MMU_IRQ_NUMBER EXYNOS5430_G3D_IRQMMU

#if defined(CONFIG_SOC_EXYNOS5422)
#define IRQ_FIMC_LITE0			EXYNOS5_IRQ_FIMC_LITE0
#define IRQ_FIMC_LITE1			EXYNOS5_IRQ_FIMC_LITE1
#define IRQ_FIMC_LITE2			EXYNOS5_IRQ_FIMC_LITE2
#else
#define IRQ_MIPICSI0			IRQ_SPI(130)
#define IRQ_MIPICSI1			IRQ_SPI(131)

#define IRQ_FIMC_LITE0			IRQ_SPI(132)
#define IRQ_FIMC_LITE1			IRQ_SPI(133)
#define IRQ_FIMC_LITE2			IRQ_SPI(146)
#define IRQ_FIMC_LITE3			IRQ_SPI(134)
#endif

/* EXYNOS5440 */

#define EXYNOS5440_IRQ_UART0		IRQ_SPI(2)
#define EXYNOS5440_IRQ_UART1		IRQ_SPI(3)

#define EXYNOS5_IRQ_PMU			COMBINER_IRQ(1, 2)

#define EXYNOS5_IRQ_SYSMMU_GSC0_0	COMBINER_IRQ(2, 0)
#define EXYNOS5_IRQ_SYSMMU_GSC0_1	COMBINER_IRQ(2, 1)
#define EXYNOS5_IRQ_SYSMMU_GSC1_0	COMBINER_IRQ(2, 2)
#define EXYNOS5_IRQ_SYSMMU_GSC1_1	COMBINER_IRQ(2, 3)
#define EXYNOS5_IRQ_SYSMMU_GSC2_0	COMBINER_IRQ(2, 4)
#define EXYNOS5_IRQ_SYSMMU_GSC2_1	COMBINER_IRQ(2, 5)
#define EXYNOS5_IRQ_SYSMMU_GSC3_0	COMBINER_IRQ(2, 6)
#define EXYNOS5_IRQ_SYSMMU_GSC3_1	COMBINER_IRQ(2, 7)

#define EXYNOS5_IRQ_SYSMMU_LITE2_0	COMBINER_IRQ(3, 0)
#define EXYNOS5_IRQ_SYSMMU_LITE2_1	COMBINER_IRQ(3, 1)
#define EXYNOS5_IRQ_SYSMMU_FIMD1_0	COMBINER_IRQ(3, 2)
#define EXYNOS5_IRQ_SYSMMU_FIMD1_1	COMBINER_IRQ(3, 3)
#define EXYNOS5_IRQ_SYSMMU_LITE0_0	COMBINER_IRQ(3, 4)
#define EXYNOS5_IRQ_SYSMMU_LITE0_1	COMBINER_IRQ(3, 5)
#define EXYNOS5_IRQ_SYSMMU_SCALERPISP_0	COMBINER_IRQ(3, 6)
#define EXYNOS5_IRQ_SYSMMU_SCALERPISP_1	COMBINER_IRQ(3, 7)

#define EXYNOS5_IRQ_SYSMMU_ROTATOR_0	COMBINER_IRQ(4, 0)
#define EXYNOS5_IRQ_SYSMMU_ROTATOR_1	COMBINER_IRQ(4, 1)
#define EXYNOS5_IRQ_SYSMMU_JPEG_0	COMBINER_IRQ(4, 2)
#define EXYNOS5_IRQ_SYSMMU_JPEG_1	COMBINER_IRQ(4, 3)

#define EXYNOS5_IRQ_SYSMMU_FD_0		COMBINER_IRQ(5, 0)
#define EXYNOS5_IRQ_SYSMMU_FD_1		COMBINER_IRQ(5, 1)
#define EXYNOS5_IRQ_SYSMMU_SCALERCISP_0	COMBINER_IRQ(5, 2)
#define EXYNOS5_IRQ_SYSMMU_SCALERCISP_1	COMBINER_IRQ(5, 3)
#define EXYNOS5_IRQ_SYSMMU_MCUISP_0	COMBINER_IRQ(5, 4)
#define EXYNOS5_IRQ_SYSMMU_MCUISP_1	COMBINER_IRQ(5, 5)
#define EXYNOS5_IRQ_SYSMMU_3DNR_0	COMBINER_IRQ(5, 6)
#define EXYNOS5_IRQ_SYSMMU_3DNR_1	COMBINER_IRQ(5, 7)

#define EXYNOS5_IRQ_SYSMMU_ARM_0	COMBINER_IRQ(6, 0)
#define EXYNOS5_IRQ_SYSMMU_ARM_1	COMBINER_IRQ(6, 1)
#define EXYNOS5_IRQ_SYSMMU_MFC_R_0	COMBINER_IRQ(6, 2)
#define EXYNOS5_IRQ_SYSMMU_MFC_R_1	COMBINER_IRQ(6, 3)
#define EXYNOS5_IRQ_SYSMMU_RTIC_0	COMBINER_IRQ(6, 4)
#define EXYNOS5_IRQ_SYSMMU_RTIC_1	COMBINER_IRQ(6, 5)
#define EXYNOS5_IRQ_SYSMMU_SSS_0	COMBINER_IRQ(6, 6)
#define EXYNOS5_IRQ_SYSMMU_SSS_1	COMBINER_IRQ(6, 7)

#define EXYNOS5_IRQ_SYSMMU_MDMA0_0	COMBINER_IRQ(7, 0)
#define EXYNOS5_IRQ_SYSMMU_MDMA0_1	COMBINER_IRQ(7, 1)
#define EXYNOS5_IRQ_SYSMMU_MDMA1_0	COMBINER_IRQ(7, 2)
#define EXYNOS5_IRQ_SYSMMU_MDMA1_1	COMBINER_IRQ(7, 3)
#define EXYNOS5_IRQ_SYSMMU_TV_0		COMBINER_IRQ(7, 4)
#define EXYNOS5_IRQ_SYSMMU_TV_1		COMBINER_IRQ(7, 5)

#define EXYNOS5_IRQ_SYSMMU_MFC_L_0	COMBINER_IRQ(8, 5)
#define EXYNOS5_IRQ_SYSMMU_MFC_L_1	COMBINER_IRQ(8, 6)

#define EXYNOS5_IRQ_SYSMMU_DIS1_0	COMBINER_IRQ(9, 4)
#define EXYNOS5_IRQ_SYSMMU_DIS1_1	COMBINER_IRQ(9, 5)

#define EXYNOS5_IRQ_DP			COMBINER_IRQ(10, 3)
#define EXYNOS5_IRQ_SYSMMU_DIS0_0	COMBINER_IRQ(10, 4)
#define EXYNOS5_IRQ_SYSMMU_DIS0_1	COMBINER_IRQ(10, 5)
#define EXYNOS5_IRQ_SYSMMU_ISP_0	COMBINER_IRQ(10, 6)
#define EXYNOS5_IRQ_SYSMMU_ISP_1	COMBINER_IRQ(10, 7)

#define EXYNOS5_IRQ_SYSMMU_ODC_0	COMBINER_IRQ(11, 0)
#define EXYNOS5_IRQ_SYSMMU_ODC_1	COMBINER_IRQ(11, 1)
#define EXYNOS5_IRQ_SYSMMU_DRC_0	COMBINER_IRQ(11, 6)
#define EXYNOS5_IRQ_SYSMMU_DRC_1	COMBINER_IRQ(11, 7)

#define EXYNOS5_IRQ_MDMA1_ABORT		COMBINER_IRQ(13, 1)

#define EXYNOS5_IRQ_MDMA0_ABORT		COMBINER_IRQ(15, 3)

#define EXYNOS5_IRQ_FIMD1_FIFO		COMBINER_IRQ(18, 4)
#define EXYNOS5_IRQ_FIMD1_VSYNC		COMBINER_IRQ(18, 5)
#define EXYNOS5_IRQ_FIMD1_SYSTEM	COMBINER_IRQ(18, 6)

#define EXYNOS5_IRQ_ARMIOP_GIC		COMBINER_IRQ(19, 0)
#define EXYNOS5_IRQ_ARMISP_GIC		COMBINER_IRQ(19, 1)
#define EXYNOS5_IRQ_IOP_GIC		COMBINER_IRQ(19, 3)
#define EXYNOS5_IRQ_ISP_GIC		COMBINER_IRQ(19, 4)

#define EXYNOS5_IRQ_PMU_CPU1		COMBINER_IRQ(22, 4)

#define EXYNOS5_IRQ_EINT0		COMBINER_IRQ(23, 0)

#define EXYNOS5_IRQ_EINT1		COMBINER_IRQ(24, 0)
#define EXYNOS5_IRQ_SYSMMU_LITE1_0	COMBINER_IRQ(24, 1)
#define EXYNOS5_IRQ_SYSMMU_LITE1_1	COMBINER_IRQ(24, 2)
#define EXYNOS5_IRQ_SYSMMU_2D_0		COMBINER_IRQ(24, 5)
#define EXYNOS5_IRQ_SYSMMU_2D_1		COMBINER_IRQ(24, 6)

#define EXYNOS5_IRQ_EINT2		COMBINER_IRQ(25, 0)
#define EXYNOS5_IRQ_EINT3		COMBINER_IRQ(25, 1)

#define EXYNOS5_IRQ_EINT4		COMBINER_IRQ(26, 0)
#define EXYNOS5_IRQ_EINT5		COMBINER_IRQ(26, 1)

#define EXYNOS5_IRQ_EINT6		COMBINER_IRQ(27, 0)
#define EXYNOS5_IRQ_EINT7		COMBINER_IRQ(27, 1)

#define EXYNOS5_IRQ_EINT8		COMBINER_IRQ(28, 0)
#define EXYNOS5_IRQ_EINT9		COMBINER_IRQ(28, 1)

#define EXYNOS5_IRQ_EINT10		COMBINER_IRQ(29, 0)
#define EXYNOS5_IRQ_EINT11		COMBINER_IRQ(29, 1)

#define EXYNOS5_IRQ_EINT12		COMBINER_IRQ(30, 0)
#define EXYNOS5_IRQ_EINT13		COMBINER_IRQ(30, 1)

#define EXYNOS5_IRQ_EINT14		COMBINER_IRQ(31, 0)
#define EXYNOS5_IRQ_EINT15		COMBINER_IRQ(31, 1)

#define EXYNOS5_MAX_COMBINER_NR		32

#define EXYNOS5_IRQ_GPIO1_NR_GROUPS	14
#define EXYNOS5_IRQ_GPIO2_NR_GROUPS	9
#define EXYNOS5_IRQ_GPIO3_NR_GROUPS	5
#define EXYNOS5_IRQ_GPIO4_NR_GROUPS	1

#define MAX_COMBINER_NR			(EXYNOS4_MAX_COMBINER_NR > EXYNOS5_MAX_COMBINER_NR ? \
					EXYNOS4_MAX_COMBINER_NR : EXYNOS5_MAX_COMBINER_NR)

#define S5P_EINT_BASE1			COMBINER_IRQ(MAX_COMBINER_NR, 0)
#define S5P_EINT_BASE2			(S5P_EINT_BASE1 + 16)
#define S5P_GPIOINT_BASE		(S5P_EINT_BASE1 + 32)
#define IRQ_GPIO_END			(S5P_GPIOINT_BASE + S5P_GPIOINT_COUNT)
#define IRQ_TIMER_BASE			(IRQ_GPIO_END + 64)

#define IRQ_BOARD_START			(IRQ_TIMER_BASE + IRQ_TIMER_COUNT)
#define IRQ_NR_BOARD			48
/* Set the default NR_IRQS */
#define EXYNOS_NR_IRQS			(IRQ_BOARD_START + IRQ_NR_BOARD)

#ifndef CONFIG_SPARSE_IRQ
#define NR_IRQS				EXYNOS_NR_IRQS
#endif

#endif /* __ASM_ARCH_IRQS_H */
