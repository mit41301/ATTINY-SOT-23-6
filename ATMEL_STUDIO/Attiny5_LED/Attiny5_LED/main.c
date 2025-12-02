/*
 * Attiny5_LED.c
 *
 * Created: 02-12-2025 11:34:59
 * Author : mit41301
 */ 

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void) {

	DDRB |= _BV(DDB2);

	while (1) {
		PINB = _BV(PINB2);
		_delay_ms(500);
	}

	return 0;
}
