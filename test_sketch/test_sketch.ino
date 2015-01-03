#include <SoftwareSerial.h>
int transmit_output_pin = 7;
int transmit_input_pin = 6;

SoftwareSerial transmitSerial(transmit_input_pin, transmit_output_pin);
int transmit_baud = 9600;
int counter = 0;

void setup(){
  transmitSerial.begin(transmit_baud);
}

void loop(){
 // while(1) {
  //  counter = counter + 1;
   // if(counter == 10) {
   //   counter = 0;
      transmitSerial.print("Hello World \n\r");
      delay(1000);
    //}
  //} 
}  
