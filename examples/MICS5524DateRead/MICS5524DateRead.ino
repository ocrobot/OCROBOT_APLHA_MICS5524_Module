#include "OCROBOT_MICS5524.h"
MICS5524 mics(0x03);
void setup() 
{
     mics.begin();
     Serial.begin(9600);
}

void loop() 
{
      int OdorDate =  mics.readOdor();
      Serial.println(OdorDate);   //print OdorDate
      delay(1000);
}