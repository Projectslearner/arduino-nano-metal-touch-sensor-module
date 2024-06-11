/*
    Project name : Metal touch sensor module
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-metal-touch-sensor-module
*/

const int touchSensorPin = 2; // Digital pin connected to the metal touch sensor module
const int ledPin = 13; // LED pin

void setup() {
  pinMode(touchSensorPin, INPUT); // Set touch sensor pin as input
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int sensorValue = digitalRead(touchSensorPin); // Read sensor value
  
  // Print sensor value to Serial Monitor
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  
  // If sensor value is HIGH, metal touch is detected
  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on LED
    Serial.println("Metal Touch Detected!");
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
  }
  
  delay(500); // Delay for stability
}
