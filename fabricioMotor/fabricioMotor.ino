int motor_cabo1 = 5;
int motor_cabo2 = 3;

void setup() {
  pinMode(motor_cabo1, OUTPUT);
  pinMode(motor_cabo2, OUTPUT);
}

void loop() {

  analogWrite(motor_cabo1, 255);
  digitalWrite(motor_cabo2, LOW);

  delay(300);
  
  analogWrite(motor_cabo1, LOW);
  analogWrite(motor_cabo2, LOW);
  
  delay(300);
  
  analogWrite(motor_cabo1, LOW);
  digitalWrite(motor_cabo2, 255);
  
  delay(300);
  
}
