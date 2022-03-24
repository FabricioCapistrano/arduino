const int pinoLed = 13;
const int pinoLDR = A0; 
  
void setup(){
  Serial.begin(9600);
  pinMode(pinoLed, OUTPUT);
  pinMode(pinoLDR, INPUT); 
}    
void loop(){
  Serial.println(analogRead(pinoLDR));
  if(analogRead(pinoLDR) > 600){
      digitalWrite(pinoLed, HIGH); 
  }  
  else{
    digitalWrite(pinoLed, LOW);
  }
}
