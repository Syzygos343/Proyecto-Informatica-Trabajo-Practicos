#define boton A0
#define buzzer A1

#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define display1 9
#define display2 10

const int numeros[7][7] = {
    {1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 1, 0, 1, 0},
    {1, 0, 1, 1, 1, 0, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {0, 1, 1, 1, 0, 1, 0},
    {1, 1, 0, 1, 0, 1, 1},
    {1, 1, 0, 1, 1, 1, 1}
};

void setup() {
    pinMode(boton, INPUT);
    pinMode(buzzer, OUTPUT);

    pinMode(A, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(C, OUTPUT);
    pinMode(D, OUTPUT);
    pinMode(E, OUTPUT);
    pinMode(F, OUTPUT);
    pinMode(G, OUTPUT);

    pinMode(display1, OUTPUT);
    pinMode(display2, OUTPUT);
}

void loop() {
    if (analogRead(boton) > 512) {
        delay(50);
        while (analogRead(boton) > 512);
        int dado1 = lanzarDado();
        int dado2 = lanzarDado();
        mostrarAnimacion();
        mostrarNumero(dado1, true);
        delay(1000);
        mostrarNumero(dado2,false);

        if (dado1 + dado2 == 7) {
            tone(buzzer, 1000);
            delay(1000);
            noTone(buzzer);
        }
        delay(2000);
    }
}

int lanzarDado() {
    return random(1,7);
}

void mostrarAnimacion() {
    for (int i = 0; i < 10; i++) {
        int numeroAleatorio = random(1,7);
        mostrarNumero(numeroAleatorio,true); // Solo un display para animación
        delay(100);
    }
}

void mostrarNumero(int numero,bool primerDisplay) {
    digitalWrite(display1,HIGH); 
    digitalWrite(display2,HIGH); 

    if(primerDisplay){
        digitalWrite(display2,LOW); 
    } else {
        digitalWrite(display2,HIGH); 
        digitalWrite(display2,HIGH); 
    }

    for (int i = A; i <= G; i++) {
        digitalWrite(i,numeros[numero - 1][i - A]);
    }

    delay(5); 
}

