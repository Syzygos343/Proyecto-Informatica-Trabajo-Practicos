# Datos del Alumno:

Nombres: Nahuel Rodrigo 
Apellidos: Acevedo Toloza
Correo: rodriacevedoet32@gmail.com
Curso y División: 4°2°
Turno: Mañana

# Docente:
Nombre: Gonzalo Consorti
Correo: **[consor92@gmail.com](https://mail.google.com/mail/?view=cm&fs=1&to=consor92%40gmail.com&authuser=0)**

# Materia:
[Proyecto Informatico 1](https://classroom.google.com/c/NjU1NzcwMjE5NzM0)

# Consigna: 
**Descripción del Proyecto:**  
El objetivo de este proyecto es que cada estudiante cree una melodía original y personalizada utilizando un buzzer y un Arduino. La melodía debe ser creada por el propio estudiante sin descargar melodías de internet.  
  
**1-Crear tu propia melodía:**  
Utiliza la herramienta en línea **Online Sequencer** para componer una melodía original.  
Configura la melodía con los siguientes parámetros:  

-   **Grid: 1/4**
-   **Time Signature**: 4/4
-   **Key:**  C mayor
-   **Instrument**: Grand Piano
-   Ajusta el  **BPM** (beats por minuto / tempo) para que esté entre 90 y 130. Esta configuración determina la velocidad de la melodía.

  
**2-Exportar la melodía a formato MIDI:**  
Una vez creada la melodía, expórtala como un archivo MIDI.  
  
**3-Convertir el archivo MIDI a datos para Arduino:**  

-   Usa la herramienta en línea  **MIDI to Arduino Converter**  para convertir tu archivo MIDI a datos que puedas usar en tu código de Arduino.
-   La herramienta proporcionará las notas y los tiempos correspondientes. Deberás interpretar estos datos y convertirlos en vectores para el código Arduino, siguiendo las reglas de duración y silencio descritas a continuación.

  
**4- Implementar la melodía en Arduino:**  
**Notas y Duraciones:**  

-   La melodía debe contener un mínimo de 50 notas (sin contar los silencios).
-   La melodía debe repetirse  **infinitamente**: una vez que termine, debe esperar unos segundos y luego comenzar nuevamente desde el principio.

**5-Duraciones de las Figuras Musicales en la pagina:**  
**Blanca** = 16 cuadraditos  
**Negra** = 8 cuadraditos  
**Corchea** = 4 cuadraditos  
**Semicorchea** = 2 cuadraditos  

-   En el vector de  **nota** va la nota musical, en el vector de figura la  **duración** de dicha nota (**cuadritos**)
-   Si  **no se va a tocar ninguna nota**  porque quieren que este sonando nada, en el vector de  **notas** iría  **un 0**  y en el de  **figura** el  **silencio**  **correspondiente**

  
En arduino:  
**Redonda** = 2  
**Blanca** = 4  
**Negra** = 8  
**Corchea** = 16  
**Semicorchea** = 32  
  
  
**Silencio de Redonda** = -2 con nota 0 (cero)  
**Silencio de Blanca** = -4 con nota 0 (cero)  
**Silencio de Negra** = -8con nota 0 (cero)  
**Silencio de Corchea** = -16con nota 0 (cero)  
**Silencio de Semicorchea** = -32 con nota 0 (cero)  
  
**7-Configuraciones:**  
Declara los valores de ajuste como constantes globales con tipo en tu código:  

-   BMP/tempo
-   Utiliza las notas musicales de la biblioteca pitches.h - estas deben ser declaradas como constantes globales sin tipo y solo debes incluir las notas que vas a usar. ( que tiene el formato  **NOTE_G3 = 196** )

  
**Puntos a considerar:**  

-   La calidad estética o la complejidad de la melodía no será un factor determinante en la evaluación. Lo importante es la originalidad y el cumplimiento de los requisitos.
-   Asegúrate de que tu código sea claro y esté bien comentado.
-   Asegúrate de que el vector de  **notas** y el vector de  **figuras** estén  
    **alineados verticalmente**  para que sea fácil ver qué nota corresponde con  
    qué figura,  **que coincidan uno debajo del otro verticalmente**  . Cada vector debe estar en  **una única línea**.
-   El Arduino  **no puede reproducir dos notas simultáneamente.** Asegúrate de que tu melodía solo toque  **una nota a la vez**.
