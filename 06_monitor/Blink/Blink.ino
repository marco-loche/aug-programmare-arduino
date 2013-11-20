/*
  Serial monitor
  Monitoring value and printing debugging messages 
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
  // initialize serial communication at 9600 bits per second: 
  // Check the value in the Monitor 
  Serial.begin(9600);
  Serial.println("\nReady\n\n");
}

void loop() {
  
  if(intensity%5 == 0) {
    Serial.print(intensity); 
    Serial.print(" "); 
  }
  if(fadeIn){
     //Fade in
    analogWrite(led, intensity);
    intensity++;  
    delay(20);               
  }
  else{
    //Fade Out
    analogWrite(led, intensity);
    intensity--;
    delay(20);
  }
  
  if( intensity == 255 ){
    fadeIn = false;
    Serial.println("FadeIn");
  }
  if( intensity == 0){
    fadeIn = true;
    Serial.println("FadeOut");
    delay(500);
  }
}
