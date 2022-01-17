#include <Ultrasonic.h>

#define TRIGGER_PIN  12
#define ECHO_PIN     13

#define motor1A 8
#define motor1B 9
#define motor2A 10
#define motor2B 11
#define sensor1 5
#define sensor2 6
#define sensor3 3

Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1A, OUTPUT);
  pinMode(motor1B, OUTPUT);
  pinMode(motor2A, OUTPUT);
  pinMode(motor2B, OUTPUT);
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float cmMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);

  if(cmMsec>15){
    acelerar();
  }
  else{
    parar();
    delay(600);
    voltar();
    delay(500);
    esquerda();
    delay(300);
  }
  
  /*if(digitalRead(sensor1)==0 && digitalRead(sensor2)==0 && digitalRead(sensor3)==0){
    acelerar();
  }
  else if(digitalRead(sensor1)==1 && digitalRead(sensor2)==0 && digitalRead(sensor3)==0){
    direita();
  }
  else if(digitalRead(sensor1)==0 && digitalRead(sensor2)==0 && digitalRead(sensor3)==1){
    esquerda();
  }
  else if(digitalRead(sensor1)==0 && digitalRead(sensor2)==1 && digitalRead(sensor3)==1){
    esquerda();
  }
  else if(digitalRead(sensor1)==1 && digitalRead(sensor2)==1 && digitalRead(sensor3)==0){
    direita();
  }
  else{
    parar();
  }*/
  
}
void acelerar(){
  //o carrinho segue em frente
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, HIGH);
  digitalWrite(motor2A, LOW);
  digitalWrite(motor2B, HIGH);
}
void direita(){
  //o carrinho vira para a direita
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, HIGH);
  digitalWrite(motor2A, LOW);
  digitalWrite(motor2B, LOW);
}
void esquerda(){
  //o carrinho vira pra esquerda
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, LOW);
  digitalWrite(motor2A, LOW);
  digitalWrite(motor2B, HIGH);
}
void voltar(){
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, LOW);
  digitalWrite(motor2A, LOW);
  digitalWrite(motor2B, LOW);
}
void parar(){
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, LOW);
  digitalWrite(motor2A, LOW);
  digitalWrite(motor2B, LOW);
}
