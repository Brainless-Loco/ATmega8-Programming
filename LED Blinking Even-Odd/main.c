/*
    Created By: Brainless Loco
*/

#include<avr/io.h>
#include<util/delay.h>

int main(){

	char a[]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
	//For output status

	DDRB=0xff;
	///We will be using port B for output.

	while(1){

		//Even numbered LEDs.
		for(int i=0;i<8;i+=2){
		  PORTB=a[i];
		  _delay_ms(100);
		}

		//Odd numbered LEDs.
		for(int i=7;i>=0;i-=2){
		  PORTB=a[i];
		  _delay_ms(100);
		}

	}

	/*
    You may want to do it in another way.

    while(1){
        PORTB = 0xAA; //corresponding binary value -> 0b10101010
        // So the Odd numbered LED will be turned on
        _delay_ms(100);


        PORTB = 0x55 //corresponding binary value -> 0b01010101
        // So the Even numbered LED will be turned on
        _delay_ms(100);
    }



	*/




	return 0;

}
