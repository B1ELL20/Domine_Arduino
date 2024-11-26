

void setup() {
  
  Serial.begin(9600);  // INICIA A COMUNICAÇÃO SERIAL
}

void loop() {
  
  int pot  = analogRead(A0);  // LÊ A PORTA ANALÓGICA A0
  Serial.println(pot);        // IMPRIME O VALOR LIDO
  delay(500);                 // ESPERA 0,5 SEGUNDOS
}
