#include <LiquidCrystal.h>


LiquidCrystal_I2C lcd1(0x27, 16, 2);
LiquidCrystal_I2C lcd2(0x26, 16, 2);

int sensor=A0;
int value;
int percent;

void setup()
{
  lcd1.init();
  lcd1.backlight();

  lcd2.init();
  lcd2.backlight();
}

void loop()
{
  value=analogRead(sensor);
  percent=map(value, 1023, 0, 0, 100);

  lcd1.clear();
  lcd1.setcursor(0,0);
  lcd1.print("value : ");
  lcd1.print(value);

  lcd2.clear();
  lcd2.setcursor(0,0);
  lcd2.print("Moisture :");

  lcd2.setcursor(0,1);
  lcd2.print(percent);
  lcd2.print("%");
  delay(1000);
}