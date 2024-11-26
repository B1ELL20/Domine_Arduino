int relayPin = 7; // PINO DE SINAL DO RELE

void setup() {
  
  pinMode(relayPin, OUTPUT); //DEFINE O PINO DO RELE COMO SAÍDA
}

void loop() {

  digitalWrite(relayPin, HIGH); // LIGA O RELE

  delay(1000); // AGUARDA 1 SEGUNDO

  digitalWrite(relayPin, LOW); // DESLIGA O RELE

  delay(1000); // AGURADA 1 SEGUNDO
}
