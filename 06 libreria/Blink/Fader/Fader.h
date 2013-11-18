/*
  Fader.h - Una libreria per applicare la dissolvenza a un led
  Marco Loche e Gilles Ruppert per il corso Arduino dell'AUG Roma.
  Released into the public domain.
*/
#ifndef Fader_h
#define Fader_h

#include "Arduino.h"

class Fader
{
  public:
    Fader(int pin);
    void fadeIn();
    void fadeOut();
  private:
    int _pin;
};

#endif
