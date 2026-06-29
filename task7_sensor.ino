#include <DHT.H>

DHT dht(5, DHT11);

void setup()
{
  Serial.begin(9600);
  dht.begin();
}

void loop()
{
  float Temp=dht.readTemperature();
  int Hum=dht.readHumidity();

  Serial.print("Temperature : ");
  Serial.println("Temp");
  Serial.print("Humudity : ");
  Serial.println();
}
