/***************************************************************
 * File: lcd.h
 * Author: Makeen Khattab
 * Date: February 10, 2024
 * Description: Contains all general purpose register prototype
 ***************************************************************
 ***************************************************************/
/*---------------------------INCLUDES----------------------------*/
#include "lcd.h"
#include"util/delay.h"
#include "gpio.h"

void LCD_init(void)
{
	GPIO_setupPortDirection(PORTC_ID, PORT_OUTPUT);
	GPIO_setupPinDirection(PORTD_ID, PIN4_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(PORTD_ID, PIN5_ID, PIN_OUTPUT);
	/* as the LCD takes 15 millisecond to start up	*/
	_delay_ms(20);
	LCD_sendCommand(TWOLINES_8BITMODE);
	LCD_sendCommand(CURSOROFF);
	LCD_sendCommand(CLEARSCREEN);
}
void LCD_sendCommand(uint8 a_comand)
{
	GPIO_writePin(PORTD_ID, PIN4_ID, LOGIC_LOW);
	_delay_ms(1);
	GPIO_writePin(PORTD_ID, PIN5_ID, LOGIC_HIGH);
	_delay_ms(1);
	GPIO_writePort(PORTC_ID, a_comand);
	_delay_ms(1);
	GPIO_writePin(PORTD_ID, PIN5_ID, LOGIC_LOW);
	_delay_ms(1);

}

void LCD_displayCharachter(uint8 a_char)
{
	GPIO_writePin(PORTD_ID, PIN4_ID, LOGIC_HIGH);
		_delay_ms(1);
		GPIO_writePin(PORTD_ID, PIN5_ID, LOGIC_HIGH);
		_delay_ms(1);
		GPIO_writePort(PORTC_ID, a_char);
		_delay_ms(1);
		GPIO_writePin(PORTD_ID, PIN5_ID, LOGIC_LOW);
		_delay_ms(1);

}
void LCD_displayString(uint8*const a_char)
{
	uint8*a_charPTR=a_char;

		while( *(a_charPTR)!= '\0')
		{

			LCD_displayCharachter(*a_charPTR);
			a_charPTR++;
		}

}




