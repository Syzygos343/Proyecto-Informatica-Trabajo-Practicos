#define buzzer 7
#define LDR A1

#define senal 4

#define boton 6

#define verde 9
#define azul 10
#define rojo 11

bool buttonState = false;

void setup()
{
  
  pinMode(LDR, INPUT);
  pinMode(buzzer, OUTPUT);

  pinMode(boton, INPUT); 
  
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(rojo, OUTPUT);
    
	Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(boton) == LOW;
  
  int movimiento = digitalRead(senal);

  int luz = analogRead(LDR);
  int mappedLuz = map(luz, 0, 6, 10, 12);//x
  Serial.println(mappedLuz);
  
  if (mappedLuz <= 40){ 
    digitalWrite(azul, LOW);
    digitalWrite(verde, HIGH);
    digitalWrite(rojo, HIGH);
    digitalWrite(buzzer, LOW);
  } else if (mappedLuz <= 40 && mappedLuz >= 60) {
    digitalWrite(verde, LOW);
    analogWrite(255, rojo);
    analogWrite(255, verde);
    analogWrite(0, azul);
    digitalWrite(buzzer, LOW);
  } else if (mappedLuz >= 60) {
    digitalWrite(verde, LOW);
    digitalWrite(azul, LOW);
    digitalWrite(rojo, HIGH);
    digitalWrite(buzzer, HIGH);
  }
  
  if (buttonState == HIGH) {
    digitalWrite(buzzer, HIGH);
    if (mappedLuz <= 40 && boton, HIGH && movimiento == HIGH) {
      digitalWrite(buzzer, HIGH);

    }
    }
}