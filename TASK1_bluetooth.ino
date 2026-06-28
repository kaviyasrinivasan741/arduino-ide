#include<SoftwareSerial.h>
SoftwareSerial blt(10,11);

int light=2;
int fan=3;
char data;

void setup()
{
  pinMode(light, OUTPUT);
  pinMode(fan, OUTPUT);
  
  serial.begin(9600);
  blt.begin(9600);
}

void loop()
{
  if(blt.available())
  {
    data=blt.read();

    if(data=='A')
     digitalWrite(light, HIGH);

    else if(data=='B')
     digitalWrite(light, LOW);

    else if(data=='C')
     digitalWrite(fan, HIGH);

    else if(data=='D')
     digitalWrite(fan, LOW);


  }
}