int buzzer = 12;

int buttonPin = 7;//Define buttonPin no pino digital 7
int ledPin = 10;//Define ledPin no pino digital 10
int estadoButton = 0;//Variável responsável por armazenar o estado do botão (ligado/desligado)

int buttonPin2 = 5;//Define buttonPin no pino digital 7
int ledPin2 = 8;//Define ledPin no pino digital 10
int estadoButton2 = 0;//Variável responsável por armazenar o estado do botão (ligado/desligado)

void setup(){
  // Define o pino do Buzzer como Saida 
  pinMode(buzzer,OUTPUT);

  pinMode(ledPin , OUTPUT);//Define ledPin (pino 10) como saída
  pinMode(buttonPin , INPUT);//Define buttonPin (pino 7) como entrada

  pinMode(ledPin2 , OUTPUT);//Define ledPin (pino 8) como saída
  pinMode(buttonPin2 , INPUT);//Define buttonPin (pino 7) como entrada
}

void loop(){
  estadoButton = digitalRead(buttonPin);//Lê o valor de buttonPin e armazena em estadoButton
  estadoButton2 = digitalRead(buttonPin2);//Lê o valor de buttonPin e armazena em estadoButton
  if (estadoButton == HIGH) {//Se estadoButton for igual a HIGH ou 1
     // Aciona o buzzer na frequencia relativa ao Dó em Hz
    tone(buzzer,261);    
    // Espera um tempo para Desativar
    delay(100); 
    digitalWrite(ledPin , HIGH);//Define ledPin como HIGH, ligando o LED
    delay(100);//Intervalo de 100 milissegundos
  }
  else if (estadoButton2 == HIGH) { //Senão = estadoButton for igual a LOW ou 0
    // Aciona o buzzer na frequencia relativa ao Sol em Hz   
    tone(buzzer,392);             
    delay(100);  
    digitalWrite(ledPin2 , HIGH);//Define ledPin como HIGH, ligando o LED
    delay(100);//Intervalo de 100 milissegundos
  }
  else { //Senão = estadoButton for igual a LOW ou 0
    digitalWrite(ledPin, LOW);//Define ledPin como LOW, desligando o LED
    digitalWrite(ledPin2, LOW);
    noTone(buzzer);
  }  
}