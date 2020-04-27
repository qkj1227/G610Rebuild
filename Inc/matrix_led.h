﻿/**
  ******************************************************************************
  * @file    matrix_led.h
  * @author  MCD Application Team
  * @brief   Header file for the matrix_led.c file, driver of STLED524,
  *  		 a 5x24 dot matrix LED display driver.
  ******************************************************************************

  *
  * the matrix LED display driver
  *
  ******************************************************************************
  */


  /* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MATRIX_LED_H
#define __MATRIX_LED_H

#ifdef __cplusplus
extern "C" {
#endif

	/* Includes ------------------------------------------------------------------*/
#include  "main.h"


#define SPI_TIMEOUT_PA 2

#define ST524_ADDR_SWCTL 0x00
#define ST524_ADDR_DSP_CTL 0x01
#define ST524_ADDR_CLK 0x10
#define ST524_ADDR_COL_CTL1 0x11
#define ST524_ADDR_COL_CTL2 0x12
#define ST524_ADDR_COL_CTL 0x13
#define ST524_ADDR_ROW_CTL 0x14
#define ST524_ADDR_BLANKING_TIME 0x15
#define ST524_ADDR_BOOST_CTL 0x16
#define ST524_ADDR_DSP_VISUAL 0x20
#define ST524_ADDR_PWM_CTL 0x21
#define ST524_ADDR_SCROLL_CTL1 0x30
#define ST524_ADDR_SCROLL_CTL2 0x31
#define ST524_ADDR_SCROLL_CTL3 0x32
#define ST524_ADDR_INTERNET_EN 0x40


#define ST524_CMD_WRITE_CTL_REG 0x00
#define ST524_CMD_WRITE_P1_REG 0x02
#define ST524_CMD_WRITE_P2_REG 0x04
#define ST524_CMD_READ_CTL_REG 0x01
#define ST524_CMD_READ_P1_REG 0x03
#define ST524_CMD_READ_P2_REG 0x05

#define PATTERN_SIZE 0xEF

	enum BRIGHTNESS_VALS
	{
		BL_VAL_0 = 0,
		BL_VAL_1 = 35,
		BL_VAL_2 = 100,
		BL_VAL_3 = 180,
		BL_VAL_4 = 255,
	};

	static uint16_t len = 0;
	static uint8_t  matrixBuff[PATTERN_SIZE] = { 0 };
	extern uint8_t backlight;

	extern SPI_HandleTypeDef hspi2;

	extern void WriteEEPROM(uint32_t addr, uint32_t val);


	void MatrixInit(void);

	void MatrixSetBrightness(uint8_t val);

	void MatrixOn(void);

	void MatrixBrightnessChange(void);


#ifdef __cplusplus
}
#endif

#endif  /* __MATRIX_LED_H */
/**
  * @}
  */

  /**
	* @}
	*/
