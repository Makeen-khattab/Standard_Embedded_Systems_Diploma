#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>
void WatchDog_On(void);
void WatchDog_Off(void);

/*********F_CPU=1000000UL*************/
int main(void)
{
	/* Application initialization*/
	// Enable the Watchdog timer
	WatchDog_On();

		// Configure PD6 as output pin
		DDRD |= (1<<PD6);

		// Toggle the led every reset
		PORTD |= (1<<PD6);
		_delay_ms(1000);
		PORTD &= ~(1<<PD6);

		// Wait until the watch-dog reset the system
	    while(1);


}
void WatchDog_On(void)
{
	WDTCR=(1<<WDE) |(1<<WDP2)|(1<<WDP1)|(1<<WDP0);


}
void WatchDog_Off(void)
{

	WDTCR = (1<<WDTOE) | (1<<WDE);
	_delay_us(4);
	WDTCR=0x00;


}



