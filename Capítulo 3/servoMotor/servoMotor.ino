#include <Servo.h>

Servo meuServo;  // CRIA O OBJETO SERVO PARA CONTROLE DO SERVO MOTOR

void setup() {
  meuServo.attach(9);  // DEFINE O PINO DO CONTROLE DO SERVO MOTOR
}

void loop() {
  
  meuServo.write(0);  // GIRA O SERVO MOTOR PARA 0°
  delay(1000);  // AGUARDA 1 SEGUNDO

  meuServo.write(90);  // GIRA O SERVO MOTOR PARA 90°
  delay(1000);  // AGUARDA 1 SEGUNDO

  meuServo.write(180);  // GIRA O SERVO MOTOR PARA 180°
  delay(1000);  // AGUARDA 1 SEGUNDO
}
