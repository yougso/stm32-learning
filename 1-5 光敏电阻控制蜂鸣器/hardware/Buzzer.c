#include "stm32f10x.h"                  // Device header
#include "delay.h"

void Buzzer_init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	GPIO_InitTypeDef GPIO_Initstructer;
	GPIO_Initstructer.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Initstructer.GPIO_Pin = GPIO_Pin_12;
	GPIO_Initstructer.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_Initstructer);
}

void Buzzer_turn(void)
{
	if(GPIO_ReadOutputDataBit(GPIOB,GPIO_Pin_12)==0)
		GPIO_SetBits(GPIOB,GPIO_Pin_12);
	else
		GPIO_ResetBits(GPIOB,GPIO_Pin_12);
}
void Budder_off(void)
{
	GPIO_WriteBit(GPIOB,GPIO_Pin_12,Bit_SET);
}
void Budder_open(void)
{
	GPIO_WriteBit(GPIOB,GPIO_Pin_12,Bit_RESET);
}
