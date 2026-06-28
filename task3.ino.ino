#include <BluetoothSerial.h>

BluetoothSerial blt;

int led=2;
char data;

void setup()  
{
  pinMode(led, OUTPUT);

  Serial.begin(115200);
  Serialblt.begin("ESP32_BLT");
}

void loop()
{
  if(Serialblt.available())
  {
    data=Serialblt.read();

    if(data=='A')
     digitalWrite(led, HIGH);

    else if(data=='B')
     digitalWrite(led, LOW);
  }
}
