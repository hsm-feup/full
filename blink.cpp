#include "Arduino.h"
#include "blink.h"

Blink::Blink(int pin)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
}

void Blink::dot()
{
	digitalWrite(_pin, HIGH);
	delay(250);
	digitalWrite(_pin, LOW);
	delay(250);
}

void Blink::dot3()
{
	dot();
	dot();
	dot();
}
