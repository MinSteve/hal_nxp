/*
 * NOTE: Autogenerated file by kinetis_signal2dts.py
 *       for MK66FN2M0VLQ18/signal_configuration.xml
 *
 * Copyright (c) 2022, NXP
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _ZEPHYR_DTS_BINDING_MK66FN2M0VLQ18_
#define _ZEPHYR_DTS_BINDING_MK66FN2M0VLQ18_

#define KINETIS_MUX(port, pin, mux)		\
	(((((port) - 'A') & 0xF) << 28) |	\
	(((pin) & 0x3F) << 22) |		\
	(((mux) & 0x7) << 8))

#define TSI0_CH1_PTA0 KINETIS_MUX('A',0,0) /* PTA0 */
#define PTA0 KINETIS_MUX('A',0,1) /* PTA0 */
#define UART0_CTS_b_PTA0 KINETIS_MUX('A',0,2) /* PTA0 */
#define FTM0_CH5_PTA0 KINETIS_MUX('A',0,3) /* PTA0 */
#define LPUART0_CTS_b_PTA0 KINETIS_MUX('A',0,5) /* PTA0 */
#define JTAG_TCLK_PTA0 KINETIS_MUX('A',0,7) /* PTA0 */
#define TSI0_CH2_PTA1 KINETIS_MUX('A',1,0) /* PTA1 */
#define PTA1 KINETIS_MUX('A',1,1) /* PTA1 */
#define UART0_RX_PTA1 KINETIS_MUX('A',1,2) /* PTA1 */
#define FTM0_CH6_PTA1 KINETIS_MUX('A',1,3) /* PTA1 */
#define I2C3_SDA_PTA1 KINETIS_MUX('A',1,4) /* PTA1 */
#define LPUART0_RX_PTA1 KINETIS_MUX('A',1,5) /* PTA1 */
#define JTAG_TDI_PTA1 KINETIS_MUX('A',1,7) /* PTA1 */
#define TSI0_CH3_PTA2 KINETIS_MUX('A',2,0) /* PTA2 */
#define PTA2 KINETIS_MUX('A',2,1) /* PTA2 */
#define UART0_TX_PTA2 KINETIS_MUX('A',2,2) /* PTA2 */
#define FTM0_CH7_PTA2 KINETIS_MUX('A',2,3) /* PTA2 */
#define I2C3_SCL_PTA2 KINETIS_MUX('A',2,4) /* PTA2 */
#define LPUART0_TX_PTA2 KINETIS_MUX('A',2,5) /* PTA2 */
#define TRACE_SWO_PTA2 KINETIS_MUX('A',2,7) /* PTA2 */
#define JTAG_TDO_PTA2 KINETIS_MUX('A',2,7) /* PTA2 */
#define TSI0_CH4_PTA3 KINETIS_MUX('A',3,0) /* PTA3 */
#define PTA3 KINETIS_MUX('A',3,1) /* PTA3 */
#define UART0_RTS_b_PTA3 KINETIS_MUX('A',3,2) /* PTA3 */
#define FTM0_CH0_PTA3 KINETIS_MUX('A',3,3) /* PTA3 */
#define LPUART0_RTS_b_PTA3 KINETIS_MUX('A',3,5) /* PTA3 */
#define JTAG_TMS_PTA3 KINETIS_MUX('A',3,7) /* PTA3 */
#define TSI0_CH5_PTA4 KINETIS_MUX('A',4,0) /* PTA4 */
#define PTA4 KINETIS_MUX('A',4,1) /* PTA4 */
#define LLWU_P3_PTA4 KINETIS_MUX('A',4,1) /* PTA4 */
#define FTM0_CH1_PTA4 KINETIS_MUX('A',4,3) /* PTA4 */
#define NMI_b_PTA4 KINETIS_MUX('A',4,7) /* PTA4 */
#define PTA5 KINETIS_MUX('A',5,1) /* PTA5 */
#define USB0_CLKIN_PTA5 KINETIS_MUX('A',5,2) /* PTA5 */
#define FTM0_CH2_PTA5 KINETIS_MUX('A',5,3) /* PTA5 */
#define RMII0_RXER_PTA5 KINETIS_MUX('A',5,4) /* PTA5 */
#define MII0_RXER_PTA5 KINETIS_MUX('A',5,4) /* PTA5 */
#define CMP2_OUT_PTA5 KINETIS_MUX('A',5,5) /* PTA5 */
#define I2S0_TX_BCLK_PTA5 KINETIS_MUX('A',5,6) /* PTA5 */
#define JTAG_TRST_b_PTA5 KINETIS_MUX('A',5,7) /* PTA5 */
#define PTA6 KINETIS_MUX('A',6,1) /* PTA6 */
#define FTM0_CH3_PTA6 KINETIS_MUX('A',6,3) /* PTA6 */
#define CLKOUT_PTA6 KINETIS_MUX('A',6,5) /* PTA6 */
#define TRACE_CLKOUT_PTA6 KINETIS_MUX('A',6,7) /* PTA6 */
#define ADC0_SE10_PTA7 KINETIS_MUX('A',7,0) /* PTA7 */
#define PTA7 KINETIS_MUX('A',7,1) /* PTA7 */
#define FTM0_CH4_PTA7 KINETIS_MUX('A',7,3) /* PTA7 */
#define RMII0_MDIO_PTA7 KINETIS_MUX('A',7,5) /* PTA7 */
#define MII0_MDIO_PTA7 KINETIS_MUX('A',7,5) /* PTA7 */
#define TRACE_D3_PTA7 KINETIS_MUX('A',7,7) /* PTA7 */
#define ADC0_SE11_PTA8 KINETIS_MUX('A',8,0) /* PTA8 */
#define PTA8 KINETIS_MUX('A',8,1) /* PTA8 */
#define FTM1_CH0_PTA8 KINETIS_MUX('A',8,3) /* PTA8 */
#define RMII0_MDC_PTA8 KINETIS_MUX('A',8,5) /* PTA8 */
#define MII0_MDC_PTA8 KINETIS_MUX('A',8,5) /* PTA8 */
#define TPM1_CH0_PTA8 KINETIS_MUX('A',8,6) /* PTA8 */
#define FTM1_QD_PHA_PTA8 KINETIS_MUX('A',8,6) /* PTA8 */
#define TRACE_D2_PTA8 KINETIS_MUX('A',8,7) /* PTA8 */
#define PTA9 KINETIS_MUX('A',9,1) /* PTA9 */
#define FTM1_CH1_PTA9 KINETIS_MUX('A',9,3) /* PTA9 */
#define MII0_RXD3_PTA9 KINETIS_MUX('A',9,4) /* PTA9 */
#define TPM1_CH1_PTA9 KINETIS_MUX('A',9,6) /* PTA9 */
#define FTM1_QD_PHB_PTA9 KINETIS_MUX('A',9,6) /* PTA9 */
#define TRACE_D1_PTA9 KINETIS_MUX('A',9,7) /* PTA9 */
#define PTA10 KINETIS_MUX('A',10,1) /* PTA10 */
#define LLWU_P22_PTA10 KINETIS_MUX('A',10,1) /* PTA10 */
#define FTM2_CH0_PTA10 KINETIS_MUX('A',10,3) /* PTA10 */
#define MII0_RXD2_PTA10 KINETIS_MUX('A',10,4) /* PTA10 */
#define TPM2_CH0_PTA10 KINETIS_MUX('A',10,6) /* PTA10 */
#define FTM2_QD_PHA_PTA10 KINETIS_MUX('A',10,6) /* PTA10 */
#define TRACE_D0_PTA10 KINETIS_MUX('A',10,7) /* PTA10 */
#define PTA11 KINETIS_MUX('A',11,1) /* PTA11 */
#define LLWU_P23_PTA11 KINETIS_MUX('A',11,1) /* PTA11 */
#define FTM2_CH1_PTA11 KINETIS_MUX('A',11,3) /* PTA11 */
#define MII0_RXCLK_PTA11 KINETIS_MUX('A',11,4) /* PTA11 */
#define I2C2_SDA_PTA11 KINETIS_MUX('A',11,5) /* PTA11 */
#define FTM2_QD_PHB_PTA11 KINETIS_MUX('A',11,6) /* PTA11 */
#define TPM2_CH1_PTA11 KINETIS_MUX('A',11,6) /* PTA11 */
#define CMP2_IN0_PTA12 KINETIS_MUX('A',12,0) /* PTA12 */
#define PTA12 KINETIS_MUX('A',12,1) /* PTA12 */
#define CAN0_TX_PTA12 KINETIS_MUX('A',12,2) /* PTA12 */
#define FTM1_CH0_PTA12 KINETIS_MUX('A',12,3) /* PTA12 */
#define MII0_RXD1_PTA12 KINETIS_MUX('A',12,4) /* PTA12 */
#define RMII0_RXD1_PTA12 KINETIS_MUX('A',12,4) /* PTA12 */
#define I2C2_SCL_PTA12 KINETIS_MUX('A',12,5) /* PTA12 */
#define I2S0_TXD0_PTA12 KINETIS_MUX('A',12,6) /* PTA12 */
#define FTM1_QD_PHA_PTA12 KINETIS_MUX('A',12,7) /* PTA12 */
#define TPM1_CH0_PTA12 KINETIS_MUX('A',12,7) /* PTA12 */
#define CMP2_IN1_PTA13 KINETIS_MUX('A',13,0) /* PTA13 */
#define PTA13 KINETIS_MUX('A',13,1) /* PTA13 */
#define LLWU_P4_PTA13 KINETIS_MUX('A',13,1) /* PTA13 */
#define CAN0_RX_PTA13 KINETIS_MUX('A',13,2) /* PTA13 */
#define FTM1_CH1_PTA13 KINETIS_MUX('A',13,3) /* PTA13 */
#define RMII0_RXD0_PTA13 KINETIS_MUX('A',13,4) /* PTA13 */
#define MII0_RXD0_PTA13 KINETIS_MUX('A',13,4) /* PTA13 */
#define I2C2_SDA_PTA13 KINETIS_MUX('A',13,5) /* PTA13 */
#define I2S0_TX_FS_PTA13 KINETIS_MUX('A',13,6) /* PTA13 */
#define TPM1_CH1_PTA13 KINETIS_MUX('A',13,7) /* PTA13 */
#define FTM1_QD_PHB_PTA13 KINETIS_MUX('A',13,7) /* PTA13 */
#define PTA14 KINETIS_MUX('A',14,1) /* PTA14 */
#define SPI0_PCS0_PTA14 KINETIS_MUX('A',14,2) /* PTA14 */
#define UART0_TX_PTA14 KINETIS_MUX('A',14,3) /* PTA14 */
#define MII0_RXDV_PTA14 KINETIS_MUX('A',14,4) /* PTA14 */
#define RMII0_CRS_DV_PTA14 KINETIS_MUX('A',14,4) /* PTA14 */
#define I2C2_SCL_PTA14 KINETIS_MUX('A',14,5) /* PTA14 */
#define I2S0_RX_BCLK_PTA14 KINETIS_MUX('A',14,6) /* PTA14 */
#define I2S0_TXD1_PTA14 KINETIS_MUX('A',14,7) /* PTA14 */
#define CMP3_IN1_PTA15 KINETIS_MUX('A',15,0) /* PTA15 */
#define PTA15 KINETIS_MUX('A',15,1) /* PTA15 */
#define SPI0_SCK_PTA15 KINETIS_MUX('A',15,2) /* PTA15 */
#define UART0_RX_PTA15 KINETIS_MUX('A',15,3) /* PTA15 */
#define RMII0_TXEN_PTA15 KINETIS_MUX('A',15,4) /* PTA15 */
#define MII0_TXEN_PTA15 KINETIS_MUX('A',15,4) /* PTA15 */
#define I2S0_RXD0_PTA15 KINETIS_MUX('A',15,6) /* PTA15 */
#define CMP3_IN2_PTA16 KINETIS_MUX('A',16,0) /* PTA16 */
#define PTA16 KINETIS_MUX('A',16,1) /* PTA16 */
#define SPI0_SOUT_PTA16 KINETIS_MUX('A',16,2) /* PTA16 */
#define UART0_CTS_b_PTA16 KINETIS_MUX('A',16,3) /* PTA16 */
#define RMII0_TXD0_PTA16 KINETIS_MUX('A',16,4) /* PTA16 */
#define MII0_TXD0_PTA16 KINETIS_MUX('A',16,4) /* PTA16 */
#define I2S0_RX_FS_PTA16 KINETIS_MUX('A',16,6) /* PTA16 */
#define I2S0_RXD1_PTA16 KINETIS_MUX('A',16,7) /* PTA16 */
#define ADC1_SE17_PTA17 KINETIS_MUX('A',17,0) /* PTA17 */
#define PTA17 KINETIS_MUX('A',17,1) /* PTA17 */
#define SPI0_SIN_PTA17 KINETIS_MUX('A',17,2) /* PTA17 */
#define UART0_RTS_b_PTA17 KINETIS_MUX('A',17,3) /* PTA17 */
#define RMII0_TXD1_PTA17 KINETIS_MUX('A',17,4) /* PTA17 */
#define MII0_TXD1_PTA17 KINETIS_MUX('A',17,4) /* PTA17 */
#define I2S0_MCLK_PTA17 KINETIS_MUX('A',17,6) /* PTA17 */
#define EXTAL0_PTA18 KINETIS_MUX('A',18,0) /* PTA18 */
#define PTA18 KINETIS_MUX('A',18,1) /* PTA18 */
#define FTM0_FLT2_PTA18 KINETIS_MUX('A',18,3) /* PTA18 */
#define FTM_CLKIN0_PTA18 KINETIS_MUX('A',18,4) /* PTA18 */
#define TPM_CLKIN0_PTA18 KINETIS_MUX('A',18,7) /* PTA18 */
#define XTAL0_PTA19 KINETIS_MUX('A',19,0) /* PTA19 */
#define PTA19 KINETIS_MUX('A',19,1) /* PTA19 */
#define FTM1_FLT0_PTA19 KINETIS_MUX('A',19,3) /* PTA19 */
#define FTM_CLKIN1_PTA19 KINETIS_MUX('A',19,4) /* PTA19 */
#define LPTMR0_ALT1_PTA19 KINETIS_MUX('A',19,6) /* PTA19 */
#define TPM_CLKIN1_PTA19 KINETIS_MUX('A',19,7) /* PTA19 */
#define CMP3_IN4_PTA24 KINETIS_MUX('A',24,0) /* PTA24 */
#define PTA24 KINETIS_MUX('A',24,1) /* PTA24 */
#define MII0_TXD2_PTA24 KINETIS_MUX('A',24,4) /* PTA24 */
#define CMP3_IN5_PTA25 KINETIS_MUX('A',25,0) /* PTA25 */
#define PTA25 KINETIS_MUX('A',25,1) /* PTA25 */
#define MII0_TXCLK_PTA25 KINETIS_MUX('A',25,4) /* PTA25 */
#define PTA26 KINETIS_MUX('A',26,1) /* PTA26 */
#define MII0_TXD3_PTA26 KINETIS_MUX('A',26,4) /* PTA26 */
#define PTA27 KINETIS_MUX('A',27,1) /* PTA27 */
#define MII0_CRS_PTA27 KINETIS_MUX('A',27,4) /* PTA27 */
#define PTA28 KINETIS_MUX('A',28,1) /* PTA28 */
#define MII0_TXER_PTA28 KINETIS_MUX('A',28,4) /* PTA28 */
#define PTA29 KINETIS_MUX('A',29,1) /* PTA29 */
#define MII0_COL_PTA29 KINETIS_MUX('A',29,4) /* PTA29 */
#define ADC0_SE8_PTB0 KINETIS_MUX('B',0,0) /* PTB0 */
#define TSI0_CH0_PTB0 KINETIS_MUX('B',0,0) /* PTB0 */
#define ADC1_SE8_PTB0 KINETIS_MUX('B',0,0) /* PTB0 */
#define LLWU_P5_PTB0 KINETIS_MUX('B',0,1) /* PTB0 */
#define PTB0 KINETIS_MUX('B',0,1) /* PTB0 */
#define I2C0_SCL_PTB0 KINETIS_MUX('B',0,2) /* PTB0 */
#define FTM1_CH0_PTB0 KINETIS_MUX('B',0,3) /* PTB0 */
#define RMII0_MDIO_PTB0 KINETIS_MUX('B',0,4) /* PTB0 */
#define MII0_MDIO_PTB0 KINETIS_MUX('B',0,4) /* PTB0 */
#define SDRAM_CAS_b_PTB0 KINETIS_MUX('B',0,5) /* PTB0 */
#define TPM1_CH0_PTB0 KINETIS_MUX('B',0,6) /* PTB0 */
#define FTM1_QD_PHA_PTB0 KINETIS_MUX('B',0,6) /* PTB0 */
#define ADC0_SE9_PTB1 KINETIS_MUX('B',1,0) /* PTB1 */
#define ADC1_SE9_PTB1 KINETIS_MUX('B',1,0) /* PTB1 */
#define TSI0_CH6_PTB1 KINETIS_MUX('B',1,0) /* PTB1 */
#define PTB1 KINETIS_MUX('B',1,1) /* PTB1 */
#define I2C0_SDA_PTB1 KINETIS_MUX('B',1,2) /* PTB1 */
#define FTM1_CH1_PTB1 KINETIS_MUX('B',1,3) /* PTB1 */
#define MII0_MDC_PTB1 KINETIS_MUX('B',1,4) /* PTB1 */
#define RMII0_MDC_PTB1 KINETIS_MUX('B',1,4) /* PTB1 */
#define SDRAM_RAS_b_PTB1 KINETIS_MUX('B',1,5) /* PTB1 */
#define FTM1_QD_PHB_PTB1 KINETIS_MUX('B',1,6) /* PTB1 */
#define TPM1_CH1_PTB1 KINETIS_MUX('B',1,6) /* PTB1 */
#define TSI0_CH7_PTB2 KINETIS_MUX('B',2,0) /* PTB2 */
#define ADC0_SE12_PTB2 KINETIS_MUX('B',2,0) /* PTB2 */
#define PTB2 KINETIS_MUX('B',2,1) /* PTB2 */
#define I2C0_SCL_PTB2 KINETIS_MUX('B',2,2) /* PTB2 */
#define UART0_RTS_b_PTB2 KINETIS_MUX('B',2,3) /* PTB2 */
#define ENET0_1588_TMR0_PTB2 KINETIS_MUX('B',2,4) /* PTB2 */
#define SDRAM_WE_PTB2 KINETIS_MUX('B',2,5) /* PTB2 */
#define FTM0_FLT3_PTB2 KINETIS_MUX('B',2,6) /* PTB2 */
#define ADC0_SE13_PTB3 KINETIS_MUX('B',3,0) /* PTB3 */
#define TSI0_CH8_PTB3 KINETIS_MUX('B',3,0) /* PTB3 */
#define PTB3 KINETIS_MUX('B',3,1) /* PTB3 */
#define I2C0_SDA_PTB3 KINETIS_MUX('B',3,2) /* PTB3 */
#define UART0_CTS_b_PTB3 KINETIS_MUX('B',3,3) /* PTB3 */
#define ENET0_1588_TMR1_PTB3 KINETIS_MUX('B',3,4) /* PTB3 */
#define SDRAM_CS0_b_PTB3 KINETIS_MUX('B',3,5) /* PTB3 */
#define FTM0_FLT0_PTB3 KINETIS_MUX('B',3,6) /* PTB3 */
#define ADC1_SE10_PTB4 KINETIS_MUX('B',4,0) /* PTB4 */
#define PTB4 KINETIS_MUX('B',4,1) /* PTB4 */
#define ENET0_1588_TMR2_PTB4 KINETIS_MUX('B',4,4) /* PTB4 */
#define SDRAM_CS1_b_PTB4 KINETIS_MUX('B',4,5) /* PTB4 */
#define FTM1_FLT0_PTB4 KINETIS_MUX('B',4,6) /* PTB4 */
#define ADC1_SE11_PTB5 KINETIS_MUX('B',5,0) /* PTB5 */
#define PTB5 KINETIS_MUX('B',5,1) /* PTB5 */
#define ENET0_1588_TMR3_PTB5 KINETIS_MUX('B',5,4) /* PTB5 */
#define FTM2_FLT0_PTB5 KINETIS_MUX('B',5,6) /* PTB5 */
#define ADC1_SE12_PTB6 KINETIS_MUX('B',6,0) /* PTB6 */
#define PTB6 KINETIS_MUX('B',6,1) /* PTB6 */
#define SDRAM_D23_PTB6 KINETIS_MUX('B',6,5) /* PTB6 */
#define ADC1_SE13_PTB7 KINETIS_MUX('B',7,0) /* PTB7 */
#define PTB7 KINETIS_MUX('B',7,1) /* PTB7 */
#define SDRAM_D22_PTB7 KINETIS_MUX('B',7,5) /* PTB7 */
#define PTB8 KINETIS_MUX('B',8,1) /* PTB8 */
#define UART3_RTS_b_PTB8 KINETIS_MUX('B',8,3) /* PTB8 */
#define SDRAM_D21_PTB8 KINETIS_MUX('B',8,5) /* PTB8 */
#define PTB9 KINETIS_MUX('B',9,1) /* PTB9 */
#define SPI1_PCS1_PTB9 KINETIS_MUX('B',9,2) /* PTB9 */
#define UART3_CTS_b_PTB9 KINETIS_MUX('B',9,3) /* PTB9 */
#define SDRAM_D20_PTB9 KINETIS_MUX('B',9,5) /* PTB9 */
#define ADC1_SE14_PTB10 KINETIS_MUX('B',10,0) /* PTB10 */
#define PTB10 KINETIS_MUX('B',10,1) /* PTB10 */
#define SPI1_PCS0_PTB10 KINETIS_MUX('B',10,2) /* PTB10 */
#define UART3_RX_PTB10 KINETIS_MUX('B',10,3) /* PTB10 */
#define SDRAM_D19_PTB10 KINETIS_MUX('B',10,5) /* PTB10 */
#define FTM0_FLT1_PTB10 KINETIS_MUX('B',10,6) /* PTB10 */
#define ADC1_SE15_PTB11 KINETIS_MUX('B',11,0) /* PTB11 */
#define PTB11 KINETIS_MUX('B',11,1) /* PTB11 */
#define SPI1_SCK_PTB11 KINETIS_MUX('B',11,2) /* PTB11 */
#define UART3_TX_PTB11 KINETIS_MUX('B',11,3) /* PTB11 */
#define SDRAM_D18_PTB11 KINETIS_MUX('B',11,5) /* PTB11 */
#define FTM0_FLT2_PTB11 KINETIS_MUX('B',11,6) /* PTB11 */
#define TSI0_CH9_PTB16 KINETIS_MUX('B',16,0) /* PTB16 */
#define PTB16 KINETIS_MUX('B',16,1) /* PTB16 */
#define SPI1_SOUT_PTB16 KINETIS_MUX('B',16,2) /* PTB16 */
#define UART0_RX_PTB16 KINETIS_MUX('B',16,3) /* PTB16 */
#define FTM_CLKIN0_PTB16 KINETIS_MUX('B',16,4) /* PTB16 */
#define SDRAM_D17_PTB16 KINETIS_MUX('B',16,5) /* PTB16 */
#define EWM_IN_PTB16 KINETIS_MUX('B',16,6) /* PTB16 */
#define TPM_CLKIN0_PTB16 KINETIS_MUX('B',16,7) /* PTB16 */
#define TSI0_CH10_PTB17 KINETIS_MUX('B',17,0) /* PTB17 */
#define PTB17 KINETIS_MUX('B',17,1) /* PTB17 */
#define SPI1_SIN_PTB17 KINETIS_MUX('B',17,2) /* PTB17 */
#define UART0_TX_PTB17 KINETIS_MUX('B',17,3) /* PTB17 */
#define FTM_CLKIN1_PTB17 KINETIS_MUX('B',17,4) /* PTB17 */
#define SDRAM_D16_PTB17 KINETIS_MUX('B',17,5) /* PTB17 */
#define EWM_OUT_b_PTB17 KINETIS_MUX('B',17,6) /* PTB17 */
#define TPM_CLKIN1_PTB17 KINETIS_MUX('B',17,7) /* PTB17 */
#define TSI0_CH11_PTB18 KINETIS_MUX('B',18,0) /* PTB18 */
#define PTB18 KINETIS_MUX('B',18,1) /* PTB18 */
#define CAN0_TX_PTB18 KINETIS_MUX('B',18,2) /* PTB18 */
#define FTM2_CH0_PTB18 KINETIS_MUX('B',18,3) /* PTB18 */
#define I2S0_TX_BCLK_PTB18 KINETIS_MUX('B',18,4) /* PTB18 */
#define SDRAM_A23_PTB18 KINETIS_MUX('B',18,5) /* PTB18 */
#define FTM2_QD_PHA_PTB18 KINETIS_MUX('B',18,6) /* PTB18 */
#define TPM2_CH0_PTB18 KINETIS_MUX('B',18,6) /* PTB18 */
#define TSI0_CH12_PTB19 KINETIS_MUX('B',19,0) /* PTB19 */
#define PTB19 KINETIS_MUX('B',19,1) /* PTB19 */
#define CAN0_RX_PTB19 KINETIS_MUX('B',19,2) /* PTB19 */
#define FTM2_CH1_PTB19 KINETIS_MUX('B',19,3) /* PTB19 */
#define I2S0_TX_FS_PTB19 KINETIS_MUX('B',19,4) /* PTB19 */
#define TPM2_CH1_PTB19 KINETIS_MUX('B',19,6) /* PTB19 */
#define FTM2_QD_PHB_PTB19 KINETIS_MUX('B',19,6) /* PTB19 */
#define PTB20 KINETIS_MUX('B',20,1) /* PTB20 */
#define SPI2_PCS0_PTB20 KINETIS_MUX('B',20,2) /* PTB20 */
#define SDRAM_D31_PTB20 KINETIS_MUX('B',20,5) /* PTB20 */
#define CMP0_OUT_PTB20 KINETIS_MUX('B',20,6) /* PTB20 */
#define PTB21 KINETIS_MUX('B',21,1) /* PTB21 */
#define SPI2_SCK_PTB21 KINETIS_MUX('B',21,2) /* PTB21 */
#define SDRAM_D30_PTB21 KINETIS_MUX('B',21,5) /* PTB21 */
#define CMP1_OUT_PTB21 KINETIS_MUX('B',21,6) /* PTB21 */
#define PTB22 KINETIS_MUX('B',22,1) /* PTB22 */
#define SPI2_SOUT_PTB22 KINETIS_MUX('B',22,2) /* PTB22 */
#define SDRAM_D29_PTB22 KINETIS_MUX('B',22,5) /* PTB22 */
#define CMP2_OUT_PTB22 KINETIS_MUX('B',22,6) /* PTB22 */
#define PTB23 KINETIS_MUX('B',23,1) /* PTB23 */
#define SPI2_SIN_PTB23 KINETIS_MUX('B',23,2) /* PTB23 */
#define SPI0_PCS5_PTB23 KINETIS_MUX('B',23,3) /* PTB23 */
#define SDRAM_D28_PTB23 KINETIS_MUX('B',23,5) /* PTB23 */
#define CMP3_OUT_PTB23 KINETIS_MUX('B',23,6) /* PTB23 */
#define ADC0_SE14_PTC0 KINETIS_MUX('C',0,0) /* PTC0 */
#define TSI0_CH13_PTC0 KINETIS_MUX('C',0,0) /* PTC0 */
#define PTC0 KINETIS_MUX('C',0,1) /* PTC0 */
#define SPI0_PCS4_PTC0 KINETIS_MUX('C',0,2) /* PTC0 */
#define PDB0_EXTRG_PTC0 KINETIS_MUX('C',0,3) /* PTC0 */
#define USB0_SOF_OUT_PTC0 KINETIS_MUX('C',0,4) /* PTC0 */
#define SDRAM_A22_PTC0 KINETIS_MUX('C',0,5) /* PTC0 */
#define I2S0_TXD1_PTC0 KINETIS_MUX('C',0,6) /* PTC0 */
#define ADC0_SE15_PTC1 KINETIS_MUX('C',1,0) /* PTC1 */
#define TSI0_CH14_PTC1 KINETIS_MUX('C',1,0) /* PTC1 */
#define LLWU_P6_PTC1 KINETIS_MUX('C',1,1) /* PTC1 */
#define PTC1 KINETIS_MUX('C',1,1) /* PTC1 */
#define SPI0_PCS3_PTC1 KINETIS_MUX('C',1,2) /* PTC1 */
#define UART1_RTS_b_PTC1 KINETIS_MUX('C',1,3) /* PTC1 */
#define FTM0_CH0_PTC1 KINETIS_MUX('C',1,4) /* PTC1 */
#define SDRAM_A21_PTC1 KINETIS_MUX('C',1,5) /* PTC1 */
#define I2S0_TXD0_PTC1 KINETIS_MUX('C',1,6) /* PTC1 */
#define TSI0_CH15_PTC2 KINETIS_MUX('C',2,0) /* PTC2 */
#define ADC0_SE4b_PTC2 KINETIS_MUX('C',2,0) /* PTC2 */
#define CMP1_IN0_PTC2 KINETIS_MUX('C',2,0) /* PTC2 */
#define PTC2 KINETIS_MUX('C',2,1) /* PTC2 */
#define SPI0_PCS2_PTC2 KINETIS_MUX('C',2,2) /* PTC2 */
#define UART1_CTS_b_PTC2 KINETIS_MUX('C',2,3) /* PTC2 */
#define FTM0_CH1_PTC2 KINETIS_MUX('C',2,4) /* PTC2 */
#define SDRAM_A20_PTC2 KINETIS_MUX('C',2,5) /* PTC2 */
#define I2S0_TX_FS_PTC2 KINETIS_MUX('C',2,6) /* PTC2 */
#define CMP1_IN1_PTC3 KINETIS_MUX('C',3,0) /* PTC3 */
#define LLWU_P7_PTC3 KINETIS_MUX('C',3,1) /* PTC3 */
#define PTC3 KINETIS_MUX('C',3,1) /* PTC3 */
#define SPI0_PCS1_PTC3 KINETIS_MUX('C',3,2) /* PTC3 */
#define UART1_RX_PTC3 KINETIS_MUX('C',3,3) /* PTC3 */
#define FTM0_CH2_PTC3 KINETIS_MUX('C',3,4) /* PTC3 */
#define CLKOUT_PTC3 KINETIS_MUX('C',3,5) /* PTC3 */
#define I2S0_TX_BCLK_PTC3 KINETIS_MUX('C',3,6) /* PTC3 */
#define LLWU_P8_PTC4 KINETIS_MUX('C',4,1) /* PTC4 */
#define PTC4 KINETIS_MUX('C',4,1) /* PTC4 */
#define SPI0_PCS0_PTC4 KINETIS_MUX('C',4,2) /* PTC4 */
#define UART1_TX_PTC4 KINETIS_MUX('C',4,3) /* PTC4 */
#define FTM0_CH3_PTC4 KINETIS_MUX('C',4,4) /* PTC4 */
#define SDRAM_A19_PTC4 KINETIS_MUX('C',4,5) /* PTC4 */
#define CMP1_OUT_PTC4 KINETIS_MUX('C',4,6) /* PTC4 */
#define PTC5 KINETIS_MUX('C',5,1) /* PTC5 */
#define LLWU_P9_PTC5 KINETIS_MUX('C',5,1) /* PTC5 */
#define SPI0_SCK_PTC5 KINETIS_MUX('C',5,2) /* PTC5 */
#define LPTMR0_ALT2_PTC5 KINETIS_MUX('C',5,3) /* PTC5 */
#define I2S0_RXD0_PTC5 KINETIS_MUX('C',5,4) /* PTC5 */
#define SDRAM_A18_PTC5 KINETIS_MUX('C',5,5) /* PTC5 */
#define CMP0_OUT_PTC5 KINETIS_MUX('C',5,6) /* PTC5 */
#define FTM0_CH2_PTC5 KINETIS_MUX('C',5,7) /* PTC5 */
#define CMP0_IN0_PTC6 KINETIS_MUX('C',6,0) /* PTC6 */
#define LLWU_P10_PTC6 KINETIS_MUX('C',6,1) /* PTC6 */
#define PTC6 KINETIS_MUX('C',6,1) /* PTC6 */
#define SPI0_SOUT_PTC6 KINETIS_MUX('C',6,2) /* PTC6 */
#define PDB0_EXTRG_PTC6 KINETIS_MUX('C',6,3) /* PTC6 */
#define I2S0_RX_BCLK_PTC6 KINETIS_MUX('C',6,4) /* PTC6 */
#define SDRAM_A17_PTC6 KINETIS_MUX('C',6,5) /* PTC6 */
#define I2S0_MCLK_PTC6 KINETIS_MUX('C',6,6) /* PTC6 */
#define CMP0_IN1_PTC7 KINETIS_MUX('C',7,0) /* PTC7 */
#define PTC7 KINETIS_MUX('C',7,1) /* PTC7 */
#define SPI0_SIN_PTC7 KINETIS_MUX('C',7,2) /* PTC7 */
#define USB0_SOF_OUT_PTC7 KINETIS_MUX('C',7,3) /* PTC7 */
#define I2S0_RX_FS_PTC7 KINETIS_MUX('C',7,4) /* PTC7 */
#define SDRAM_A16_PTC7 KINETIS_MUX('C',7,5) /* PTC7 */
#define CMP0_IN2_PTC8 KINETIS_MUX('C',8,0) /* PTC8 */
#define ADC1_SE4b_PTC8 KINETIS_MUX('C',8,0) /* PTC8 */
#define PTC8 KINETIS_MUX('C',8,1) /* PTC8 */
#define FTM3_CH4_PTC8 KINETIS_MUX('C',8,3) /* PTC8 */
#define I2S0_MCLK_PTC8 KINETIS_MUX('C',8,4) /* PTC8 */
#define SDRAM_A15_PTC8 KINETIS_MUX('C',8,5) /* PTC8 */
#define ADC1_SE5b_PTC9 KINETIS_MUX('C',9,0) /* PTC9 */
#define CMP0_IN3_PTC9 KINETIS_MUX('C',9,0) /* PTC9 */
#define PTC9 KINETIS_MUX('C',9,1) /* PTC9 */
#define FTM3_CH5_PTC9 KINETIS_MUX('C',9,3) /* PTC9 */
#define I2S0_RX_BCLK_PTC9 KINETIS_MUX('C',9,4) /* PTC9 */
#define SDRAM_A14_PTC9 KINETIS_MUX('C',9,5) /* PTC9 */
#define FTM2_FLT0_PTC9 KINETIS_MUX('C',9,6) /* PTC9 */
#define ADC1_SE6b_PTC10 KINETIS_MUX('C',10,0) /* PTC10 */
#define PTC10 KINETIS_MUX('C',10,1) /* PTC10 */
#define I2C1_SCL_PTC10 KINETIS_MUX('C',10,2) /* PTC10 */
#define FTM3_CH6_PTC10 KINETIS_MUX('C',10,3) /* PTC10 */
#define I2S0_RX_FS_PTC10 KINETIS_MUX('C',10,4) /* PTC10 */
#define SDRAM_A13_PTC10 KINETIS_MUX('C',10,5) /* PTC10 */
#define ADC1_SE7b_PTC11 KINETIS_MUX('C',11,0) /* PTC11 */
#define LLWU_P11_PTC11 KINETIS_MUX('C',11,1) /* PTC11 */
#define PTC11 KINETIS_MUX('C',11,1) /* PTC11 */
#define I2C1_SDA_PTC11 KINETIS_MUX('C',11,2) /* PTC11 */
#define FTM3_CH7_PTC11 KINETIS_MUX('C',11,3) /* PTC11 */
#define I2S0_RXD1_PTC11 KINETIS_MUX('C',11,4) /* PTC11 */
#define PTC12 KINETIS_MUX('C',12,1) /* PTC12 */
#define UART4_RTS_b_PTC12 KINETIS_MUX('C',12,3) /* PTC12 */
#define FTM_CLKIN0_PTC12 KINETIS_MUX('C',12,4) /* PTC12 */
#define SDRAM_D27_PTC12 KINETIS_MUX('C',12,5) /* PTC12 */
#define FTM3_FLT0_PTC12 KINETIS_MUX('C',12,6) /* PTC12 */
#define TPM_CLKIN0_PTC12 KINETIS_MUX('C',12,7) /* PTC12 */
#define PTC13 KINETIS_MUX('C',13,1) /* PTC13 */
#define UART4_CTS_b_PTC13 KINETIS_MUX('C',13,3) /* PTC13 */
#define FTM_CLKIN1_PTC13 KINETIS_MUX('C',13,4) /* PTC13 */
#define SDRAM_D26_PTC13 KINETIS_MUX('C',13,5) /* PTC13 */
#define TPM_CLKIN1_PTC13 KINETIS_MUX('C',13,7) /* PTC13 */
#define PTC14 KINETIS_MUX('C',14,1) /* PTC14 */
#define UART4_RX_PTC14 KINETIS_MUX('C',14,3) /* PTC14 */
#define SDRAM_D25_PTC14 KINETIS_MUX('C',14,5) /* PTC14 */
#define PTC15 KINETIS_MUX('C',15,1) /* PTC15 */
#define UART4_TX_PTC15 KINETIS_MUX('C',15,3) /* PTC15 */
#define SDRAM_D24_PTC15 KINETIS_MUX('C',15,5) /* PTC15 */
#define PTC16 KINETIS_MUX('C',16,1) /* PTC16 */
#define CAN1_RX_PTC16 KINETIS_MUX('C',16,2) /* PTC16 */
#define UART3_RX_PTC16 KINETIS_MUX('C',16,3) /* PTC16 */
#define ENET0_1588_TMR0_PTC16 KINETIS_MUX('C',16,4) /* PTC16 */
#define SDRAM_DQM2_PTC16 KINETIS_MUX('C',16,5) /* PTC16 */
#define PTC17 KINETIS_MUX('C',17,1) /* PTC17 */
#define CAN1_TX_PTC17 KINETIS_MUX('C',17,2) /* PTC17 */
#define UART3_TX_PTC17 KINETIS_MUX('C',17,3) /* PTC17 */
#define ENET0_1588_TMR1_PTC17 KINETIS_MUX('C',17,4) /* PTC17 */
#define SDRAM_DQM3_PTC17 KINETIS_MUX('C',17,5) /* PTC17 */
#define PTC18 KINETIS_MUX('C',18,1) /* PTC18 */
#define UART3_RTS_b_PTC18 KINETIS_MUX('C',18,3) /* PTC18 */
#define ENET0_1588_TMR2_PTC18 KINETIS_MUX('C',18,4) /* PTC18 */
#define SDRAM_DQM1_PTC18 KINETIS_MUX('C',18,5) /* PTC18 */
#define PTC19 KINETIS_MUX('C',19,1) /* PTC19 */
#define UART3_CTS_b_PTC19 KINETIS_MUX('C',19,3) /* PTC19 */
#define ENET0_1588_TMR3_PTC19 KINETIS_MUX('C',19,4) /* PTC19 */
#define SDRAM_DQM0_PTC19 KINETIS_MUX('C',19,5) /* PTC19 */
#define LLWU_P12_PTD0 KINETIS_MUX('D',0,1) /* PTD0 */
#define PTD0 KINETIS_MUX('D',0,1) /* PTD0 */
#define SPI0_PCS0_PTD0 KINETIS_MUX('D',0,2) /* PTD0 */
#define UART2_RTS_b_PTD0 KINETIS_MUX('D',0,3) /* PTD0 */
#define FTM3_CH0_PTD0 KINETIS_MUX('D',0,4) /* PTD0 */
#define ADC0_SE5b_PTD1 KINETIS_MUX('D',1,0) /* PTD1 */
#define PTD1 KINETIS_MUX('D',1,1) /* PTD1 */
#define SPI0_SCK_PTD1 KINETIS_MUX('D',1,2) /* PTD1 */
#define UART2_CTS_b_PTD1 KINETIS_MUX('D',1,3) /* PTD1 */
#define FTM3_CH1_PTD1 KINETIS_MUX('D',1,4) /* PTD1 */
#define PTD2 KINETIS_MUX('D',2,1) /* PTD2 */
#define LLWU_P13_PTD2 KINETIS_MUX('D',2,1) /* PTD2 */
#define SPI0_SOUT_PTD2 KINETIS_MUX('D',2,2) /* PTD2 */
#define UART2_RX_PTD2 KINETIS_MUX('D',2,3) /* PTD2 */
#define FTM3_CH2_PTD2 KINETIS_MUX('D',2,4) /* PTD2 */
#define SDRAM_A12_PTD2 KINETIS_MUX('D',2,5) /* PTD2 */
#define I2C0_SCL_PTD2 KINETIS_MUX('D',2,7) /* PTD2 */
#define PTD3 KINETIS_MUX('D',3,1) /* PTD3 */
#define SPI0_SIN_PTD3 KINETIS_MUX('D',3,2) /* PTD3 */
#define UART2_TX_PTD3 KINETIS_MUX('D',3,3) /* PTD3 */
#define FTM3_CH3_PTD3 KINETIS_MUX('D',3,4) /* PTD3 */
#define SDRAM_A11_PTD3 KINETIS_MUX('D',3,5) /* PTD3 */
#define I2C0_SDA_PTD3 KINETIS_MUX('D',3,7) /* PTD3 */
#define PTD4 KINETIS_MUX('D',4,1) /* PTD4 */
#define LLWU_P14_PTD4 KINETIS_MUX('D',4,1) /* PTD4 */
#define SPI0_PCS1_PTD4 KINETIS_MUX('D',4,2) /* PTD4 */
#define UART0_RTS_b_PTD4 KINETIS_MUX('D',4,3) /* PTD4 */
#define FTM0_CH4_PTD4 KINETIS_MUX('D',4,4) /* PTD4 */
#define SDRAM_A10_PTD4 KINETIS_MUX('D',4,5) /* PTD4 */
#define EWM_IN_PTD4 KINETIS_MUX('D',4,6) /* PTD4 */
#define SPI1_PCS0_PTD4 KINETIS_MUX('D',4,7) /* PTD4 */
#define ADC0_SE6b_PTD5 KINETIS_MUX('D',5,0) /* PTD5 */
#define PTD5 KINETIS_MUX('D',5,1) /* PTD5 */
#define SPI0_PCS2_PTD5 KINETIS_MUX('D',5,2) /* PTD5 */
#define UART0_CTS_b_PTD5 KINETIS_MUX('D',5,3) /* PTD5 */
#define FTM0_CH5_PTD5 KINETIS_MUX('D',5,4) /* PTD5 */
#define SDRAM_A9_PTD5 KINETIS_MUX('D',5,5) /* PTD5 */
#define EWM_OUT_b_PTD5 KINETIS_MUX('D',5,6) /* PTD5 */
#define SPI1_SCK_PTD5 KINETIS_MUX('D',5,7) /* PTD5 */
#define ADC0_SE7b_PTD6 KINETIS_MUX('D',6,0) /* PTD6 */
#define PTD6 KINETIS_MUX('D',6,1) /* PTD6 */
#define LLWU_P15_PTD6 KINETIS_MUX('D',6,1) /* PTD6 */
#define SPI0_PCS3_PTD6 KINETIS_MUX('D',6,2) /* PTD6 */
#define UART0_RX_PTD6 KINETIS_MUX('D',6,3) /* PTD6 */
#define FTM0_CH6_PTD6 KINETIS_MUX('D',6,4) /* PTD6 */
#define FTM0_FLT0_PTD6 KINETIS_MUX('D',6,6) /* PTD6 */
#define SPI1_SOUT_PTD6 KINETIS_MUX('D',6,7) /* PTD6 */
#define PTD7 KINETIS_MUX('D',7,1) /* PTD7 */
#define CMT_IRO_PTD7 KINETIS_MUX('D',7,2) /* PTD7 */
#define UART0_TX_PTD7 KINETIS_MUX('D',7,3) /* PTD7 */
#define FTM0_CH7_PTD7 KINETIS_MUX('D',7,4) /* PTD7 */
#define SDRAM_CKE_PTD7 KINETIS_MUX('D',7,5) /* PTD7 */
#define FTM0_FLT1_PTD7 KINETIS_MUX('D',7,6) /* PTD7 */
#define SPI1_SIN_PTD7 KINETIS_MUX('D',7,7) /* PTD7 */
#define LLWU_P24_PTD8 KINETIS_MUX('D',8,1) /* PTD8 */
#define PTD8 KINETIS_MUX('D',8,1) /* PTD8 */
#define I2C0_SCL_PTD8 KINETIS_MUX('D',8,2) /* PTD8 */
#define LPUART0_RX_PTD8 KINETIS_MUX('D',8,5) /* PTD8 */
#define PTD9 KINETIS_MUX('D',9,1) /* PTD9 */
#define I2C0_SDA_PTD9 KINETIS_MUX('D',9,2) /* PTD9 */
#define LPUART0_TX_PTD9 KINETIS_MUX('D',9,5) /* PTD9 */
#define PTD10 KINETIS_MUX('D',10,1) /* PTD10 */
#define LPUART0_RTS_b_PTD10 KINETIS_MUX('D',10,5) /* PTD10 */
#define LLWU_P25_PTD11 KINETIS_MUX('D',11,1) /* PTD11 */
#define PTD11 KINETIS_MUX('D',11,1) /* PTD11 */
#define SPI2_PCS0_PTD11 KINETIS_MUX('D',11,2) /* PTD11 */
#define SDHC0_CLKIN_PTD11 KINETIS_MUX('D',11,4) /* PTD11 */
#define LPUART0_CTS_b_PTD11 KINETIS_MUX('D',11,5) /* PTD11 */
#define PTD12 KINETIS_MUX('D',12,1) /* PTD12 */
#define SPI2_SCK_PTD12 KINETIS_MUX('D',12,2) /* PTD12 */
#define FTM3_FLT0_PTD12 KINETIS_MUX('D',12,3) /* PTD12 */
#define SDHC0_D4_PTD12 KINETIS_MUX('D',12,4) /* PTD12 */
#define PTD13 KINETIS_MUX('D',13,1) /* PTD13 */
#define SPI2_SOUT_PTD13 KINETIS_MUX('D',13,2) /* PTD13 */
#define SDHC0_D5_PTD13 KINETIS_MUX('D',13,4) /* PTD13 */
#define PTD14 KINETIS_MUX('D',14,1) /* PTD14 */
#define SPI2_SIN_PTD14 KINETIS_MUX('D',14,2) /* PTD14 */
#define SDHC0_D6_PTD14 KINETIS_MUX('D',14,4) /* PTD14 */
#define PTD15 KINETIS_MUX('D',15,1) /* PTD15 */
#define SPI2_PCS1_PTD15 KINETIS_MUX('D',15,2) /* PTD15 */
#define SDHC0_D7_PTD15 KINETIS_MUX('D',15,4) /* PTD15 */
#define ADC1_SE4a_PTE0 KINETIS_MUX('E',0,0) /* PTE0 */
#define PTE0 KINETIS_MUX('E',0,1) /* PTE0 */
#define SPI1_PCS1_PTE0 KINETIS_MUX('E',0,2) /* PTE0 */
#define UART1_TX_PTE0 KINETIS_MUX('E',0,3) /* PTE0 */
#define SDHC0_D1_PTE0 KINETIS_MUX('E',0,4) /* PTE0 */
#define TRACE_CLKOUT_PTE0 KINETIS_MUX('E',0,5) /* PTE0 */
#define I2C1_SDA_PTE0 KINETIS_MUX('E',0,6) /* PTE0 */
#define RTC_CLKOUT_PTE0 KINETIS_MUX('E',0,7) /* PTE0 */
#define ADC1_SE5a_PTE1 KINETIS_MUX('E',1,0) /* PTE1 */
#define PTE1 KINETIS_MUX('E',1,1) /* PTE1 */
#define LLWU_P0_PTE1 KINETIS_MUX('E',1,1) /* PTE1 */
#define SPI1_SOUT_PTE1 KINETIS_MUX('E',1,2) /* PTE1 */
#define UART1_RX_PTE1 KINETIS_MUX('E',1,3) /* PTE1 */
#define SDHC0_D0_PTE1 KINETIS_MUX('E',1,4) /* PTE1 */
#define TRACE_D3_PTE1 KINETIS_MUX('E',1,5) /* PTE1 */
#define I2C1_SCL_PTE1 KINETIS_MUX('E',1,6) /* PTE1 */
#define SPI1_SIN_PTE1 KINETIS_MUX('E',1,7) /* PTE1 */
#define ADC1_SE6a_PTE2 KINETIS_MUX('E',2,0) /* PTE2 */
#define PTE2 KINETIS_MUX('E',2,1) /* PTE2 */
#define LLWU_P1_PTE2 KINETIS_MUX('E',2,1) /* PTE2 */
#define SPI1_SCK_PTE2 KINETIS_MUX('E',2,2) /* PTE2 */
#define UART1_CTS_b_PTE2 KINETIS_MUX('E',2,3) /* PTE2 */
#define SDHC0_DCLK_PTE2 KINETIS_MUX('E',2,4) /* PTE2 */
#define TRACE_D2_PTE2 KINETIS_MUX('E',2,5) /* PTE2 */
#define ADC1_SE7a_PTE3 KINETIS_MUX('E',3,0) /* PTE3 */
#define PTE3 KINETIS_MUX('E',3,1) /* PTE3 */
#define SPI1_SIN_PTE3 KINETIS_MUX('E',3,2) /* PTE3 */
#define UART1_RTS_b_PTE3 KINETIS_MUX('E',3,3) /* PTE3 */
#define SDHC0_CMD_PTE3 KINETIS_MUX('E',3,4) /* PTE3 */
#define TRACE_D1_PTE3 KINETIS_MUX('E',3,5) /* PTE3 */
#define SPI1_SOUT_PTE3 KINETIS_MUX('E',3,7) /* PTE3 */
#define PTE4 KINETIS_MUX('E',4,1) /* PTE4 */
#define LLWU_P2_PTE4 KINETIS_MUX('E',4,1) /* PTE4 */
#define SPI1_PCS0_PTE4 KINETIS_MUX('E',4,2) /* PTE4 */
#define UART3_TX_PTE4 KINETIS_MUX('E',4,3) /* PTE4 */
#define SDHC0_D3_PTE4 KINETIS_MUX('E',4,4) /* PTE4 */
#define TRACE_D0_PTE4 KINETIS_MUX('E',4,5) /* PTE4 */
#define PTE5 KINETIS_MUX('E',5,1) /* PTE5 */
#define SPI1_PCS2_PTE5 KINETIS_MUX('E',5,2) /* PTE5 */
#define UART3_RX_PTE5 KINETIS_MUX('E',5,3) /* PTE5 */
#define SDHC0_D2_PTE5 KINETIS_MUX('E',5,4) /* PTE5 */
#define FTM3_CH0_PTE5 KINETIS_MUX('E',5,6) /* PTE5 */
#define LLWU_P16_PTE6 KINETIS_MUX('E',6,1) /* PTE6 */
#define PTE6 KINETIS_MUX('E',6,1) /* PTE6 */
#define SPI1_PCS3_PTE6 KINETIS_MUX('E',6,2) /* PTE6 */
#define UART3_CTS_b_PTE6 KINETIS_MUX('E',6,3) /* PTE6 */
#define I2S0_MCLK_PTE6 KINETIS_MUX('E',6,4) /* PTE6 */
#define FTM3_CH1_PTE6 KINETIS_MUX('E',6,6) /* PTE6 */
#define USB0_SOF_OUT_PTE6 KINETIS_MUX('E',6,7) /* PTE6 */
#define PTE7 KINETIS_MUX('E',7,1) /* PTE7 */
#define UART3_RTS_b_PTE7 KINETIS_MUX('E',7,3) /* PTE7 */
#define I2S0_RXD0_PTE7 KINETIS_MUX('E',7,4) /* PTE7 */
#define FTM3_CH2_PTE7 KINETIS_MUX('E',7,6) /* PTE7 */
#define PTE8 KINETIS_MUX('E',8,1) /* PTE8 */
#define I2S0_RXD1_PTE8 KINETIS_MUX('E',8,2) /* PTE8 */
#define I2S0_RX_FS_PTE8 KINETIS_MUX('E',8,4) /* PTE8 */
#define LPUART0_TX_PTE8 KINETIS_MUX('E',8,5) /* PTE8 */
#define FTM3_CH3_PTE8 KINETIS_MUX('E',8,6) /* PTE8 */
#define PTE9 KINETIS_MUX('E',9,1) /* PTE9 */
#define LLWU_P17_PTE9 KINETIS_MUX('E',9,1) /* PTE9 */
#define I2S0_TXD1_PTE9 KINETIS_MUX('E',9,2) /* PTE9 */
#define I2S0_RX_BCLK_PTE9 KINETIS_MUX('E',9,4) /* PTE9 */
#define LPUART0_RX_PTE9 KINETIS_MUX('E',9,5) /* PTE9 */
#define FTM3_CH4_PTE9 KINETIS_MUX('E',9,6) /* PTE9 */
#define LLWU_P18_PTE10 KINETIS_MUX('E',10,1) /* PTE10 */
#define PTE10 KINETIS_MUX('E',10,1) /* PTE10 */
#define I2C3_SDA_PTE10 KINETIS_MUX('E',10,2) /* PTE10 */
#define I2S0_TXD0_PTE10 KINETIS_MUX('E',10,4) /* PTE10 */
#define LPUART0_CTS_b_PTE10 KINETIS_MUX('E',10,5) /* PTE10 */
#define FTM3_CH5_PTE10 KINETIS_MUX('E',10,6) /* PTE10 */
#define USB1_ID_PTE10 KINETIS_MUX('E',10,7) /* PTE10 */
#define PTE11 KINETIS_MUX('E',11,1) /* PTE11 */
#define I2C3_SCL_PTE11 KINETIS_MUX('E',11,2) /* PTE11 */
#define I2S0_TX_FS_PTE11 KINETIS_MUX('E',11,4) /* PTE11 */
#define LPUART0_RTS_b_PTE11 KINETIS_MUX('E',11,5) /* PTE11 */
#define FTM3_CH6_PTE11 KINETIS_MUX('E',11,6) /* PTE11 */
#define PTE12 KINETIS_MUX('E',12,1) /* PTE12 */
#define I2S0_TX_BCLK_PTE12 KINETIS_MUX('E',12,4) /* PTE12 */
#define FTM3_CH7_PTE12 KINETIS_MUX('E',12,6) /* PTE12 */
#define ADC0_SE17_PTE24 KINETIS_MUX('E',24,0) /* PTE24 */
#define PTE24 KINETIS_MUX('E',24,1) /* PTE24 */
#define CAN1_TX_PTE24 KINETIS_MUX('E',24,2) /* PTE24 */
#define UART4_TX_PTE24 KINETIS_MUX('E',24,3) /* PTE24 */
#define I2C0_SCL_PTE24 KINETIS_MUX('E',24,5) /* PTE24 */
#define EWM_OUT_b_PTE24 KINETIS_MUX('E',24,6) /* PTE24 */
#define ADC0_SE18_PTE25 KINETIS_MUX('E',25,0) /* PTE25 */
#define PTE25 KINETIS_MUX('E',25,1) /* PTE25 */
#define LLWU_P21_PTE25 KINETIS_MUX('E',25,1) /* PTE25 */
#define CAN1_RX_PTE25 KINETIS_MUX('E',25,2) /* PTE25 */
#define UART4_RX_PTE25 KINETIS_MUX('E',25,3) /* PTE25 */
#define I2C0_SDA_PTE25 KINETIS_MUX('E',25,5) /* PTE25 */
#define EWM_IN_PTE25 KINETIS_MUX('E',25,6) /* PTE25 */
#define PTE26 KINETIS_MUX('E',26,1) /* PTE26 */
#define ENET_1588_CLKIN_PTE26 KINETIS_MUX('E',26,2) /* PTE26 */
#define UART4_CTS_b_PTE26 KINETIS_MUX('E',26,3) /* PTE26 */
#define RTC_CLKOUT_PTE26 KINETIS_MUX('E',26,6) /* PTE26 */
#define USB0_CLKIN_PTE26 KINETIS_MUX('E',26,7) /* PTE26 */
#define PTE27 KINETIS_MUX('E',27,1) /* PTE27 */
#define UART4_RTS_b_PTE27 KINETIS_MUX('E',27,3) /* PTE27 */
#define PTE28 KINETIS_MUX('E',28,1) /* PTE28 */
#endif
