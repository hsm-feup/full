#include "main.h"

Blink bPin(13);
SerialServer server(115200);

#define LED 13
#define BUT 8
ButLed butled(BUT, LED, &server);
ScanI2C i2c;
ESP8266 esp;
ADXL345 acel;

void setup() {
}

void loop() {
	char *cmd;
	if ((cmd = server.getCmd()) != 0) {
		switch(cmd[0]) {
			case 'v':
				server.sendMsg("ledbut v2.1");
				break;
			case 'l':
				butled.cmdLed(cmd);
				break;
			case 'b':
				butled.cmdBut();
				break;
			case 'p':
				bPin.dot3();
				break;
			case 'i':
				i2c.printI2Cports();
				break;
			case ' ':
				esp.sendAT(cmd);
				break;
			case 'a':
				acel.getXYZ();
				break;
			case 'm':
				acel.setMeasureBit();
				break;
		}
	}
	butled.loop();
	esp.loop();
}
