int pinoSensorLuz = A0;
int pinoBuzzer = 6;               
int valorLuz = 0;                      
 
void setup()
{        
    // configura pino do buzzer como saída
    pinMode(pinoBuzzer,OUTPUT);
}
 
void loop()
{
  valorLuz = analogRead(pinoSensorLuz);        
  if(valorLuz<950)
  {                
    digitalWrite(6, HIGH);
  }
  else
  {                    
    digitalWrite(6, LOW);
  }
  delay(10);                   
}
