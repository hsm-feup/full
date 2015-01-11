#ifndef ADXL345_H_
#define ADXL345_H_

#include "Arduino.h"
#include "Wire.h"

//#define ADXL345_ADDR 0x53
const int ADXL345_ADDR = 0x53; // I2C address for ADXL345

class ADXL345 {
public:
	ADXL345();
	void getXYZ();
	void setMeasureBit();
};

#endif /* ADXL345_H_ */
