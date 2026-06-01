#include "Ultrasonic_Kayijuka.h"

Ultrasonic_Kayijuka::Ultrasonic_Kayijuka(uint8_t trig, uint8_t echo)
{
    trigPin = trig;
    echoPin = echo;

    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

long Ultrasonic_Kayijuka::readMicroseconds()
{
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);

    digitalWrite(trigPin, LOW);

    return pulseIn(echoPin, HIGH);
}

float Ultrasonic_Kayijuka::readCM()
{
    long duration = readMicroseconds();

    return duration * 0.0343 / 2.0;
}

float Ultrasonic_Kayijuka::readInch()
{
    return readCM() / 2.54;
}
