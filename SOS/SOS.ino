const int redLED = 8;
const int greenLED = 7;
const int yellowLED = 4;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  blink(3, redLED, 50);
  blink(3, greenLED, 500);
  blink(3, yellowLED, 50);
  delay(1000);
}

void blink(int iterations, int pin, int delayTime) {
  for (int i = 0; i < iterations; i++) {
      digitalWrite(pin, HIGH);
      delay(delayTime);
      digitalWrite(pin, LOW);
      delay(delayTime);
    }
}
