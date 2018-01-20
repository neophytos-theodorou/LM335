#include "LM335.h"

LM335::LM335(int sensorPin, float vRef=5.0){
    _sensorPin = sensorPin;
    _vRef = vRef;
}

void LM335::readValue(){
    _rawValue = analogRead(_sensorPin);
}

int LM335::getRawValue(){
    return _rawValue;
}

float LM335::getMillivolt(){
    return getRawValue() * _vRef * 1000.0 / 1024;
}

float LM335::getKelvin(){
    return getMillivolt() / 10;
}

float LM335::getCelcius(){
    return getKelvin() - 273.15;
}

float LM335::getFahrenheit(){
    return getCelcius() * 1.8 + 32;
}