#include "stm32f10x.h"                  // Device header
#include "delay.h"

void LED_INIT(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitTypeDef GPIO_Inittypestructer;
	GPIO_Inittypestructer.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Inittypestructer.GPIO_Pin = GPIO_Pin_1 |GPIO_Pin_2;
	GPIO_Inittypestructer.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_Inittypestructer);
}

void LED1_OPEN(void)
{
	GPIO_SetBits(GPIOA,GPIO_Pin_1);
}


void LED2_OPEN(void)
{
	GPIO_SetBits(GPIOA,GPIO_Pin_2);
}


void LED1_OFF(void)
{
	GPIO_ResetBits(GPIOA,GPIO_Pin_1);
}


void LED2_OFF(void)
{
	GPIO_ResetBits(GPIOA,GPIO_Pin_2);
}


void LED1_TURN(void)
{
	if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_1)==0)
		GPIO_SetBits(GPIOA,GPIO_Pin_1);
	else
		GPIO_ResetBits(GPIOA,GPIO_Pin_1);
}


void LED2_TURN(void)
{
	if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_2)==0)
		GPIO_SetBits(GPIOA,GPIO_Pin_2);
	else
		GPIO_ResetBits(GPIOA,GPIO_Pin_2);
}
