#include "analogPinClassOutput.h"

analogPinClassOutput::analogPinClassOutput(int setPin, int setLevel = 0)
{
  this->pin = setPin;
  this->curLevel = setLevel;

  pinMode(pin, OUTPUT);
  analogWrite(pin, curLevel);
}

void analogPinClassOutput::rise_up(unsigned int riseLevel)
{
  curLevel += riseLevel;

  if(curLevel > 255)
    curLevel = 255;

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
  curLevel = 255;
  analogWrite(pin, curLevel);
}

void analogPinClassOutput::set_min()
{
  curLevel = 0;
  analogWrite(pin, curLevel);
}

void analogPinClassOutput::set_signal(int signal)
{
  analogWrite(pin, signal);
}

int analogPinClassOutput::get_level()
{
  return curLevel;
}

int analogPinClassOutput::get_pin()
{
  return pin;
}

bool analogPinClassOutput::is_max()
{
  if (curLevel == 255)
    return true;
  else
    return false;
}

bool analogPinClassOutput::is_min()
{
  if(curLevel == 0)
    return true;
  else
    return false;
}