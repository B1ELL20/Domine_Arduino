#include <IRremote.h>

const int receiverPin = 2; // PINO DO RECEPTOR IR
IRrecv irrecv(receiverPin);  // OBJETO REFERENTE AO RECEPTOR
decode_results resultado;  // CRIA UMA VARIÁVEL RESULTADO

void setup() {

  Serial.begin(9600); // INICIALIZA COMUNICAÇÃO SERIAL

  irrecv.enableIRIn(); // INICIA O RECEPTOR IR
}

void loop() {

  if (irrecv.decode(&resultado)) {  // LÊ O CÓDIGO ENVIADO DO CONTROLE E ARMAZENA EM "RESULTADO"

    Serial.print("Código recebido: ");
    Serial.println(resultado.value, HEX); // MOSTRA O VALOR DO CÓDIGO EM HEXADECIMAL
    irrecv.resume(); // RECEBE O PRÓXIMO VALOR
  }
}

// Switch Case para implementação de lógica

switch (resultado.value) {

  case 0xF3A45D: // EXEMPLO DE CÓDIGO

    Serial.println("Botão 1 pressionado!");
    break;

  case 0xF7FF3D: // EXEMPLO DE CÓDIGO

    Serial.println("Botão 2 pressionado!");
    break;
}
