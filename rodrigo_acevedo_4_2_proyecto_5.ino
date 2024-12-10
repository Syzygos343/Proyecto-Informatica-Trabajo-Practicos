#define trigPin 2         
#define echoPin 3        
#define motionPin 2       
#define rojo 9           
#define verde 11          
#define azul 10            
#define buzzer 7          
#define umbralDistancia 100 


void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(motionPin, INPUT);
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int movimiento = digitalRead(motionPin);
  float distancia = medirDistancia();

  if (movimiento == HIGH) { 
    if (distancia < umbralDistancia) { 
      alertaProximidad();
    } else { 
      detectarMovimiento();
    }
  } else { 
    areaSegura();
  }

  delay(100);
}

float medirDistancia() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duracion = pulseIn(echoPin, HIGH);
  float distancia = (duracion * 0.0343) / 2; 
  Serial.print("Distancia medida: ");
  Serial.print(distancia);
  Serial.println(" cm");
  return distancia;
}

void areaSegura() {
  apagarLuces();
  digitalWrite(verde, HIGH); 
  noTone(buzzer);           
}

void detectarMovimiento() {
  apagarLuces();
  digitalWrite(rojo, HIGH);
  digitalWrite(verde, HIGH); 
  secuenciaLuces();
  tone(buzzer, 1000, 500);   
}

void alertaProximidad() {
  apagarLuces();
  digitalWrite(rojo, HIGH); 
  tone(buzzer, 2000, 1000); 
}

void apagarLuces() {
  digitalWrite(rojo, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(azul, LOW);
}

void secuenciaLuces() {
  digitalWrite(azul, HIGH);
  delay(200);
  digitalWrite(azul, LOW);
  digitalWrite(verde, HIGH);
  delay(200);
  digitalWrite(verde, LOW);
  digitalWrite(rojo, HIGH);
  delay(200);
  digitalWrite(rojo, LOW);
}