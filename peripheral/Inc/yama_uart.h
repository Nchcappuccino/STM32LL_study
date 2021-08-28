/**
 * @file yama_uart.h
 * @author Yamaguchi Yudai
 * @brief uart(usart)関係
 * @date 2021-08-29
 */

#ifndef YAMA_UART_H_
#define YAMA_UART_H_

#include <stdint.h>
#include <string.h>
#include "main.h"
#include "usart.h"

void transmitUSART2Byte(uint8_t buff);
void transmitUSART2Char(char* buff);
#endif /*YAMA_UART_H_*/