#ifndef ULTRASONIC_KAYIJUKA_H
#define ULTRASONIC_KAYIJUKA_H

#include <Arduino.h>

class Ultrasonic_Kayijuka
{
private:
    uint8_t trigPin;
    uint8_t echoPin;

public:
    Ultrasonic_Kayijuka(uint8_t trig, uint8_t echo);

    long readMicroseconds();
    float readCM();
    float readInch();
};

#endif
