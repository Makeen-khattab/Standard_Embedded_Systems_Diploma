/***************************************************************
 * File: lcd.h
 * Author: Makeen Khattab
 * Date: February 10, 2024
 * Description: Contains all general purpose register prototype
 ***************************************************************
 ***************************************************************/
/*---------------------------INCLUDES----------------------------*/
#ifndef LCD_H_
#define LCD_H_
#include "Std_Types.h"

/*-------------Pre-processor Constants and configuration----------*/

#define TWOLINES_8BITMODE 			0x38
#define CURSOROFF					0x0C
#define CLEARSCREEN					0x01

/*Initialize the module to be Capable to send commands to LCD*/
void LCD_init(void);
void LCD_sendCommand(uint8 a_comand);
void LCD_displayCharachter(uint8 a_char);
void LCD_displayString(uint8*const a_char);

#endif /* LCD_H_ */
