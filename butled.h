#ifndef BUTLED_H_
#define BUTLED_H_

#include "Arduino.h"
#include "SerialServer.h"

class ButLed {
	public:
		ButLed(int butPin, int ledPin, SerialServer *print);
		void cmdBut();
		void cmdLed(const char *cmd);
		void loop();
	private:
		int _butPin;
		int _ledPin;
		int _butState;
		SerialServer *_print;
};

#endif /* BUTLED_H_ */
