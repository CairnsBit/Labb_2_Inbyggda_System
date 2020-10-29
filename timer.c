#include <avr/io.h>
#include <avr/interrupt.h>
#include "timer.h"


void timer_init() {

	TCCR0A |= (1<< COM0A1) | (1 << WGM01) | (1<<WGM00);

	TCCR0B |= (1 << CS01) | (1 << CS00);

	//För att beräkna  PWM-frekvens i det här fallet använder vi oss av formeln: CPU freq / (Prescaler * 256) så 16000000 / (64 * 256) = 976,5625

}

