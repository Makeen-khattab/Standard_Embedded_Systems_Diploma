#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
typedef enum
{
	CLOCK_WISE,
	ANTI_CLOCK_WISE,
	STOP
} Motor_Direction;
void Motor(Motor_Direction);
int main(void)
{
	/* Application initialization*/
		DDRA&= (~(1<<PA0))&(~(1<<PA1))&(~(1<<PA2));
		DDRC|= (1<<PC0) | (1<<PC1);
			/* Super_Loop*/
				while(1)
				{

if((1<<PA0 )& (PINA))
{

	Motor(CLOCK_WISE);

}
else if((1<<PA1 )& (PINA))
{

	Motor(ANTI_CLOCK_WISE);

}
else if((1<<PA2 )& (PINA))
{

	Motor(STOP);

}

				}


}
void Motor(Motor_Direction Direction)
{
	switch(Direction)
	{
	case CLOCK_WISE:
	PORTC= (PORTC&0xFC) | 1<<PC1;
	break;
	case ANTI_CLOCK_WISE:
		PORTC= (PORTC&0xFC) | 1<<PC0;
		break;
	case STOP:
		PORTC= (PORTC&0xFC);
	}


}


