#include <Ultrasonic.h>
#include <LiquidCrystal.h>

#define pino_trigger 8
#define pino_echo A0
Ultrasonic ultrasonic(pino_trigger, pino_echo);
LiquidCrystal lcd(2, 3, 4, 5, 6, 7, 9);
 
void setup()
{
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}
 
void loop()
{
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  inMsec = ultrasonic.convert(microsec, Ultrasonic::IN);
  if(cmMsec>20){
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }
  else if(cmMsec >= 20 && cmMsec > 10){
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
  }
  else if (cmMsec<=0){
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
  }
  Serial.print("Distancia em cm: ");
  Serial.print(cmMsec);
  lcd.clear();
  lcd.print(cmMsec);
  delay(500);
}
