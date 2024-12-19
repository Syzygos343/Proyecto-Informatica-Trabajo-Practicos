// C++ code
//
void setup()
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);


}

void loop()
{
  //primera secuencia
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(10, LOW);

  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(1500); 
  
  //segunda secuencia
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(10, LOW);

  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(1500); 
  
  //tercera secuencia
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(10, HIGH);

  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(1500);   
  
}