#include <avr/io.h>
#include <avr/pgmspace.h>
#include <util/delay.h>
#include <stdbool.h>

#include <stdio.h>

#include "led.h"
#include "serial.h"
#include "timer.h"

void main (void) {
	uart_init();
	LED_init();
	timer_init();

	int counter;

	while (true) {
		if(TIFR0 & (1 << OCF0A)) {
			TIFR0 = (1 << OCF0A);
			counter++;
		}
		if (counter==10) {
			PORTB ^= (1 << PB1);
			counter = 0;
		}
	}
}
