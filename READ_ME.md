# Ultrasonic_Kayijuka

An Arduino library for HC-SR04 ultrasonic sensors.

## Features

- Measure distance in centimeters
- Measure distance in inches
- Easy to use
- Lightweight and beginner friendly
- Compatible with Arduino UNO, Nano, Mega and ESP32

## Installation

1. Download the ZIP file.
2. Open Arduino IDE.
3. Sketch → Include Library → Add .ZIP Library.
4. Select Ultrasonic_Kayijuka.zip.

## Wiring

| HC-SR04 | Arduino |
|----------|----------|
| VCC | 5V |
| GND | GND |
| TRIG | D9 |
| ECHO | D10 |

## Example

```cpp
#include <Ultrasonic_Kayijuka.h>

Ultrasonic_Kayijuka sensor(9, 10);

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println(sensor.readCM());
    delay(500);
}
```

## Author

Olivier KAYIJUKA

## License

MIT License
