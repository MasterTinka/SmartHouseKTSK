#include "Arduino.h"
#include "digitalpinclass.h"

digitalPinClass LED(4);

void setup()
{

}

void begin()
{
    LED.toggle_Status();
    delay(1000);
}
