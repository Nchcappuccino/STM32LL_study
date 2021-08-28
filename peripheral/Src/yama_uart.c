#include "yama_uart.h"

void transmitUSART2Byte(uint8_t buff){
    LL_USART_TransmitData8(USART2, buff);
    while(LL_USART_IsActiveFlag_TXE(USART2) == 0);
}

void transmitUSART2Char(char* buff){
    for(int i = 0; i < strlen(buff); i++)
    LL_USART_TransmitData8(USART2, buff[i]);
    while(LL_USART_IsActiveFlag_TXE(USART2) == 0){}
}