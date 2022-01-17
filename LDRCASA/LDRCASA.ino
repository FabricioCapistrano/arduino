int a;
void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
}

void loop() {
  a = analogRead(A0);        
  if(a<950){
    digitalWrite(6, HIGH);
  }
  else{
    digitalWrite(6, LOW);
  }
}
