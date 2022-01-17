#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,8,9,10,11);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.print("Computador Amigo");
  delay(5000);
  lcd.clear();
  delay(1000);
}
