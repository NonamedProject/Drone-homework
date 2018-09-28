#include "manage_led.h"
#include "main.h"
#include "stm32l0xx_hal.h"

void Manage_LED(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState){
	if (PinState == 1){
		HAL_GPIO_WritePin(GPIOx, GPIO_Pin, 1);
	}
	else{
		HAL_GPIO_WritePin(GPIOx, GPIO_Pin, 0);
	}
}



