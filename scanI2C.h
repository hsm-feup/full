#ifndef SCANI2C_H_
#define SCANI2C_H_

#include "Arduino.h"
#include "Wire.h"

class ScanI2C {
	public:
		ScanI2C();
		void printI2Cports();
};

#endif /* SCANI2C_H_ */
