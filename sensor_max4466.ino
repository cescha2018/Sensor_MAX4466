/*
Programa: 
Sensor micrófono captura de audio max4466. 
Este sketch mide los niveles de sonido que detecta el sensor.

Recuerda la conexión del sensor es hacia un pin analógico.

Licencia MIT - Interfazes
*/

const int sampleWindow = 50;  // ventana de muestreo en milisegundos (50 mseg = 20Hz)
int const AMP_PIN = A0;       // Salida de preamplificador, pin correspondiente a A0 en arduino uno.
unsigned int sample;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  unsigned long startMillis = millis(); // Inicio de la ventana de muestreo
  unsigned int peakToPeak = 0;   // nivel pico a pico

  unsigned int signalMax = 0;
  unsigned int signalMin = 1024;

  // recolecta datos de 50mseg y grafica los datos
  while (millis() - startMillis < sampleWindow)
  {
    muestra = analogRead(AMP_PIN);
    if (muestra < 1024)  // scartar lecturas espurias
    {
      if (muestra > signalMax)
      {
        signalMax = muestra;  // guarda solo los niveles máximos
      }
      else if (muestra < signalMin)
      {
        signalMin = muestra;  // guarda solo los niveles minimos
      }
    }
  }
  peakToPeak = signalMax - signalMin;  // max - min = amplitud pico-a-pico
  Serial.println(peakToPeak);

  // Si requieres obtener la amplitud del sonido en volts descomenta las dos lineas a continuación.
  // double volts = (peakToPeak * 5.0) / 1024;  // convierte a volts
  // Serial.println(volts);
}