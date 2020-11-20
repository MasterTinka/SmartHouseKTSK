#include "Arduino.h"
#include "analogPinClassOutput.h"

analogPinClassOutput test_pin(3);

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    while(!test_pin.is_max())
    {
        test_pin.rise_up();
        delay(100);
    }
    while (!test_pin.is_min())
    {
        test_pin.put_down();       
        delay(200);
    }
    delay(1000);
}