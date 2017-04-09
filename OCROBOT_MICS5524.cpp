#include "OCROBOT_MICS5524.h"
#include <Wire.h>
#include "Variable.h"

MICS5524::MICS5524(byte Addr)
{
	_Addr = Addr;
}

void MICS5524::begin()
{
	 Wire.begin();
}
/*读取气味数据*/
uint16_t MICS5524::readOdor()
{
	Wire.beginTransmission(_Addr); 
	Wire.write(Odor); 
	Wire.endTransmission();
	
	byte Byte[2];
	Wire.requestFrom((int)_Addr, (int)2);
	while(Wire.available())      //read 2 byte
	{
		Byte[0] = Wire.read();
		Byte[1] = Wire.read();
	}
	uint16_t outOdor;
	ByteToUint(outOdor,Byte);
	return outOdor;
 }