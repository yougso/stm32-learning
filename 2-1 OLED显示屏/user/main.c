#include "stm32f10x.h"                  // Device header
#include "delay.h"
#include "LED.h"
#include "Key.h"
#include "OLED.h"

int main(void)
{
	OLED_Init();
	OLED_ShowChar(1,1,'A');
	OLED_ShowNum(2,1,12345,5);
	OLED_ShowBinNum(3,1,0XA0B0,16);
}
