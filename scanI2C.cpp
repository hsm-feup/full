#include "scanI2C.h"

ScanI2C::ScanI2C() {
	Wire.begin();
}

void ScanI2C::printI2Cports() {
	uint8_t addr;
	uint8_t v;

	for (addr=0; addr<0x80; addr++) {
		Wire.beginTransmission(addr);
		v = Wire.endTransmission();
		if (v != 0 or !addr)
			Serial.print("-- ");
		else {
			Serial.print(addr, HEX);
			Serial.print(" ");
		}
		if ((addr % 16) == 15)
			Serial.println("");
	}
}
