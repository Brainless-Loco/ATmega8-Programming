/*
    Created By: Brainless Loco
 */

#include <avr/io.h>
#include <util/delay.h>



//You can create an array of char for these corresponding values.
//unsigned char arr[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};

//I am just using macros for easy understanding.

#define zero 0b11000000
#define one 0b11111001
#define two 0b10100100
#define three 0b10110000
#define four 0b10011001
#define five 0b10010010
#define six 0b10000010
#define seven 0b11111000
#define eight 0b10000000
#define nine 0b10010000

int main(void)
{
	DDRD=0b11111111;
	//We will be using PORT D for writing outputs.

	//Note that you can also write to PORT B and C (Without Decimal Points - DP.).

	//Remember, this is the easiest way to display.
	//Note that, this code is made for only Common Anode 7 Segment Display.
	//For Common Cathode 7 Segment Display, just inverse the bits of macros. That is change 0 to 1, and 1 to zero.

	while(1){
        // Displaying Digits from 9 to 0
		PORTD=nine;
		_delay_ms(100);
		PORTD=eight;
		_delay_ms(100);
		PORTD=seven;
		_delay_ms(100);
		PORTD=six;
		_delay_ms(100);
		PORTD=five;
		_delay_ms(100);
		PORTD=four;
		_delay_ms(100);
		PORTD=three;
		_delay_ms(100);
		PORTD=two;
		_delay_ms(100);
		PORTD=one;
		_delay_ms(100);
		PORTD=zero;
		_delay_ms(100);
	}
}
