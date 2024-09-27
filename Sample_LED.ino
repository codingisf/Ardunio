const int LEDpin = 2;

void setup() {

pinMode(LEDpin,OUTPUT);
}

void loop() {
  digitalWrite(LEDpin,1);
  delay(500);
  digitalWrite(LEDpin,0);
  delay(500);

}
