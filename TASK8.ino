#include <DHT.H>

DHT dht(5, DHT22);
int LED=2;

void setup()
{
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  dht.begin();
}

void loop()
{
  float Temp=dht.readTemperature();

  if(Temp>35)
   digitalWrite(LED, 1);
  else
   digitalWrite(LED, 0);
  delay(1000);
}
