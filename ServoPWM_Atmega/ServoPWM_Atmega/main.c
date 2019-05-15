/*
 * ServoPWM_Atmega.c
 *
 * Created: 5/15/2019 10:51:35 AM
 * Author : Lucas Paiva da Silva 
 */ 
#include "def_principais.h"
#include <avr/io.h>
#include <avr/interrupt.h>


int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
		DDRB = 0xFF;
		TCCR1A = (1<<COM1A1) |	(1<<COM1B1) | (1<<WGM11) | (1<<WGM10);
		TCCR1B = (1<<CS10) | (1<<CS12) | (1<<WGM13) | (1<<WGM12);
		OCR1A = 311;
		OCR1B = 10;
		sei();
		
		for (OCR1B = 7 ; OCR1B<=40 ; OCR1B++)
		{
			_delay_ms(30);
		}

    }
}

