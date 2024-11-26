
int porta_led = 10;  // DEFINE A PORTA DO LED

void setup() {
  
  pinMode(porta_led, OUTPUT);  // COLOCA PORTA DO LED COMO SAÍDA
}

void loop() {
  
  int ldr = analogRead(A0);  // RECEBE OS VALORES LIDOS NA PORTA A0
  analogWrite(porta_led, ldr / 4);  // ESCREVE OS VALORES RECEBIDOS NA PORTA DO LED
}
