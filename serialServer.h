#ifndef SERIALSERVER_H_
#define SERIALSERVER_H_

#include "Arduino.h"

class SerialServer {
	public:
		SerialServer(int baudrate);
		char *getCmd();
		void sendMsg(const char *msg);
//	private:
//		int _baudrate;
};

#endif /* SERIALSERVER_H_ */
