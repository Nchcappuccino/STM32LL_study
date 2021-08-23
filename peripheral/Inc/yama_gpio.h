/**
 * @file yama_gpio.h
 * @author Yamaguchi Yudai
 * @brief GPIO関係
 * @date 2021-08-23
 */

#ifndef YAMA_GPIO_H_
#define YAMA_GPIO_H_

#include <stdint.h>
#include "gpio.h"
#include "main.h"


void writeOnBoardLED(uint8_t state);
void writeLED1(uint8_t state);
void writeLED2(uint8_t state);
uint32_t readSW(void);

#endif /*YAMA_GPIO_H_*/