void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  if(analogRead(A0) > 800){
    Serial.print("Umido\n");
  }
  else{
    Serial.print("Seco\n");
  }
  delay(1000);
}
