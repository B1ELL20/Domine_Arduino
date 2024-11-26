
void setup() {
  
  Serial.begin(9600);  // INICIA A COMUNICAÇÃO SERIAL
}

void loop() {
  
  int tmp36  = analogRead(A0);  // LÊ A PORTA ANALÓGICA A0

  float temperatura = map(tmp36, 0, 1023, 5, 100); // MAPEIA A TEMPERATURA

  Serial.print(temperatura);        // IMPRIME O VALOR LIDO
  Serial.println("°C");             // IMPRIME A UNIDADE DE MEDIDA
  delay(500);                 // ESPERA 0,5 SEGUNDOS
}

