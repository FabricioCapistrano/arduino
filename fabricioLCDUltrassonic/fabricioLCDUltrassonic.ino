#include <Ultrasonic.h>

#define pino_trigger A0
#define pino_echo A1
#define led1 10
#define led2 9
#define led3 8
Ultrasonic ultrasonic(pino_trigger, pino_echo);

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  //pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float cmMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  
  if(cmMsec>20){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  else if(cmMsec<=20 && cmMsec>10){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    //digitalWrite(13, HIGH);
    //tone(13, 262, 300);
    delay(300);
  }
  else if(cmMsec<=10){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    //digitalWrite(13, HIGH);
    //
    //tone(13, 262, 100);
    delay(100);
  }
  /*Serial.print("Distancia em cm: ");
  Serial.println(cmMsec);
  delay(100);*/
}
