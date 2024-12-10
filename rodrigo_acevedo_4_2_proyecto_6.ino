void setup() {
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT); 
  pinMode(11, OUTPUT); 
}

void loop() {
  for (int r = 0; r <= 255; r += 51) { 
    for (int g = 0; g <= 255; g += 51) {
      for (int b = 0; b <= 255; b += 51) {
        setColor(r, g, b);
        delay(100);
      }
    }
  }
}

void setColor(int r, int g, int b) {
  analogWrite(9, r);
  analogWrite(10, g);
  analogWrite(11, b);
}
