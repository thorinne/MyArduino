#include <Servo.h>

int servoPin = 9;
int servoPos=90;
Servo myServo;
String msg = "What angle for the servo?";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0){
  
}

servoPos = Serial.parseInt();


myServo.write(servoPos);


}
