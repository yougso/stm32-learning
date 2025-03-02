#include "stm32f10x.h"                  // Device header
#include "delay.h"

void light_init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	GPIO_InitTypeDef GPIO_Initstructer;
	GPIO_Initstructer.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Initstructer.GPIO_Pin = GPIO_Pin_13;
	GPIO_Initstructer.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_Initstructer);
}

uint8_t lightnum(void)
{
	uint8_t num = 0;
	if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_13)==0)
		return 0;
	else
		return 1;
}
