# Servo-Angle-Controller
This Arduino code controls a servo motor using a potentiometer to adjust its angle.
It includes the Servo library to manage the servo. 
A potentiometer is connected to analog pin A2, and the servo motor is connected to digital pin 3. 
In the setup function, serial communication is initialized at 9600 baud, the potentiometer pin is set as an input, and the servo is attached to pin 3 with an initial angle of 0 degrees. 
In the loop function, the code reads the analog value from the potentiometer (0–1023), maps it to a servo angle (0–180 degrees) using the formula angle = 180. / 1023. * potVal, and sets the servo to that angle using myServo.write. 
The potentiometer value and calculated angle are printed to the serial monitor. 
The loop runs continuously without any delay, updating the servo position based on the potentiometer’s position.
