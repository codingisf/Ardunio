const int Pontentiometer = A0;
const int LED = 3;

void setup() {
  pinMode(Pontentiometer,INPUT);
  pinMode(LED,OUTPUT);

}

void loop() {
int val = analogRead(Pontentiometer);
int Bright = map(val,0,1023,0,255);
analogWrite(LED,Bright);
delay(10);

}
