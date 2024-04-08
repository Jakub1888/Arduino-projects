const int redPin = 9;

void setup() {
  pinMode(redPin, OUTPUT);
}

void loop() {
  analogWrite(redPin, 255);
  delay(1000);
  analogWrite(redPin, 30);
  delay(1000);
}
