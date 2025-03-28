int sensorPin = A0;   // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin); // 0-1023      2^10

  int pwm = sensorValue / 4; // 0-255       2^8
  float voltage = sensorValue / 1024.0 * 5.0; // 0.00-5.00v

  analogWrite(ledPin, pwm);

  Serial.print("potentiometer:"); // plot label
  Serial.println(voltage);

  delay(50); // 20 Hz update frequency - 50ms period
}
