#include <DHT.h>

int led=2;

DHT dht(4, DHT11);

void setup()
{
  pinMode(led, OUTPUT);
  dht.begin();
}

void loop()
{
  float Hum=dht.readHumidity();

  if(Hum<50)
  {
    digitalWrite(led, 1);
    delay(500);
    digitalWrite(led,0);
    delay(500);
  }
  else
  {
    digitalWrite(led, 0);
    delay(2000);
  }

}
