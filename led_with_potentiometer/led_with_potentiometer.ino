const int passiveBuzzer = 9;
const int readPin = A5;

void setup() {
  pinMode(readPin, INPUT);
  pinMode(passiveBuzzer, OUTPUT); 
}

void loop() {
  int value = (analogRead(readPin) / 100) / 2;
  analogWrite(passiveBuzzer, value);
}