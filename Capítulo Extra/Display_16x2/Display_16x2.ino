#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // INICIALIZA O DISPLAY COM OS PINOS RS, E, D4, D5, D6 e D7

void setup() {
  lcd.begin(16, 2); // INICIALIZA O LCD COM 16 COLUNAS E 2 LINHAS
  lcd.print("Hello, World!"); // EXIBE MENSAGEM INICIAL
}

void loop() {
  
  lcd.setCursor(0, 1); // MOVE O CURSOR PARA SEGUNDA LINHA
  lcd.print(millis() / 1000); // EXIBE TEMPO EM SEGUNDOS
  delay(1000);
}
