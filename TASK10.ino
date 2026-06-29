#include <Wire.h>
#include <LiquidCrystal_I2C>
#include <DHT.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);
DHT dht(4,DHT22);

void setup()
{
  lcd.init();
  lcd.backlight();
  dht.begin();
  Serial.begin(115200);
}

void loop()
{
  float temp=dht.readTemperature();
  float hum=dht.readHumidity();

  Serial.print("Temperature : ");
  Serial.println(temp);

  Serial.print("Humidity : ");
  Serial.println(hum);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Temperature")

  lcd.setCursor(0,1);
  lcd.print(temp);

  lcd.setCursor(0,2);
  lcd.print("Humidity : ");

  lcd.setCursor(0,3);
  lcd.print(Hum);

  delay(1000); 
}
