#include <Ultrasonic.h>

#define pino_trigger 2
#define pino_echo A1
Ultrasonic ultrasonic(pino_trigger, pino_echo);

int verde = 8;
int amarelo = 12;
int vermelho = 11;
void setup()
{
  Serial.begin(9600);
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);
  pinMode(13, OUTPUT);
}
 
void loop(){
  float cmMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  
  if(cmMsec>20){
    digitalWrite(verde, HIGH);
    digitalWrite(amarelo, LOW);
    digitalWrite(vermelho, LOW);
  }
  else if(cmMsec<=20 && cmMsec>10){
    digitalWrite(verde, LOW);
    digitalWrite(amarelo, HIGH);
    digitalWrite(vermelho, LOW);
    digitalWrite(13, HIGH);
    tone(13, 262, 300);
    delay(300);
  }
  else if(cmMsec<=10){
    digitalWrite(verde, LOW);
    digitalWrite(amarelo, LOW);
    digitalWrite(vermelho, HIGH);
    digitalWrite(13, HIGH);
    tone(13, 262, 100);
    delay(100);
  }
  Serial.print("Distancia em cm: ");
  Serial.println(cmMsec);
  delay(100);
}
