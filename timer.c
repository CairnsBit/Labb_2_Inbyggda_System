#include <avr/io.h>
#include <avr/interrupt.h>
#include "timer.h"


void timer_init() {

	TCCR0A |= (1<< COM0A1) | (1 << WGM01) | (1<<WGM00);

	TCCR0B |= (1 << CS01) | (1 << CS00);

	//F�r att ber�kna  PWM-frekvens i det h�r fallet anv�nder vi oss av formeln: CPU freq / (Prescaler * 256) s� 16000000 / (64 * 256) = 976,5625

}

