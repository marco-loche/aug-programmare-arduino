/*
  functions
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

void fadeIn() {
  for (intensity = 0 ; intensity <= 255; intensity++) { 
    analogWrite(led, intensity);
    delay(20);                     
  } 
}

void fadeOut() {
  for(intensity = 255 ; intensity >= 0; intensity--) {
    analogWrite(led, intensity);
    delay(20);                      
  } 
}

void loop() {
  fadeIn();
  fadeOut();
}
