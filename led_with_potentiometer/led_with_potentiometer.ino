const int readPin = A5;

void setup() {
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  const float calcVal = (5. / 1023.) * (analogRead(readPin));
  Serial.print(calcVal);
  Serial.println();
  delay(500);
}
