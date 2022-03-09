#include <Arduino.h>

void setup()
{
	Serial.begin(9600);

	while (!Serial)
		; // Wait for Serial to be ready

	delay(1000);

    pinMode(WIO_LIGHT, INPUT);
}

void loop()
{
    int light = analogRead(WIO_LIGHT);
    Serial.print("Light value: ");
    Serial.println(light);

	delay(1000);
}