/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 0 and
  turning on and off a light emitting diode(LED) connected to digital pin 13.
  The amount of time the LED will be on and off depends on the value obtained
  by analogRead().

  The circuit:
  - potentiometer
    center pin of the potentiometer to the analog input 0
    one side pin (either one) to ground
    the other side pin to +5V
  - LED
    anode (long leg) attached to digital output 13 through 220 ohm resistor
    cathode (short leg) attached to ground

  - Note: because most Arduinos have a built-in LED attached to pin 13 on the
    board, the LED is optional.

  created by David Cuartielles
  modified 30 Aug 2011
  By Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogInput
*/

//   delay(1000);                // waits for a second in milliseconds

//DHT11 Communication Process
// Arduino Pull Low at least 18ms, then Arduino Pause 20-40microseconds for DHT's response
//


int sensorPin = 2;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  //pinMode(A0, INPUT_PULLUP); // set pull-up on anolog pin 0
}

void loop() {
  pinMode(2, LOW);
  delay(18);
  pinMode(2, HIGH);
  // read the value from the sensor:
  delay(40); // Delay waiting for DHT's response, must wait 20-40us
  Serial.println(analogRead(sensorPin));
  delay(8000);                       // wait for a second
  
}
