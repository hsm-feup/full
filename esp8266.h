#ifndef ESP8266_H_
#define ESP8266_H_

#include "Arduino.h"

class ESP8266 {
	public:
		ESP8266();
		void sendAT(const char *cmd);
		void loop();
};

#endif /* ESP8266_H_ */
