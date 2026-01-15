#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20, 16, 2);

void setup() {
  lcd.begin(16, 2);      // ✅ REQUIRED in TinkerCAD
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Hello World");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print("Time: ");
  lcd.print(millis() / 1000);
  delay(500);
}
