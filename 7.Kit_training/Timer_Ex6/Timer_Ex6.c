#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>
void Timer0_Pwm(unsigned char);
/*********F_CPU=1000000UL*************/
int main(void)
{
	/* Application initialization*/
unsigned char i;
			/* Super_Loop*/
				while(1)
				{
					for(i=0;i<255;++i)
					{

						Timer0_Pwm(i);
						_delay_ms(50);

					}
					for(i=255;i>0;--i)
					{

						Timer0_Pwm(i);
						_delay_ms(50);
					}


				}




}

void Timer0_Pwm(unsigned char Duty_Cycle)
{
	/*We will not Activate the global interrupt flag is the PWM automatically Toggle the state of the pin
	* Also we will not activate FOC0 as its activated in any mode rather than PWM*/

	DDRB|=(1<<PB3);// We must define oc0 as an output and it is initially given High Voltage
	TCCR0= (1<<WGM00) | (1<<WGM01) | (1<<COM01)|(1<<CS01);
	TCNT0=0;
	OCR0=Duty_Cycle;
	TIMSK=(TIMSK&0xFC);// Setting the peripheral interrupt enable to 0;


}
