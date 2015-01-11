#ifndef BLINK_H_
#define BLINK_H_

#include "Arduino.h"

class Blink
{
	public:
		Blink(int pin);
		void dot3();
	private:
		int _pin;
		void dot();
};

#endif /* BLINK_H_ */
