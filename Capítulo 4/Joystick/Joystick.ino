const int VRx = A0; // PINO DO EIXO X
const int VRy = A1; // PINO DO EIXO Y
const int Botao = 2;   // PINO DO BOTÃO

void setup() {

  Serial.begin(9600); // INICIALIZA A COMUNICAÇÃO SERIAL
  pinMode(Botao, INPUT_PULLUP); // DEFINE O BOTÃO COMO ENTRADA PULLUP
}

void loop() {
  int ValorX = analogRead(VRx); // LÊ O VALOR DO EIXO X
  int ValorY = analogRead(VRy); // LÊ O VALOR DO EIXO Y
  int estadoBotao = digitalRead(Botao); // LÊ O ESTADO DO BOTÃO

  // MOSTRA OS VALORES NO MONITOR SERIAL

  Serial.print("EIXO X: ");
  Serial.print(ValorX);
  Serial.print(" | EIXO Y: ");
  Serial.print(ValorY);
  Serial.print(" | BOTÃO: ");
  Serial.println(estadoBotao == LOW ? "Pressed" : "Released");

  delay(200); 
}

