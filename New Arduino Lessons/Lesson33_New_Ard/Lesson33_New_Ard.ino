#include <Servo.h>

Servo Xservo;
Servo Yservo;

int sw1 = 5;
int xPin = A0;
int yPin = A1;
int xVAL;
int yVAL;
int swVAL;
int DT = 200;
String xmsg = "X value: ";
String ymsg = " Y value: ";
String swmsg = " Switch state: ";
int servo1Pin = 9;
int servo2Pin = 12;
int servo1Angle;
int servo2Angle;
int buzzPin = 7;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(sw1,INPUT);
pinMode(xPin,INPUT);
pinMode(yPin,INPUT);
digitalWrite(sw1,HIGH);
pinMode(buzzPin,OUTPUT);

Xservo.attach(servo1Pin);
Yservo.attach(servo2Pin);
}

void loop() {
  // put your main code here, to run repeatedly:
xVAL = analogRead(xPin);
yVAL = analogRead(yPin);
swVAL = digitalRead(swVAL);
delay(DT);
Serial.print(xmsg);
Serial.print(xVAL);
Serial.print(ymsg);
Serial.print(yVAL);
Serial.print(swmsg);
Serial.println(swVAL);

servo1Angle = (180./1023.)*xVAL;
servo2Angle = (180./1023.)*yVAL;

Xservo.write(servo1Angle);
Yservo.write(servo2Angle);

}
