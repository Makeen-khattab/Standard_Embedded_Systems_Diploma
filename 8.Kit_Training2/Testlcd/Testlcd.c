#include "lcd.h"

int main(void)
{
	LCD_init();
	while(1)
	{
LCD_moveCursor(2,5);
LCD_displayString("makeen");

	}




}
