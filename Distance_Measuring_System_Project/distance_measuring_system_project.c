/*
 * Mini_Project_4.c
 *
 *  Created on: Jul 8, 2022
 *      Author: Mohamed Ragab
 */
#include "ultrasonic.h"
#include "lcd.h"
int main (void)
{
	uint16 distance;
	/*initialize both LCD and ultrasonic drivers*/
	LCD_init();
	Ultrasonic_init();
	LCD_displayString("Distance=     cm");
	while(1)
	{
		distance = Ultrasonic_readDistance();
		LCD_moveCursor(0,10);
		if(distance >= 100)
		{
			LCD_intgerToString(distance);
		}
		else
		{
			LCD_intgerToString(distance);
			/* In case the digital value is two or one digits print space in the next digit place */
			LCD_displayCharacter(' ');
		}
	}
}
