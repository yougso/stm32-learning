#include "stm32f10x.h"                  // Device header
#include "delay.h"
void LED_init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitTypeDef GPIO_Initstructer;
	GPIO_Initstructer.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Initstructer.GPIO_Pin = GPIO_Pin_1|GPIO_Pin_2;
	GPIO_Initstructer.GPIO_Speed =GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_Initstructer);
}

void LED1_off(void)
{
	GPIO_WriteBit(GPIOA,GPIO_Pin_1,Bit_RESET);
}
void LED2_off(void)
{
	GPIO_WriteBit(GPIOA,GPIO_Pin_2,Bit_RESET);
}
void LED1_open(void)
{
	GPIO_WriteBit(GPIOA,GPIO_Pin_1,Bit_SET);
}
void LED2_open(void)
{
	GPIO_WriteBit(GPIOA,GPIO_Pin_2,Bit_SET);
}
void LED1_turn(void)
{
	if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_1)==0)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_1);
	}
	else
		GPIO_ResetBits(GPIOA,GPIO_Pin_1);
}
void LED2_turn(void)
{
	if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_2)==0)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_2);
	}
	else
		GPIO_ResetBits(GPIOA,GPIO_Pin_2);
}
