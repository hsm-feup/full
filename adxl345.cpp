#include "adxl345.h"

ADXL345::ADXL345() {
	Wire.begin(); // set up Arduino I2C support
//	setMeasureBit();
}

void ADXL345::setMeasureBit() {
	Serial.println("in");
    Wire.beginTransmission(ADXL345_ADDR);
    Wire.write(0x2D);
    Wire.write(0x08); // Set "Measure bit" (D3) of "POWER_CTL" register (page 25 of datasheet)
    Wire.endTransmission();
	Serial.println("out");
}

void ADXL345::getXYZ() {
	int x, y, z;
	uint8_t dat[10];

	Wire.beginTransmission(ADXL345_ADDR);
    Wire.write(0x32);
    Wire.endTransmission();
    Wire.requestFrom (ADXL345_ADDR, 6);
    Wire.readBytes(dat, 6);
    x = ((uint16_t)dat[1] << 8) + dat[0];
	y = ((uint16_t)dat[3] << 8) + dat[2];
	z = ((uint16_t)dat[5] << 8) + dat[4];

	Serial.print(x);
	Serial.print(" ");
	Serial.print(y);
	Serial.print(" ");
	Serial.print(z);
	Serial.print("\n");
}


