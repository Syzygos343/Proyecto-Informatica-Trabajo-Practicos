const int potRojoPin = A0;  
const int potAzulPin = A1;   
const int potVerdePin = A2;  
const int ledRojoPin = 9;    
const int ledAzulPin = 10;   
const int ledVerdePin = 11; 
const int botonPin = A3;    

bool botonPresionado = false;

void setup() {
  pinMode(ledRojoPin, OUTPUT);
  pinMode(ledAzulPin, OUTPUT);
  pinMode(ledVerdePin, OUTPUT);

  pinMode(botonPin, INPUT);

  Serial.begin(9600);
}

void loop() {
  if (digitalRead(botonPin) == HIGH && !botonPresionado) {
    botonPresionado = true;
    Serial.println("El LED RGB ha sido apagado. Tiene 5s para configurar los colores...");

    analogWrite(ledRojoPin, 0);
    analogWrite(ledAzulPin, 0);
    analogWrite(ledVerdePin, 0);

    delay(5000);

    int valorRojo = map(analogRead(potRojoPin), 0, 1023, 0, 255);
    int valorAzul = map(analogRead(potAzulPin), 0, 1023, 0, 255);
    int valorVerde = map(analogRead(potVerdePin), 0, 1023, 0, 255);

    Serial.print("El LED está usando esta configuración de colores RGB: (");
    Serial.print(valorRojo);
    Serial.print(", ");
    Serial.print(valorVerde);
    Serial.print(", ");
    Serial.print(valorAzul);
    Serial.println(")");

    analogWrite(ledRojoPin, valorRojo);
    analogWrite(ledAzulPin, valorAzul);
    analogWrite(ledVerdePin, valorVerde);

    botonPresionado = false;
  }
}
