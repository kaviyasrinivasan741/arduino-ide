#include<BluetoothSerial.h>

BluetoothSerial blt;

int flame=34;

void setup()
{
  Serial.begin(9600);
  blt.begin("ESP32_BLT");
  pinMode(flame, INPUT);
}

void loop()
{
  if(digitalRead(flame)==LOW)
  {
    Serial.println("Flame Detected : ");
    Serialblt.println("Flame Detected : ");
  }
  else
  {
    Serial.println("No Flame");
    Serialblt.println("No Flame");
  }
  delay(1000);
}
