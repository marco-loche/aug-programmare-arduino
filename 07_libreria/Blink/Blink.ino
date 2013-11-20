/*
  library
  Increase and decrease intensity of an LED using a dedicated object from a library
  This example code is part of the AUG-ROMA Arduino Course
  This example code is in the public domain.
  Author Marco Loche 
 */
#include <Fader.h>

Fader fader(9);

void setup()
{
}

void loop()
{
  fader.fadeIn();
  fader.fadeOut();
  delay(500);
}
