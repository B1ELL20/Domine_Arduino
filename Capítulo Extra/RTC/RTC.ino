#include <Wire.h>
#include <RTClib.h>

RTC_DS3231 rtc;  // Cria objeto RTC

void setup() {

  Serial.begin(9600);
  Wire.begin();

  if (!rtc.begin()) {  // INICIALIZA O RTC

    Serial.println("Couldn't find RTC");
    while (1);
  }

  if (rtc.lostPower()) { // SE O RTC PERDEU ENERGIA, CONFIGURA A HORA E A DATA
    
    Serial.println("RTC lost power, setting the time!");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__))); // AJUSTA DE ACORDO COM A HORA DA COMPILAÇÃO

    // PARA DEFINIR MANUALMENTE
    // rtc.adjust(DateTime(2023, 10, 7, 12, 0, 0)); // Ex: 7 de outubro de 2023, 12:00:00
  }
}

void loop() {
  DateTime now = rtc.now();

  // Exibe a data e a hora
  Serial.print(now.year(), DEC);
  Serial.print('/');
  Serial.print(now.month(), DEC);
  Serial.print('/');
  Serial.print(now.day(), DEC);
  Serial.print(" ");
  Serial.print(now.hour(), DEC);
  Serial.print(':');
  Serial.print(now.minute(), DEC);
  Serial.print(':');
  Serial.print(now.second(), DEC);
  Serial.println();

  delay(1000); // Atualiza a cada segundo
}

