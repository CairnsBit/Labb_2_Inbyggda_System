#include <avr/io.h>
#include <avr/interrupt.h>
#include "timer.h"


void timer_init() {

	TCCR0A |= (1 << WGM01);

	TCCR0B |= (1 << CS02) | (1 << CS00);

	OCR0A = 156; // Avrundat counter value som beräknades mha formeln: CPU Frequency / (Prescaler * Time rate) så 16000000/(1024*100) = 156.25
}

