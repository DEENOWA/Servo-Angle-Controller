#include <Servo.h>

int potPin = A2;
int potVal;
int servoPin = 3;
int angle;
Servo myServo;

void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);

  myServo.attach(servoPin);
  myServo.write(0);
  // put your setup code here, to run once:

}

void loop() {
  potVal = analogRead(potPin);
  angle = 180. /1023. * potVal;

myServo.write(angle);

  Serial.print("The Potentiometer Value is: ");
  Serial.println(potVal);
  Serial.print("The Angle is: ");
  Serial.println(angle);

  // put your main code here, to run repeatedly:

}
