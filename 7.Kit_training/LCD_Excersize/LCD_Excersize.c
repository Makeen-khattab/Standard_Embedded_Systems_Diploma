/***************************************************************
 * File: lcd excersize
 * Author: Makeen Khattab
 * Date: February 10, 2024
 * Description: Contains all general purpose register prototype
 ***************************************************************
 ***************************************************************/
/*---------------------------INCLUDES----------------------------*/
#include "lcd.h"
int main(void)
{
	/* Application initialization*/
	LCD_init();
	LCD_displayString("MAKEEN");
	while(1);
}

