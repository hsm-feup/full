#include "esp8266.h"

ESP8266::ESP8266() {
    Serial1.begin(9600);
}

void ESP8266::sendAT(const char *cmd) {
	Serial1.print(cmd+1);
	Serial1.print("\r\n");
}

void ESP8266::loop() {
    while ( Serial1.available() ) {
        Serial.write( Serial1.read() );
    }
}

