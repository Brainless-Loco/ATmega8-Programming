/*
    Created By: Brainless Loco

*/

//This is written for a Common Anode 7 segment Display only.//

#include <avr/io.h>
#include <util/delay.h>

int main(){

  unsigned char arr[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
  //You can also use corresponding binary values.

  DDRD = 0xFF; // Set port D as output

  DDRB = 0x00; // Set port B as input

  //Both input output can be exchanged as per your wish.

  while(1){
    if((PINB & 0b00000001) == 0) { // Check if switch is not pressed

      for(int i=0; i<10; i+=2){ // Display even digits
        PORTD = arr[i];
        _delay_ms(100);
      }
    }

    else{
      for(int i=1; i<10; i+=2){ // Display odd digits
        PORTD = arr[i];
        _delay_ms(100);
      }
    }


    //This can also be done in just one loop without any if else condition:

    /* for(int i=(PINB & 0b00000001); i<10; i+=2){
         PORTD = arr[i];
        _delay_ms(100);
    }*/
  }

  return 0;
}
