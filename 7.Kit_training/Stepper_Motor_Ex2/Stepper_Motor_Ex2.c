#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
typedef enum{
	ZERO_STEP=0x0C,
	FOURTYFIVE_STEP=0x04,
	NINTY_STEP=0x06,
	HUNDTHIRTYFIVE_STEP=0x02,
	HUNDEIGHTY_STEP=0x03,
	TWOHUNDTWENTYFIVE_STEP=0x01,
	TWOHUNDSEVENTY_STEP=0x09,
	THREEHUNDFIFTEEN_STEP=0x08,
}STEPPER_MOTOR;
int main(void)
{
	/* Application initialization*/
		unsigned char Flag=1;
		char Num=-1;
			DDRC|=(DDRC&0xF0)|0x0F;
			DDRA&=~(1<<PA2);
				/* Super_Loop*/
					while(1)
					{
						if((PINA&(1<<PA2))&& (Flag))
						{
							_delay_ms(30);
							if((PINA&(1<<PA2))&& (Flag))
							{
								Num++;
								switch (Num)
								{
								case 0:
									PORTC=(PORTC&0xF0)|ZERO_STEP;
									Flag=0;
									break;
								case 1:
									PORTC=(PORTC&0xF0)|FOURTYFIVE_STEP;
									Flag=0;
									break;
								case 2:
									PORTC=(PORTC&0xF0)|NINTY_STEP;
									Flag=0;
									break;
								case 3:
									PORTC=(PORTC&0xF0)|HUNDTHIRTYFIVE_STEP;
									Flag=0;
									break;
								case 4:
									PORTC=(PORTC&0xF0)|HUNDEIGHTY_STEP;
									Flag=0;
									break;
								case 5:
									PORTC=(PORTC&0xF0)|TWOHUNDTWENTYFIVE_STEP;
									Flag=0;
									break;
								case 6:
									PORTC=(PORTC&0xF0)|TWOHUNDSEVENTY_STEP;
									Flag=0;
									break;
								case 7:
									PORTC=(PORTC&0xF0)|THREEHUNDFIFTEEN_STEP;
									Flag=0;
									Num=-1;
									break;
								}
							}


						}
						else if(!(PINA&(1<<PA2)))
							Flag=1;



					}



}


