/*
 * 2nd.c
 *
 *  Created on: Jul 12, 2018
 *      Author: mahmoued
 */
#define F_CPU 12000000
#include<avr/io.h>
#include<avr/delay.h>
void main(void) {
	DDRA = 0b11111111;
	while(1) {
    _delay_ms(100);
    PORTA = 0b00000001;
    _delay_ms(100);
    PORTA = 0b00000010;
    _delay_ms(100);
    PORTA = 0b00000100;
    _delay_ms(100);
    PORTA = 0b00001000;
    _delay_ms(100);
    PORTA = 0b00010000;
    _delay_ms(100);
    PORTA = 0b00100000;
    _delay_ms(100);
    PORTA = 0b01000000;
    _delay_ms(100);
    PORTA = 0b10000000;
    _delay_ms(100);
    PORTA = 0b01000000;
    _delay_ms(100);
    PORTA = 0b00100000;
    _delay_ms(100);
    PORTA = 0b00010000;
    _delay_ms(100);
    PORTA = 0b00001000;
    _delay_ms(100);
    PORTA = 0b00000100;
    _delay_ms(100);
    PORTA = 0b00000010;
    _delay_ms(100);
    PORTA = 0b00000001;

	}


}

