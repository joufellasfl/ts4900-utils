#ifndef _CROSSBAR_TS7970_H_
#define _CROSSBAR_TS7970_H_
#include "fpga.h"

struct cbarpin ts7970_inputs[] = {
	{ 0, "TTYMXC2_RXD" },
	{ 1, "TTYMXC4_RXD" },
	{ 2, "TTYMXC2_CTS" },
	{ 3, "TTYMXC3_RXD" },
	{ 4, "TTYMXC1_CTS" },
	{ 5, "TTYMXC2_RTS" },
	{ 6, "MB_TXD" },
	{ 7, "MB_TX_EN_485" },
	{ 8, "STC_TXD_485" },
	{ 9, "STC_TX_EN_485" },
	{ 10, "TXD_232_COM" },
	{ 11, "RTS_232_COM" },
	{ 12, "HD1_TXD" },
	{ 16, "BT_CTS" },
	{ 17, "BT_RXD" },
	{ 18, "TTYMXC1_RXD" },
	{ 19, "HD1_DIO_1" },
	{ 20, "HD1_DIO_2" },
	{ 21, "HD1_DIO_3" },
	{ 22, "HD1_DIO_4" },
	{ 23, "HD1_DIO_5" },
	{ 24, "HD1_DIO_6" },
	{ 25, "EN_OUT_1" },
	{ 26, "EN_OUT_2" },
	{ 27, "FPGA_IRQ_0" },
	{ 28, "STC_TXD_232" },
	{ 44, "TTYMAX0_RXD" },
	{ 45, "TTYMAX1_RXD" },
	{ 46, "TTYMAX2_RXD" },
	{ 53, "TTYMAX0_CTS" },
	{ 54, "TTYMAX1_CTS" },
	{ 55, "TTYMAX2_CTS" },
	{ 58, "HD1_SPI_CLK" },
	{ 59, "HD1_SPI_MOSI" },
	{ 60, "HD1_SPI_MISO" },
	{ 0, 0 },
};

struct cbarpin ts7970_outputs[] = {
	{ 0, "UNCHANGED" },
	{ 1, "BT_RTS" },
	{ 2, "BT_TXD" },
	{ 3, "TTYMXC4_TXD" },
	{ 4, "TTYMXC2_TXD" },
	{ 5, "TTYMXC2_CTS" },
	{ 6, "TTYMXC1_RTS" },
	{ 7, "TTYMXC2_RTS" },
	{ 8, "MB_RXD_485" },
	{ 9, "STC_RXD_485_3V" },
	{ 10, "RXD_232_COM" },
	{ 11, "CTS_232_COM" },
	{ 12, "STC_RXD" },
	{ 13, "HD1_RXD" },
	{ 14, "TTYMXC3_TXD" },
	{ 15, "TTYMXC1_TXD" },
	{ 16, "TTYMAX0_TXD" },
	{ 17, "TTYMAX0_TXEN" },
	{ 18, "TTYMAX0_RTS" },
	{ 19, "TTYMAX1_TXD" },
	{ 20, "TTYMAX1_TXEN" },
	{ 21, "TTYMAX1_RTS" },
	{ 22, "TTYMAX2_TXD" },
	{ 23, "TTYMAX2_TXEN" },
	{ 24, "TTYMAX2_RTS" },
	{ 25, "TTYMXC1_TXEN" },
	{ 26, "TTYMXC3_TXEN" },
	{ 27, "CLK_12MHZ" },
	{ 28, "CLK_14MHZ" },
	{ 29, "FPGA_24MHZ_CLK" },
	{ 30, "CLK_28MHZ" },
	{ 31, "GPIO" },
	{ 32, "HD1_DIO_1" },
	{ 33, "HD1_DIO_2" },
	{ 34, "HD1_DIO_3" },
	{ 35, "HD1_DIO_4" },
	{ 36, "HD1_DIO_5" },
	{ 37, "HD1_DIO_6" },
	{ 38, "DIO_1_IN" },
	{ 39, "DIO_2_IN" },
	{ 40, "LCD_D10" },
	{ 41, "PUSH_SW_CPU" },
	{ 42, "HD1_SPI_CLK" },
	{ 0, 0 },
};

#endif //_CROSSBAR_TS7970_H_
