void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  int maxIntensity = 255;
  int decrement = 255 / 10; 

  for (int i = 1; i <= 10; i++) {
    analogWrite(i, maxIntensity - (i - 1) * decrement); 
    delay(500);
  }
}
