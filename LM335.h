#ifndef LM335_H
#include <Arduino.h>

class LM335{
    public:
        LM335(int sensorPin, float vRef=5.0);
        void readValue();
        int getRawValue();
        float getMillivolt();
        float getKelvin();
        float getCelcius();
        float getFahrenheit();
    
    private:
        int _sensorPin;
        float _vRef;
        int _rawValue;
};


#define LM335_H
#endif