#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>
void Timer0_Pwm(void);
/*********F_CPU=1000000UL*************/
int main(void)
{
	/* Application initialization*/

	Timer0_Pwm();

			/* Super_Loop*/
				while(1)
				{

				}




}

void Timer0_Pwm(void)
{
	/*We will not Activate the global interrupt flag is the PWM automatically Toggle the state of the pin
	* Also we will not activate FOC0 as its activated in any mode rather than PWM*/

	DDRB|=(1<<PB3);// We must define oc0 as an output and it is initially given High Voltage
	TCCR0= (1<<WGM00) | (1<<WGM01) | (1<<COM01)|(1<<CS01);
	TCNT0=0;
	OCR0=64;
	TIMSK=(TIMSK&0xFC);// Setting the peripheral interrupt enable to 0;


}
