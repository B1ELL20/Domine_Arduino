
int porta_botao = 2;            // GUARDA VALOR DA PORTA DO BOTÃO
int porta_led = 13;             // GUARDA VALOR DA PORTA DO LED
bool estado_botao = false;      // GUARDA VALOR DO ESTADO DO BOTÃO
bool estado_ant_botao = false;  // GUARDA VALOR DO ESTADO ANTERIOR DO BOTÃO

void setup() {
  
  pinMode(porta_botao, INPUT_PULLUP);  // COLOCA PORTA DO BOTÃO COMO ENTRADA COM PULLUP
  pinMode(porta_led, OUTPUT);          // COLOCA PORTA DO LED COMO SAÍDA
}

void loop() {
  
  estado_botao = digitalRead(porta_botao);  // LÊ A PORTA DO BOTÃO E GUARDA O VALOR LIDO

  if (estado_botao == LOW && estado_ant_botao == false) {

    digitalWrite(porta_led, HIGH);
    estado_ant_botao = true;
  
  } else if (estado_botao == HIGH && estado_ant_botao == true) {

    digitalWrite(porta_led, LOW);
    estado_ant_botao = false;
  }
}
