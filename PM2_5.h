#ifndef PM2_5_h
#define PM2_5_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

#include <Wire.h>
#include "Variable.h"


class  PM2_5
{
	public:
		PM2_5(byte Addr);
		void begin();
		uint16_t GetPM1();
		uint16_t GetPM2_5();
		uint16_t GetPM10();
		uint16_t GetAerospherePM1();
		uint16_t GetAerospherePM2_5();
		uint16_t GetAerospherePM10();
		uint16_t particulates0_3();
		uint16_t particulates0_5();
		uint16_t particulates1();
		uint16_t particulates2_5();
		uint16_t particulates5();
		uint16_t particulates10();
	private:
		byte _Addr;
};


#endif