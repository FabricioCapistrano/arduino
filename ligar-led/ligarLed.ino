void setup(){
    //seleciona uma porta e configura ela como saída
    pinMode(6, OUTPUT);
}
void loop(){
    //envia energia para a porta selecionada
    digitalWrite(6, HIGH);
    delay(600);
    //desliga a energia da porta selecionada
    digitalWrite(6, LOW);
    delay(600);
}
