#include "led.h"
#include "stm32l0xx_hal.h"

void Led_Write()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
}

