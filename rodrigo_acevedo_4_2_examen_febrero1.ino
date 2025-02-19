#define Pot A0

#define verde1 3
#define azul1 4
#define rojo1 5

#define boton 7

#define verde2 11
#define azul2 13
#define rojo2 10


bool botonPresionado = true;

void setup()
{
  pinMode(Pot, INPUT);
  
  pinMode(verde1, OUTPUT);
  pinMode(azul1, OUTPUT);
  pinMode(rojo1, OUTPUT);

  pinMode(boton, INPUT_PULLUP);

  pinMode(verde2, OUTPUT);
  pinMode(azul2, OUTPUT);
  pinMode(rojo2, OUTPUT);
  
  Serial.begin(9600);

}

void loop()
{

  Serial.print(" [ ");  
  Serial.print("boton:");
  Serial.print(digitalRead(boton));
  Serial.print(" ] ");
  
  int valorPot = analogRead(Pot); 
  int delayTime = map(valorPot, 0, 1023, 3000, 300);  

  Serial.print(" [ ");
  Serial.print("Delay:");
  Serial.print(delayTime);
  Serial.print(" - ");
  Serial.print("Potenciometro:");
  Serial.print(valorPot);
  Serial.print(" ] ");
    

  
if (digitalRead(boton) == LOW) {
    if (!botonPresionado) {
      botonPresionado = true;
      digitalWrite(rojo2, LOW);
      digitalWrite(verde2, LOW);
      digitalWrite(azul2, LOW);    
	  delay(valorPot);    
    
      // naranja
      analogWrite(rojo1, 200);
      analogWrite(azul1, 0);
      analogWrite(verde1, 45);
	  delay(valorPot);
      // magenta
      analogWrite(rojo1, 150);
      analogWrite(azul1, 150);
      analogWrite(verde1, 0);
	  delay(valorPot);

      // rojo
      digitalWrite(rojo1, HIGH);
      digitalWrite(verde1, LOW);
      digitalWrite(azul1, LOW);    
	  delay(valorPot);

      // amarillo
      digitalWrite(rojo1, HIGH);
      digitalWrite(verde1, HIGH);
      digitalWrite(azul1, LOW);
	  delay(valorPot);

      // azul
      analogWrite(rojo1, 0);
      analogWrite(azul1, 130);
      analogWrite(verde1, 0);
	  delay(valorPot);
    } else {
    botonPresionado = false;
      
      digitalWrite(rojo1, LOW);
      digitalWrite(verde1, LOW);
      digitalWrite(azul1, LOW);    
	  delay(valorPot);
    
      // naranja
      analogWrite(rojo2, 210);
      analogWrite(azul2, 0);
      analogWrite(verde2, 55);
	  delay(valorPot);

      // magenta
      analogWrite(rojo2, 130);
      analogWrite(azul2, 130);
      analogWrite(verde2, 0);
	  delay(valorPot);

      // rojo
      digitalWrite(rojo2, HIGH);
      digitalWrite(verde2, HIGH);
      digitalWrite(azul2, LOW);    
	  delay(valorPot);

      // amarillo
      digitalWrite(rojo2, HIGH);
      digitalWrite(verde2, HIGH);
      digitalWrite(azul2, LOW);
	  delay(valorPot);

      // azul
      analogWrite(rojo2, 0);
      analogWrite(azul2, 150);
      analogWrite(verde2, 0);
	  delay(valorPot);
  }   
}
}

