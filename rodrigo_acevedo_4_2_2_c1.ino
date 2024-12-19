int redPin = 1;
int greenPin = 2;
int bluePin = 3;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  showColor(0, 128, 128);
  delay(1000);
  showColor(0, 192, 192);
  delay(1000);
  showColor(0, 255, 255);
  delay(1000);

  showColor(128, 0, 0);
  delay(1000);
  showColor(192, 0, 0);
  delay(1000);
  showColor(255, 0, 0);
  delay(1000);

  showColor(255, 255, 0);
  delay(1000);
  showColor(255, 204, 0);
  delay(1000);
  showColor(255, 153, 0);
  delay(1000);
}

void showColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}


