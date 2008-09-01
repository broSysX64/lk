/*
 * Copyright (c) 2008 Travis Geiselbrecht
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files
 * (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef __PLATFORM_OMAP3_H
#define __PLATFORM_OMAP3_H

#define SDRAM_BASE 0x80000000

#define L4_BASE     0x48000000
#define L4_WKUP_BASE    0x48300000
#define L4_PER_BASE 0x49000000
#define L4_EMU_BASE 0x54000000
#define GFX_BASE    0x50000000
#define L3_BASE     0x68000000
#define SMS_BASE    0x6C000000
#define SDRC_BASE   0x6D000000
#define GPMC_BASE   0x6E000000
#define SCM_BASE    0x48002000

/* clocks */
#define CM_CLKSEL_PER		(L4_BASE + 0x5040)

/* General Purpose Timers */
#define OMAP34XX_GPT1           (L4_BASE + 0x318000)
#define OMAP34XX_GPT2           (L4_BASE + 0x1032000)
#define OMAP34XX_GPT3           (L4_BASE + 0x1034000)
#define OMAP34XX_GPT4           (L4_BASE + 0x1036000)
#define OMAP34XX_GPT5           (L4_BASE + 0x1038000)
#define OMAP34XX_GPT6           (L4_BASE + 0x103A000)
#define OMAP34XX_GPT7           (L4_BASE + 0x103C000)
#define OMAP34XX_GPT8           (L4_BASE + 0x103E000)
#define OMAP34XX_GPT9           (L4_BASE + 0x1040000)
#define OMAP34XX_GPT10          (L4_BASE + 0x86000)
#define OMAP34XX_GPT11          (L4_BASE + 0x88000)
#define OMAP34XX_GPT12          (L4_BASE + 0x304000)

#define TIDR				0x00
#define TIOCP_CFG			0x10
#define TISTAT				0x14
#define TISR				0x18
#define TIER				0x1C
#define TWER				0x20
#define TCLR				0x24
#define TCRR				0x28
#define TLDR				0x2C
#define TTGR				0x30
#define TWPS				0x34
#define TMAR				0x38
#define TCAR1				0x3C
#define TSICR				0x40
#define TCAR2				0x44
#define TPIR				0x48
#define TNIR				0x4C
#define TCVR				0x50
#define TOCR				0x54
#define TOWR				0x58

/* WatchDog Timers (1 secure, 3 GP) */
#define WD1_BASE            (0x4830C000)
#define WD2_BASE            (0x48314000)
#define WD3_BASE            (0x49030000)

#define WIDR		0x00
#define WD_SYSCONFIG	0x10
#define WD_SYSSTATUS	0x14
#define WISR		0x18
#define WIER		0x1C
#define WCLR		0x24
#define WCRR		0x28
#define WLDR		0x2C
#define WTGR		0x30
#define WWPS		0x34
#define WSPR		0x48

#define W_PEND_WCLR	(1<<0)
#define W_PEND_WCRR	(1<<1)
#define W_PEND_WLDR	(1<<2)
#define W_PEND_WTGR	(1<<3)
#define W_PEND_WSPR	(1<<4)

#define WD_UNLOCK1      0xAAAA
#define WD_UNLOCK2      0x5555

/* 32KTIMER */
#define TIMER32K_BASE		(L4_BASE + 0x320000)
#define TIMER32K_REV		(TIMER32K_BASE + 0x00)
#define TIMER32K_CR			(TIMER32K_BASE + 0x10)

/* UART */
#define OMAP_UART1_BASE     (L4_BASE + 0x6a000)
#define OMAP_UART2_BASE     (L4_BASE + 0x6c000)
#define OMAP_UART3_BASE     (L4_BASE + 0x01020000)

#define UART_RHR    0
#define UART_THR    0
#define UART_DLL    0
#define UART_IER    1
#define UART_DLH    1
#define UART_IIR    2
#define UART_FCR    2
#define UART_EFR    2
#define UART_LCR    3
#define UART_MCR    4
#define UART_LSR    5
#define UART_MSR    6
#define UART_TCR    6
#define UART_SPR    7
#define UART_TLR    7
#define UART_MDR1   8
#define UART_MDR2   9
#define UART_SFLSR  10
#define UART_RESUME 11
#define UART_TXFLL  10
#define UART_TXFLH  11
#define UART_SFREGL 12
#define UART_SFREGH 13
#define UART_RXFLL  12
#define UART_RXFLH  13
#define UART_BLR    14
#define UART_UASR   14
#define UART_ACREG  15
#define UART_SCR    16
#define UART_SSR    17
#define UART_EBLR   18
#define UART_MVR    19
#define UART_SYSC   20

/* MPU INTC */
#define INTC_BASE			(L4_BASE + 0x200000)
#define INTC_REVISION		(INTC_BASE + 0x000)
#define INTC_SYSCONFIG		(INTC_BASE + 0x010)
#define INTC_SYSSTATUS		(INTC_BASE + 0x014)
#define INTC_SIR_IRQ		(INTC_BASE + 0x040)
#define INTC_SIR_FIQ		(INTC_BASE + 0x044)
#define INTC_CONTROL		(INTC_BASE + 0x048)
#define INTC_PROTECTION		(INTC_BASE + 0x04C)
#define INTC_IDLE			(INTC_BASE + 0x050)
#define INTC_IRQ_PRIORITY	(INTC_BASE + 0x060)
#define INTC_FIQ_PRIORITY	(INTC_BASE + 0x064)
#define INTC_THRESHOLD		(INTC_BASE + 0x068)
#define INTC_ITR(n)			(INTC_BASE + 0x080 + (n) * 0x20)
#define INTC_MIR(n)			(INTC_BASE + 0x084 + (n) * 0x20)
#define INTC_MIR_CLEAR(n)	(INTC_BASE + 0x088 + (n) * 0x20)
#define INTC_MIR_SET(n)		(INTC_BASE + 0x08C + (n) * 0x20)
#define INTC_ISR_SET(n)		(INTC_BASE + 0x090 + (n) * 0x20)
#define INTC_ISR_CLEAR(n)	(INTC_BASE + 0x094 + (n) * 0x20)
#define INTC_PENDING_IRQ(n)	(INTC_BASE + 0x098 + (n) * 0x20)
#define INTC_PENDING_FIQ(n)	(INTC_BASE + 0x09C + (n) * 0x20)
#define INTC_ILR(n)			(INTC_BASE + 0x100 + (n) * 4)

/* interrupts */
#define INT_VECTORS 		96
#define GPT2_IRQ			38

#endif
