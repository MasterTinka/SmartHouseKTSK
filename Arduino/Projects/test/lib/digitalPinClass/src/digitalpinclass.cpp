#include "digitalpinclass.h"

digitalPinClass::digitalPinClass(int pinNum)
{
    this->pin = pinNum;
    this->status = false;
    pinMode(pin, OUTPUT);
}

void digitalPinClass::set_LOW()
{
    if (this->status == true)
    {
        this->status = false;
        digitalWrite(pin, LOW);
    }
}

void digitalPinClass::set_HIGH()
{
    if (this->status == false)
    {
        this->status = true;
        digitalWrite(pin, HIGH);
    }
}

void digitalPinClass::toggle_Status()
{
    if (this->status == true)
    {
        this->status = false;
        digitalWrite(pin, LOW);
    }
    else if (this->status == false)
    {
        this->status = true;
        digitalWrite(pin, HIGH);
    }
}
