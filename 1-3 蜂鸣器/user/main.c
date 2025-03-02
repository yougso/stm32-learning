#include "stm32f10x.h"                  // Device header
#include "delay.h"
int main(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitTypeDef GPIO_InitStructer;
	GPIO_InitStructer.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructer.GPIO_Pin = GPIO_Pin_9;
	GPIO_InitStructer.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructer);
	while(1)
	{
		GPIO_WriteBit(GPIOA,GPIO_Pin_9,Bit_SET);
		Delay_ms(100);
		GPIO_WriteBit(GPIOA,GPIO_Pin_9,Bit_RESET);
		Delay_ms(100);
	}
}
