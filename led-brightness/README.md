 Task 1: LED Brightness Control Using Potentiometer

Logic Used
- A potentiometer is connected to analog pin A0.
- The potentiometer provides an analog value from 0 to 1023.
- This value is mapped to PWM range 0 to 255.
- The LED is connected to a PWM pin (~9).
- Using analogWrite(), the brightness of the LED is controlled.
- Rotating the potentiometer changes the LED intensity.
