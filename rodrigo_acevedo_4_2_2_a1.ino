void setup() {
  pinMode(1, OUTPUT); 
}

void loop() {
  analogWrite(1, 51);
  delay(1000);

  analogWrite(1, 102);
  delay(1000);

  analogWrite(1, 153);
  delay(1000);

  analogWrite(1, 204);
  delay(1000);

  analogWrite(1, 255);
  delay(1000);
}
