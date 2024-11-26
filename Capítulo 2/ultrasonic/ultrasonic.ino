
int trig = 9;
int echo = 10;
long tempo = 0;
int distancia = 0;

void setup() {

  Serial.begin(9600);  //INICIALIZA A COMUNICAÇÃO SERIAL

  pinMode(trig, OUTPUT);  // DEFINE O PINO TRIG COMO SAINDA
  pinMode(echo, INPUT);   // DEFINE O PINO ECHO COMO ENTRADA
}

void loop() {

  digitalWrite(trig, LOW); // DESLIGA O PINO TRIG POR 2 MICROSSEGUNDOS
  delayMicroseconds(2);

  digitalWrite(trig, HIGH); // LIGA O PINO TRIG POR 10 MICROSSEGUNDOS
  delayMicroseconds(10);
  digitalWrite(trig, LOW);  // DESLIGA O PINO TRIG

  tempo = pulseIn(echo, HIGH); // LÊ O TEMPO QUE O SINAL LEVA PARA VOLTAR AO PINO ECHO

  distancia = tempo * 0.0344 / 2; // APLICA A FORMULA PARA CALCULAR A DISTÂNCIA

  Serial.print("Distância: ");  // MOSTRA A DISTANCIA NO MONITOR SERIAL
  Serial.print(distancia);
  Serial.println(" cm");

  delay(500);
}

