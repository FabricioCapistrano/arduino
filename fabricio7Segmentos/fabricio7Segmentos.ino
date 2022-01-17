int conta; //
 
byte displaySeteSeg[10][7] = { 
  
 { 1,1,1,1,1,1,0 },  //DIGITO 0
 { 0,1,1,0,0,0,0 },  //DIGITO 1
 { 1,1,0,1,1,0,1 },  //DIGITO 2
 { 1,1,1,1,0,0,1 },  //DIGITO 3
 { 0,1,1,0,0,1,1 },  //DIGITO 4
 { 1,0,1,1,0,1,1 },  //DIGITO 5
 { 1,0,1,1,1,1,1 },  //DIGITO 6
 { 1,1,1,0,0,0,0 },  //DIGITO 7
 { 1,1,1,1,1,1,1 },  //DIGITO 8
 { 1,1,1,1,0,1,1 }   //DIGITO 9
 
};
  
void setup(){
 
  //Definindo pinos como saída
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10,INPUT);
 
  //inicializa display com número 0
  conta = 0;
  ligaSegmentosDisplay(conta);
    
}
 
void loop() {
 
  if(digitalRead(10)== LOW){ //Se o botão for pressionado soma +1 no display
     
    delay(500);
 
    conta++; //incremento
 
    if(conta == 10){ //Se passar de 9 reseta o display para 0
      conta = 0; 
      ligaSegmentosDisplay(conta);
    }
    else{ //Se não mostra no display o próximo número
      ligaSegmentosDisplay(conta);
    }
       
  }
   
}
 
void ligaSegmentosDisplay(byte digito){ //função para acionar o display com o digito correspondente
   
  byte pino = 2;
   
  //Liga os segmentos de acordo com o digito correspondente
  for (byte contadorSegmentos = 0; contadorSegmentos < 7; ++contadorSegmentos){ 
    digitalWrite(pino, displaySeteSeg[digito][contadorSegmentos]);
    ++pino; 
  }
}
