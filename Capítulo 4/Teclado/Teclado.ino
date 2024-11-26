#include <Keypad.h>

const byte LINHAS = 4; // NÚMERO DE LINHAS
const byte COLUNAS = 4; // NÚMERO DE COLUNAS

char teclado[LINHAS][COLUNAS] = { // MAPEAMENTO DE TECLAS
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte pinosLinhas[LINHAS] = {2, 3, 4, 5};   // PINOS CONECTADOS ÀS LINHAS DO TECLADO
byte pinosColunas[COLUNAS] = {6, 7, 8, 9};  // PINOS CONECTADOS ÀS COLUNAS DO TECLADO

// CRIANDO OBJETO KEYPAD

Keypad tecladoMatricial = Keypad(makeKeymap(teclado), pinosLinhas, pinosColunas, LINHAS, COLUNAS);

void setup() {

  Serial.begin(9600);  // INICIA A COMUNICAÇÃO SERIAL
}

void loop() {

  char tecla = tecladoMatricial.getKey();   // RECEBE O VALOR DA TECLA PRESSIONADA

  if (tecla) {  // CASO UMA TECLA SEJA PRESSIONADA

    Serial.print("Tecla pressionada: ");
    Serial.println(tecla);  // MOSTRA O VALOR DA TECLA NO MONITOR SERIAL
  }
}
