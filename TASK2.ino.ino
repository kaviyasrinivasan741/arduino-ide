#include<SoftwareSerial.h>

SoftwareSerial blt(10,11);

int gasSensor=A0;
int gasvalue;

void setup()
{
  blt.begin(9600);
}

void loop()
{
  gasvalue=analogRead(gasSensor);

  blt.println(gas value);
  delay(1000);
}