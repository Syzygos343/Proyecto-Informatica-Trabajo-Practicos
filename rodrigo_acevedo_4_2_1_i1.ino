#define boton 11

int ledCount = 10;
int currentLed = 0;
bool botonPresionado = false;
bool secuenciaEnCurso = false;

void setup()
{
  pinMode(boton, INPUT_PULLUP);

  for (int i = 1; i <= ledCount; i++) {
    pinMode(i, OUTPUT);
  }

  apagarLEDs();
}

void loop()
{
  bool estadoBoton = digitalRead(boton) == LOW;

  if (estadoBoton && !botonPresionado) {
    botonPresionado = true;
    secuenciaEnCurso = !secuenciaEnCurso;
    
    if (!secuenciaEnCurso) {
      apagarLEDs();
    }
  } else if (!estadoBoton) {
    botonPresionado = false;
  }

  if (secuenciaEnCurso) {
    digitalWrite(currentLed + 1, HIGH);
    delay(150);
    digitalWrite(currentLed + 1, LOW);
    currentLed++;

    if (currentLed >= ledCount) {
      currentLed = 0;
    }
  }
}

void apagarLEDs() {
  for (int i = 1; i <= ledCount; i++) {
    digitalWrite(i, LOW);
  }
}
