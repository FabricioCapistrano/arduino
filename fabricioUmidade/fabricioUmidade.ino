#include <LiquidCrystal.h>

#define pinAnalog A0
#define pinDigital 13

LiquidCrystal lcd(2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);

  Serial.begin(9600);
  //pinMode(pinDigital, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*if(digitalRead(pinDigital)){
    Serial.print("Seco");
  }
  else {
    Serial.print("Umido");
  }*/
  Serial.print(analogRead(pinAnalog));
  Serial.print("\n");
  if(analogRead(pinAnalog) > 800){
    lcd.clear();
    Serial.print("Seco\n");
    lcd.print("Seco");
    delay(500);
  }
  else{
    Serial.print("Umido\n");
    lcd.clear();
    lcd.print("Umido");
    delay(500);
  }
  
}
