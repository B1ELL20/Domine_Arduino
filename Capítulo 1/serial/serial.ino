
void setup() {

  Serial.begin(9600);  // INICIAMOS A COMUNICAÇÃO SERIAL
  
  Serial.println("Principios da comunicacao serial"); // Imprime no monitor serial os textos escritos
  Serial.print("Digite uma letra...");
  Serial.print("");
}

void loop() {
  
  if (Serial.available() > 0) {                 // VERIFICA SE CHEGOU ALGUMA COISA NA SERIAL

    char c = Serial.read();                     // CASO SIM, GUARDA O VALOR NA VARIÁVEL c

    Serial.print("Voce digitou a letra: ");   // EM SEGUIDA IMPRIME NA TELA O VALOR RECEBIDO
    Serial.println(String(c)); 
  }
}
