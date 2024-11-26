int direcao = 4;   // PINO DE DIREÇÃO
int pulso = 3;  // PINO DE PULSO
int enable = 5; // PINO DE HABILITAÇÃO

void setup() {
  pinMode(direcao, OUTPUT);
  pinMode(pulso, OUTPUT);
  pinMode(enable, OUTPUT);

  digitalWrite(enable, LOW);  // HABILITA O DRIVER
}

void loop() {

  digitalWrite(direcao, HIGH);  // DEFINE A DIREÇÃO
  
  for (int i = 0; i < 200; i++) {  // NUMERO DE PASSOS (200 passos = 1 volta em um motor de 1,8 graus por passo)
    digitalWrite(pulso, HIGH);  // EMISSÃO DE PULSO
    delayMicroseconds(1000);  // DURAÇÃO DO PULSO
    digitalWrite(pulso, LOW);   // FIM DO PULSO
    delayMicroseconds(1000);  // TEMPO ENTRE OS PULSOS
  }

  delay(1000);  // ESPERA 1 SEGUNDO

  digitalWrite(direcao, LOW);  // DEFINE DIREÇÃO OPOSTA

  for (int i = 0; i < 200; i++) {
    digitalWrite(pulso, HIGH);
    delayMicroseconds(1000);
    digitalWrite(pulso, LOW);
    delayMicroseconds(1000);
  }

  delay(1000);  // Espera 1 segundo
}

