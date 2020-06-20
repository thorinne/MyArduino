#include <Servo.h>
int photoPin = A3;
int photoVal;
int servoPin = 9;
int servoPos=90;
Servo myServo;
int DT=250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println(photoVal);
Serial.println(servoPos);
delay(DT);

photoVal = analogRead(photoPin);
servoPos = (180./328.) * photoVal - ((180.*232.)/328.);
myServo.write(servoPos);


}
