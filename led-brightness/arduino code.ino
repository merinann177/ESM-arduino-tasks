int ledPin = 9;      // LED connected to pin 9
int potPin = A0;    // Potentiometer connected to A0
int potValue = 0;
int ledValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin);      // Read knob (0–1023)
  ledValue = map(potValue, 0, 1023, 0, 255); // Convert to PWM
  analogWrite(ledPin, ledValue);      // Set brightness
}
