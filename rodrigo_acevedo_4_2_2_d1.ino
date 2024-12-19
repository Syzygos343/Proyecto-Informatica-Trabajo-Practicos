#define potenciometro A0
#define verde1 5
#define azul1 6
#define rojo1 7

#define verde2 9
#define azul2 10
#define rojo2 11

void setup() {
  pinMode(verde1, OUTPUT);
  pinMode(azul1, OUTPUT);
  pinMode(rojo1, OUTPUT);
  
  pinMode(verde2, OUTPUT);
  pinMode(azul2, OUTPUT);
  pinMode(rojo2, OUTPUT);
}

void loop() {
  int valorPot = analogRead(potenciometro);
  int velocidad = map(valorPot, 0, 1023, 200, 2000);
  
  digitalWrite(rojo1, HIGH);
  digitalWrite(azul1, HIGH);
  digitalWrite(verde1, LOW);
  
  digitalWrite(rojo2, HIGH);
  digitalWrite(azul2, LOW);
  digitalWrite(verde2, HIGH);
  
  delay(1000);
  
  digitalWrite(rojo1, LOW);
  digitalWrite(azul1, LOW);
  digitalWrite(verde1, LOW);
  
  digitalWrite(rojo2, LOW);
  digitalWrite(azul2, LOW);
  digitalWrite(verde2, LOW);
  
  delay(1000);
}
