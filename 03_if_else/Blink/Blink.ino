/*
  Fade In Fade OUT
  Increase and decrease intensity of an LED using only if constructor
  This example code is part of the AUG-ROMA Arduino Course
  This example code is in the public domain.
  Author Marco Loche
 */

// Pin 9 is a PWM PIN
const int led = 9;
// Define the value of brightness of the led
int intensity = 0; 
boolean fadeIn = true;

void setup() { 
  pinMode(led, OUTPUT);     
}

void loop() {
  if(fadeIn){
     //Fade in
    analogWrite(led, intensity);
    intensity++; // same as `intensity = intensity + 1;`
    delay(20);               
  }
  else{
    //Fade Out
    analogWrite(led, intensity);
    intensity--; // same as `intensity = intensity - 1;`
    delay(20);
  }
  
  if( intensity == 255 ){
    fadeIn = false;
  }
  if( intensity == 0){
    fadeIn = true;
    delay(500);
  }
}
