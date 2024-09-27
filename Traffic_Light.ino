const int greenLED=2;
const int yellowLED = 3;
const int redLED = 4;

void setup() {
 pinMode(greenLED,OUTPUT);
 pinMode(yellowLED,OUTPUT);
 pinMode(redLED,OUTPUT);

}

void loop() {
    digitalWrite(redLED,1);
  digitalWrite(yellowLED,0);
  digitalWrite(greenLED,0);
  delay(3000); 
    digitalWrite(redLED,0);
  digitalWrite(yellowLED,1);
  digitalWrite(greenLED,0);
  delay(3000);
     digitalWrite(redLED,0);
  digitalWrite(yellowLED,0);
  digitalWrite(greenLED,1);
  delay(3000);

}
