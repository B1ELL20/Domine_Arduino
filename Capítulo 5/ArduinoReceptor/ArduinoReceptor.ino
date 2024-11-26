#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); // RX, TX

void setup() {

  Serial.begin(9600); // INICIALIZA A COMUNICAÇÃO SERIAL COM O COMPUTADOR
  mySerial.begin(9600); // INICIALIZA A COMUNICAÇÃO SERIAL COM O ARDUINO 2
}

void loop() {

  if (mySerial.available()) {

    int value = mySerial.parseInt(); // LÊ A SERIAL, ENCONTRANDO O NÚMERO ENVIADO PELO OUTRO ARDUINO

    Serial.print("Valor Recebido: ");  // MOSTRA O VALOR NO MONITOR SERIAL
    Serial.println(value);
  }
  
}
