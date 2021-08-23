#include "yama_gpio.h"

void writeOnBoardLED(uint8_t state){
    if(state == 1)
        LL_GPIO_SetOutputPin(OnBoardLED_GPIO_Port, OnBoardLED_Pin);
    else
        LL_GPIO_ResetOutputPin(OnBoardLED_GPIO_Port, OnBoardLED_Pin);
}

void writeLED1(uint8_t state){
    if(state == 1)
        LL_GPIO_SetOutputPin(LED1_GPIO_Port, LED1_Pin);
    else
        LL_GPIO_ResetOutputPin(LED1_GPIO_Port, LED1_Pin);
}

void writeLED2(uint8_t state){
    if(state == 1)
        LL_GPIO_SetOutputPin(LED2_GPIO_Port, LED2_Pin);
    else
        LL_GPIO_ResetOutputPin(LED2_GPIO_Port, LED2_Pin);
}

uint32_t readSW(void){
    return LL_GPIO_IsInputPinSet(SW_GPIO_Port, SW_Pin);
}