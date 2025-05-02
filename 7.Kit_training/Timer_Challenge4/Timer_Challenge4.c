#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>
void Timer1_Ctc_Mode(void);
void Timer1_Pwm_Mode(void);
char flag=1;
int main(void)
{
	/* Application initialization*/
		Timer1_Pwm_Mode();
		DDRD|=1<<PD5;
	/* Super_Loop*/
				while(1)
				{


				}



}
void Timer1_Ctc_Mode(void)
{
	SREG|=1<<7;
	TCCR1A=(1<<FOC1A);
	TCCR1B=	(1<<CS11) | (1<<WGM12);
	TCNT1=0;
	OCR1A=125;
	TIMSK|=1<<OCIE1A;
}

ISR( TIMER1_COMPA_vect)
{
	if(flag)
	{
		PORTC^=1<<PC0;
		OCR1A=375;
		flag=0;
	}
	else
	{
		PORTC^=1<<PC0;
		OCR1A=125;
		flag=1;
	}

}
void Timer1_Pwm_Mode(void)
{
	TCCR1A= (1<<WGM11)|(1<<COM1A1);
	TCCR1B= (1<<WGM12)|(1<<WGM13)|(1<<CS11);
	TCNT1=0;
	OCR1A=125;
	ICR1=500;

}

