#ifndef DIGITALPINCLASS_H
#define DIGITALPINCLASS_H
#include<Arduino.h>

class digitalPinClass
{
    public:
        digitalPinClass(int);
        void set_HIGH();
        void set_LOW();
        void toggle_Status();
    private:
        int pin;
        bool status;
};

#endif // DIGITALPINCLASS_H
