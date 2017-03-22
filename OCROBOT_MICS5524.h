#ifndef _OCROBOT_MICS5524_H_
#define _OCROBOT_MICS5524_H_

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

#define Odor 1

class  MICS5524
{
	public:
		MICS5524(byte Addr);
		void begin();
		uint16_t readOdor();
	private:
		byte _Addr;
};


#endif