/*
  Fader.cpp - Una libreria per applicare la dissolvenza a un led
  Marco Loche e Gilles Ruppert per il corso Arduino dell'AUG Roma.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Fader.h"

Fader::Fader(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Fader::fadeIn()
{
  for (int intensity = 0 ; intensity <= 255; intensity++) { 
    analogWrite(_pin, intensity);
    delay(20);                     
  } 
}

void  Fader::fadeOut()
{
  for (int intensity= 255 ; intensity >= 0; intensity--) {
    analogWrite(_pin, intensity);
    delay(20);                     
  } 
}

