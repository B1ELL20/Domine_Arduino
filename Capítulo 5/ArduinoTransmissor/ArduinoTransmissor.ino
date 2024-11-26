#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); // RX, TX

void setup() {

  Serial.begin(9600); // INICIALIZA A COMUNICAÇÃO SERIAL COM O COMPUTADOR
  mySerial.begin(9600); // INICIALIZA A COMUNICAÇÃO SERIAL COM O ARDUINO 2
}

void loop() {

  for (int i = 0; i < 5; i++) {

    mySerial.println(i); // ENVIA O NÚMERO i PARA O OUTRO ARDUINO
    delay(1000); 
  }

}
