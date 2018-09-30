#include "led.h"
#include "stm32l0xx_hal.h"

void led_write()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
}

