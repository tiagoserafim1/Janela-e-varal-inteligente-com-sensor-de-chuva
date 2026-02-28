#include <ESP32Servo.h>

//  Sensor e servos
int sensorChuva = 4;// D4
int servoVaralPin = 2;// D2
int servoJanelaPin = 5; // D5

Servo servoVaral;
Servo servoJanela;

// LED RGB
int redPin = 15;
int greenPin = 18;
int bluePin = 19;

// Tempo LED
int tempoAcender = 5000; // 5s aceso
int tempoApagar = 3000;  // 3s apagado

void setup() {
  Serial.begin(115200);

  // Configura servos
  servoVaral.attach(servoVaralPin);
  servoJanela.attach(servoJanelaPin);
  servoVaral.write(10);   // Varal inicia recolhido
  servoJanela.write(0);   // Janela inicia aberta
  Serial.println("Servos prontos.");

  // Configura sensor de chuva
  pinMode(sensorChuva, INPUT);

  // Configura LED RGB
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // --- Sensor de chuva e servos ---
  int chuva = digitalRead(sensorChuva);

  if (chuva == LOW) { // Chuva detectada
    Serial.println("Chuva detectada!");
    servoVaral.write(120);   // Recolhe varal
    servoJanela.write(80);   // Fecha janela
  } else {
    Serial.println("Sem chuva.");
    servoVaral.write(10);    // Estende varal
    servoJanela.write(0);    // Abre janela
  }

  // --- LED RGB branco temporizado ---
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, HIGH);
  delay(tempoAcender);

  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(tempoApagar);
}
 
