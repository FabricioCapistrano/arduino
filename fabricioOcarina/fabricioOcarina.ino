#define cima 13
#define baixo 12
#define esquerda 11
#define direita 10
#define aButton 9
#define bButton 8

void setup() {
  // put your setup code here, to run once:
  pinMode(cima, INPUT_PULLUP);
  pinMode(baixo, INPUT_PULLUP);
  pinMode(esquerda, INPUT_PULLUP);
  pinMode(direita, INPUT_PULLUP);
  pinMode(aButton, INPUT_PULLUP);
  pinMode(bButton, INPUT_PULLUP);
  pinMode(5, OUTPUT);
}

void loop() {
    if(digitalRead(cima) == LOW){
      tone(5, 261);
      noTone(5);
    }
    else if(digitalRead(direita) == LOW){
      tone(5, 293);
      noTone(5);
    }
    else if(digitalRead(esquerda) == LOW){
      tone(5, 329);
      noTone(5);
    }
    else if(digitalRead(direita) == LOW){
      tone(5, 349);
      noTone(5);
    }
    else if(digitalRead(aButton) == LOW){
      tone(5, 392);
      noTone(5);
    }
    else if(digitalRead(bButton) == LOW){
      tone(5, 429);
      noTone(5);
    }
  // put your main code here, to run repeatedly:

}
