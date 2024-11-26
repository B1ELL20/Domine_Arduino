
int porta_led = 13;

void setup() {
  
  pinMode(porta_led, OUTPUT);  

}

void loop() {
  
  digitalWrite(porta_led, HIGH);
  delay(1000);
  digitalWrite(porta_led, LOW);
  delay(1000);
}
