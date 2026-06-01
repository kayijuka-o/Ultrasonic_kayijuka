#include <Ultrasonic_Kayijuka.h>

Ultrasonic_Kayijuka sensor(9, 10);

void setup()
{
    Serial.begin(9600);

    Serial.println("=================================");
    Serial.println(" Ultrasonic_Kayijuka Library");
    Serial.println(" Author: Olivier KAYIJUKA");
    Serial.println("=================================");
}

void loop()
{
    float distance = sensor.readCM();

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    delay(500);
}
