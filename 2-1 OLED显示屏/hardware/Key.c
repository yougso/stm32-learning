#include "stm32f10x.h"                  // Device header
#include "delay.h"

void Key_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	GPIO_InitTypeDef GPIO_Inittypestructer;
	GPIO_Inittypestructer.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Inittypestructer.GPIO_Pin = GPIO_Pin_1 |GPIO_Pin_11;
	GPIO_Inittypestructer.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_Inittypestructer);
}

uint8_t Key_Num(void)
{
	uint8_t key=0;
	if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_1)==0)
	{
		Delay_ms(200);
		while(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_1)==0);
		Delay_ms(200);
		key=1;
	}
	if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_11)==0)
	{
		Delay_ms(200);
		while(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_11)==0);
		Delay_ms(200);
		key=2;
	}
}
