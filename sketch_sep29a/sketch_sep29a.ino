void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:  
  // Liga a porta  
  // LED vermelho
 digitalWrite(7, HIGH);
 delay(1200);
 digitalWrite(7, LOW);
 delay(1200);

  // LED Verde
 digitalWrite(5, HIGH);
 delay(700);
 digitalWrite(5, LOW);
 delay(700);

 // LED Amarelo
 digitalWrite(3, HIGH);
 delay(400);
 digitalWrite(3, LOW);
 delay(400);
}
