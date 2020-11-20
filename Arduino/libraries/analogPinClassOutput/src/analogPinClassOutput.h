#include "Arduino.h"

class analogPinClassOutput
{
public:
    //  Конструктор
    analogPinClassOutput(int setPin, int setLevel = 0);
    //  Управление сигналом
    void rise_up(unsigned int riseLevel = 10);
    void put_down(unsigned int putLevel = 10);
    void set_max();
    void set_min();
    void set_signal(int signal);
    // Получить данные о классе
    bool is_max();
    bool is_min();
    int get_level();
    int get_pin();
private:
    unsigned int pin;
    int curLevel;
};
