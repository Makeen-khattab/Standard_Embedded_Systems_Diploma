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
typedef enum
{
	TWOLINES_8BITMODE=0x38,
	CURSOROFF=0x0C,
	CLEARSCREEN =0x01
};

/*Initialize the module to be Capable to send commands to LCD*/
void LCD_init(void);
void LCD_sendCommand(uint8 a_comand);


#endif /* LCD_H_ */
