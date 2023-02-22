/*
    Created By: Brainless Loco
*/

#include<avr/io.h>
#include<util/delay.h>

int main(){

	char a[]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};


	DDRB=0xff;
	///We will be using port B for output.

	int k=1;

	while(1){

		for(int i=0;i<8;i++){
		  PORTB=a[i];
		  _delay_ms(100);

		  //This below condition can be used for doing this program in just one for loop.
		  //if(i==0 || i==7) k*=-1;

		}

		for(int i=6;i>=0;i--){
		  PORTB=a[i];
		  _delay_ms(100);
		}

	}
	return 0;

}
