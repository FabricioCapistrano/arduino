#include <Ultrasonic.h>

#define pino_trigger 8
#define pino_echo 6
Ultrasonic ultrasonic(pino_trigger, pino_echo);
 
void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(13, OUTPUT);
}
 
void loop(){
  float cmMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  
  if(cmMsec>20){
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  else if(cmMsec<=20 && cmMsec>10){
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(13, HIGH);
    tone(13, 262, 300);
    delay(300);
  }
  else if(cmMsec<=10){
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(13, HIGH);
    tone(13, 262, 100);
    delay(100);
  }
  Serial.print("Distancia em cm: ");
  Serial.println(cmMsec);
  delay(100);
}
