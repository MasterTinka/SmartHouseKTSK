#include "Arduino.h"
#include "digitalPinClassOutput.h"
#include "digitalPinClassInput.h"

digitalPinClassOutput LED(4);
digitalPinClassInput button(8);

void setup()
{

}

void loop()
{
    if(button.is_changed() == true)
    {
        LED.toggle_Status();
        delay(500);
    }
    else
    {
        delay(50);
    } 
}