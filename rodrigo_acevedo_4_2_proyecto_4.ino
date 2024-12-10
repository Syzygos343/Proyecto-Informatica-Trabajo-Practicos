#define TMP35 A0
#define LDR A1
#define rojo 11
#define verde 10
#define azul 9

void setup() {
  pinMode(LDR, INPUT);
  pinMode(TMP35, INPUT);
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  float x = analogRead(TMP35);
  float TEMP = (x * 5.0 / 1024) * 100 - 50;

  int luz = analogRead(LDR);
  int mappedLuz = map(luz, 0, 1023, 100, 0); 

  Serial.print("El nivel de luz actual es: ");
  Serial.println(mappedLuz);
  Serial.print("La temperatura actual es: ");
  Serial.print(TEMP);
  Serial.println("°C");

  if (mappedLuz >= 30 && mappedLuz <= 70) { 
    if (TEMP <= 18) {
      digitalWrite(azul, HIGH);
      digitalWrite(verde, LOW);
      digitalWrite(rojo, LOW);
    } else if (TEMP >= 90) {
      digitalWrite(azul, LOW);
      digitalWrite(verde, LOW);
      digitalWrite(rojo, HIGH);
    } else { 
      digitalWrite(azul, LOW);
      digitalWrite(verde, HIGH);
      digitalWrite(rojo, LOW);
    }
  } else { 
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(azul, LOW);
  }

  delay(500); 
}
