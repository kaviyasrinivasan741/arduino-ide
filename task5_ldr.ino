#include <LiquidCrystal.h>

LiquidCrystal lcd(0x27, 16, 2);

int ldr=A0;
int value;

void setup()
{
  lcd.init();
  lcd.backlight();
}

void loop()
{
  value=analogRead(ldr);

  lcd.clear();

  lcd.setcursor(0,0);
  lcd.print("LDR : ");
  lcd.print(value);

  lcd.setcursor(0,1);

  if(value>500)
  {
    lcd.print("BRIGHT");
  }
  else
  {
    lcd.print("DARK");
  }
  delay(1000);
}