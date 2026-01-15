int redPin = 9;
int greenPin = 10;
int bluePin = 11;

int potRed = A0;
int potGreen = A1;
int potBlue = A2;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  int redValue = analogRead(potRed);
  int greenValue = analogRead(potGreen);
  int blueValue = analogRead(potBlue);

  redValue = map(redValue, 0, 1023, 0, 255);
  greenValue = map(greenValue, 0, 1023, 0, 255);
  blueValue = map(blueValue, 0, 1023, 0, 255);

  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
