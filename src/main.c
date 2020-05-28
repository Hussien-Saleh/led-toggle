/*
 * program to control a led
 * requirements: negative logic configuration
 */

#include <avr/io.h>
#include <util/delay.h> 

int main(void)
{
	
	DDRD |= (1<<PD6); // pin 6 as output  
	PORTD |= (1<<PD6); // led off

    for(;;)
    {
		PORTD ^= (1<<PD6); // Toggle the LED
		_delay_ms(1000);
    }
}
