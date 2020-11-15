#include "analogPinClassOutput.h"

analogPinClassOutput::analogPinClassOutput(int setPin, int setLevel)
{
  this->pin = setPin;
  this->curLevel = setLevel;

  pinMode(pin, OUTPUT);
  analogWrite(pin, curLevel);
}

void analogPinClassOutput::rise_up(unsigned int riseLevel)
{
  curLevel += riseLevel;

  if(curLevel > 1023)
    curLevel = 1023;

  analogWrite(pin, curLevel);
}

void analogPinClassOutput::put_down(unsigned int putLevel)
{
  curLevel -= putLevel;

  if(curLevel < 0)
    curLevel = 0;

  analogWrite(pin, curLevel);
}

void analogPinClassOutput::set_max()
{
  curLevel = 1023;
  analogWrite(pin, curLevel);
}

void analogPinClassOutput::set_min()
{
  curLevel = 0;
  analogWrite(pin, curLevel);
}

int analogPinClassOutput::get_level()
{
  return curLevel;
}

int analogPinClassOutput::get_pin()
{
  return pin;
}