Task 2: RGB LED Control Using Potentiometers

Logic Used
- An RGB LED consists of three LEDs: Red, Green, and Blue.
- Each color pin of the RGB LED is connected to a PWM pin of the Arduino.
- Three potentiometers are used to control Red, Green, and Blue intensities.
- Analog values (0–1023) are read using analogRead().
- These values are mapped to PWM range (0–255).
- Using analogWrite(), the brightness of each color is controlled.
- By varying the intensities of RGB, different colours are produced.
