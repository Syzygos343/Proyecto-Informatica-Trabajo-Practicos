// C++ code
//
int potPin = A0;       
int buttonPin = 7;     
int minDelay = 200;    
int maxDelay = 1500;   
int delayTime;         

void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); 
}

void loop() {
  int potValue = analogRead(potPin); 
  delayTime = map(potValue, 0, 1023, minDelay, maxDelay); 

  if (digitalRead(buttonPin) == LOW) { 
    apagarLuces();                     
    return;                           
  }

  // Primera secuencia:
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(9, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(delayTime);

  // Segunda secuencia:
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(delayTime);

  // Tercera secuencia:
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(delayTime);

  // Cuarta secuencia:
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(9, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(delayTime);
}

void apagarLuces() {
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}
