/*
 * attiny85_LED_B0.c
 *
 * Created: 4/23/2025 15:06:24 PM
 * Author : mit41301
 */ 

#define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB |= 0x01;
	while (1)
	{
		PORTB |= 0x01;
		_delay_ms(1000);
		PORTB &= 0xFE;
		_delay_ms(1000);
	}
}
