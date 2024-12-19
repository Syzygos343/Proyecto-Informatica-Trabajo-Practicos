#define boton A0
int contador = 1;
bool botonPresionado = false;

void setup() {
  pinMode(boton, INPUT_PULLUP);

  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  encenderTodos();
}

void loop() {
  if (digitalRead(boton) == LOW) {
    if (!botonPresionado) {
      botonPresionado = true;
      contador++;
      if (contador > 9) {
        contador = 1;
      }
      apagarTodos();
      prenderLED(contador);
    }
  } else {
    botonPresionado = false;
  }
}

void encenderTodos() {
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
}

void apagarTodos() {
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}

void prenderLED(int led) {
  switch (led) {
    case 1:
      digitalWrite(1, HIGH);
      break;
    case 2:
      digitalWrite(2, HIGH);
      break;
    case 3:
      digitalWrite(3, HIGH);
      break;
    case 4:
      digitalWrite(4, HIGH);
      break;
    case 5:
      digitalWrite(5, HIGH);
      break;
    case 6:
      digitalWrite(6, HIGH);
      break;
    case 7:
      digitalWrite(9, HIGH);
      break;
    case 8:
      digitalWrite(10, HIGH);
      break;
    case 9:
      digitalWrite(11, HIGH);
      break;
    default:
      apagarTodos();
      break;
  }
}


