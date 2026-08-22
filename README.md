
![Logo](https://interfazes.com/logos/logo%20interfazes.png)

# Sensor MAX4466

## Descripción del Sensor
El módulo de micrófono MAX4466 es una placa breakout con un micrófono electret de 20-20KHz y el MAX4466 circuito integrado preamplificador. En la parte trasera de la placa hay un pequeño potenciómetro que permite ajustar la ganancia de 25x a 125x. La imagen a continuación muestra el frente y la parte trasera de la placa:

![max4466](https://www.makerguides.com/wp-content/uploads/2025/04/image-20-1024x688.png)

El módulo funciona desde 2.4V y hasta 5.5V con una corriente de alimentación en reposo muy baja de <24μA. Para un buen rendimiento, usa la fuente de alimentación más “silenciosa” disponible. Esto sería el pin de 3.3V de un Arduino o ESP32.

Ten en cuenta que el voltaje máximo de salida en el pin OUT va de 0 V a VCC. Si conectas la salida al convertidor analógico-digital (ADC) de tu microcontrolador, asegúrate de que pueda manejar el voltaje máximo de salida. La salida tendrá un sesgo de VCC/2. Así que cuando esté completamente en silencio, el voltaje de salida será VCC/2 V.

Para más detalles técnicos, consulta la hoja de datos del [MAX4466](https://www.makerguides.com/wp-content/uploads/2025/04/MAX4465-MAX4469-Datasheet.pdf).

## Conexión del sensor a un microcontrolador

### Arduino Uno
> Conectar el sensor MAX4466 a un microcontrolador Arduino UNO es fácil. Solo conecta GND a GND, VCC a 3.3V y el pin de salida OUT del MAX4466 a la entrada analógica disponible. También podrías conectar el pin VCC del módulo MAX4466 a 5V para obtener una mejor resolución en la entrada analógica A0, pero la señal de entrada sería un poco más ruidosa.

### ESP32
> Si usas un ESP32, debes alimentar el módulo MAX4466 con 3.3V, ya que la salida máxima del módulo depende de VCC y con 5V de alimentación, el voltaje en la entrada analógica sería demasiado alto.

## Aplicaciones

Recomendamos ampliamente este sensor para aplicaciones con modelos de inteligencia artificial basados en algoritmos de clasificación de machine learning. 

## Autor

César Isaac - [X](https://x.com/ingcesarisaac)

## Mesa de Ayuda

Escríbeme a mi red social en [x.com](https://x.com/ingcesarisaac) para cualquier duda sobre este código.

## Licencia MIT

Copyright (c) 2026 Interfazes

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
