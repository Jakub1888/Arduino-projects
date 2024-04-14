const int firstLED = 4;
const int secondLED = 8;
const int thirdLED = 12;
const int fourthLED = 13;

void setup() {
  pinMode(firstLED, OUTPUT);
  pinMode(secondLED, OUTPUT);
  pinMode(thirdLED, OUTPUT);
  pinMode(fourthLED, OUTPUT);
}

void loop() {
  lightUpLeds(LOW, LOW, LOW, LOW);
  lightUpLeds(HIGH, LOW, LOW, LOW);
  lightUpLeds(LOW, HIGH, LOW, LOW);
  lightUpLeds(HIGH, HIGH, LOW, LOW);
  lightUpLeds(LOW, LOW, HIGH, LOW);
  lightUpLeds(HIGH, LOW, HIGH, LOW);
  lightUpLeds(LOW, HIGH, HIGH, LOW);
  lightUpLeds(HIGH, HIGH, HIGH, LOW);
  lightUpLeds(LOW, LOW, LOW, HIGH);
  lightUpLeds(HIGH, LOW, LOW, HIGH);
  lightUpLeds(LOW, HIGH, LOW, HIGH);
  lightUpLeds(HIGH, HIGH, LOW, HIGH);
  lightUpLeds(LOW, LOW, HIGH, HIGH);
  lightUpLeds(HIGH, LOW, HIGH, HIGH);
  lightUpLeds(LOW, HIGH, HIGH, HIGH);
  lightUpLeds(HIGH, HIGH, HIGH, HIGH);
}

void lightUpLeds(int firstValue, int secondValue, int thirdValue, int fourthValue) {
  digitalWrite(firstLED, firstValue);
  digitalWrite(secondLED, secondValue);
  digitalWrite(thirdLED, thirdValue);
  digitalWrite(fourthLED, fourthValue);
  delay(1500);
}
