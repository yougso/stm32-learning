#include "stm32f10x.h"    
#include "delay.h"
#include "LED.h"
#include "KEY.h"
int main(void)
{
	LED_init();
	key_star();
	while(1)
	{
		uint8_t key = keynum();
		if(key==1)
		{
			LED1_turn();
		}
		if(key==2)
		{
			LED2_turn();
		}
	}
}
