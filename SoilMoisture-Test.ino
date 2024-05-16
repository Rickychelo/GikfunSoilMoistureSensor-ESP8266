
#include <ESP8266WiFi.h>

// Definir los pines del sensor
const int sensorPin = A0;

//Valores de seco y húmedo
const int dry = 700; // value for dry sensor
const int wet = 300; // value for wet sensor

void setup() {
  Serial.begin(115200); // Iniciar la comunicación serial
  pinMode(sensorPin, INPUT); // Configurar el pin del sensor como entrada
}

void loop() {
  // Leer el valor analógico del sensor
  int sensorValue = analogRead(sensorPin);
  // Convertir el valor a porcentaje de humedad (puedes necesitar ajustar estos valores)
  int percentage = map(sensorValue, wet, dry, 0, 100);
  // Imprimir el valor de humedad
  Serial.print("Humedad del suelo (%): ");
  Serial.println(percentage);

  delay(10000); // Esperar 1 segundo antes de la siguiente lectura
}
