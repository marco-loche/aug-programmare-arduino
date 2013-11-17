/*
  Fade In Fade OUT
  Increase and decrease intensity of an LED 
  This example code is part of the AUG-ROMA Arduino Course
  This example code is in the public domain.
  Author Marco Loche
 */

// Pin 9 is a PWM PIN
const int led = 9;
// Define the value of brightness of the led
int intensity = 0;    

void setup() {                
  pinMode(led, OUTPUT);     
}

void loop() {
  //Fade in
  for (intensity = 0 ; intensity <= 255; intensity++) { 
    analogWrite(led, intensity);
    delay(10);                     
  } 
  // Fade out
  for(intensity = 255 ; intensity > 0; intensity--) {
    analogWrite(led, intensity);
    delay(10);                      
  } 
}
