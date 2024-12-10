// C++ code
//
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop()
{
  //Primera secuencia:
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(9, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(1000);
  //Segunda secuencia:
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(1000);
  //Tercera secuencia:
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
  //Cuarta secuencia:
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(9, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(1000);  
  
  
}