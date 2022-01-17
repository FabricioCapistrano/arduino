//motor dcs
void setup() {
pinMode(1, OUTPUT);
pinMode(3, OUTPUT); 
}

void loop() 
{
digitalWrite(1, HIGH);
delay(900)
digitalWrite(3, LOW);
delay(900);

digitalWrite(1, LOW);
digitalWrite(3, HIGH);
delay(900);
}
