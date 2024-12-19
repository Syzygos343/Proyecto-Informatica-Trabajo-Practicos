int buttonPin = 4;
int redPin = 1;
int greenPin = 2;
int bluePin = 3;

int colorIndex = 0;
bool buttonState = false;
bool lastButtonState = false;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
}

void loop() {
  buttonState = digitalRead(buttonPin) == LOW;

  if (buttonState && !lastButtonState) {
    colorIndex = (colorIndex + 1) % 7;
    changeColor(colorIndex);
  }

  lastButtonState = buttonState;
}

void changeColor(int index) {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);

  switch (index) {
    case 0:
      digitalWrite(redPin, HIGH);
      break;
    case 1:
      digitalWrite(greenPin, HIGH);
      digitalWrite(bluePin, HIGH);
      break;
    case 2:
      digitalWrite(greenPin, HIGH);
      break;
    case 3:
      digitalWrite(redPin, HIGH);
      digitalWrite(bluePin, HIGH);
      break;
    case 4:
      digitalWrite(bluePin, HIGH);
      break;
    case 5:
      digitalWrite(redPin, HIGH);
      digitalWrite(greenPin, HIGH);
      digitalWrite(bluePin, HIGH);
      break;
    case 6:
      digitalWrite(redPin, HIGH);
      digitalWrite(greenPin, HIGH);
      break;
  }
}

