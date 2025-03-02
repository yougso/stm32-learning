#include "stm32f10x.h"    
#include "delay.h"
#include "LED.h"
#include "KEY.h"
#include "Buzzer.h"
#include "light.h"

int main(void)
{
	Buzzer_init();
	light_init();
	while(1)
	{
		uint8_t light = lightnum();
		if(light==0)
			Budder_off();
		else
			Budder_open();
	}
}
