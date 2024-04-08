const int pinDelay = 2500;
  
void setup() {
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
 digitalWrite(7, HIGH);
 delay(pinDelay);
 digitalWrite(7, LOW);
 digitalWrite(6, HIGH);
 delay(1000);
 digitalWrite(6, LOW);
 digitalWrite(5, HIGH);
 delay(pinDelay);
 digitalWrite(5, LOW);
}
