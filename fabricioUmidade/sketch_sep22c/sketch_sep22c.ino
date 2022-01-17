#define pinAnalog A0
#define pinDigital 13


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinDigital, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*if(digitalRead(pinDigital)){
    Serial.print("0");
  }
  else{
    Serial.print("1");
  }*/
  //Serial.print(analogRead(pinAnalog));
  Serial.print("\n");
  if(analogRead(pinAnalog)> 950){
    Serial.print("Seco");
  }
  else {
    Serial.print("Umido");
  }
}
