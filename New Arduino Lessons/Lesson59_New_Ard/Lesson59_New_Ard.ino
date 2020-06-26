#include <LiquidCrystal.h>
//LCD Setup
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

//HC-SR04 setup
int triggerPin=2;
int echoPin=3;
int pingTravelTime;
float pingTravelDistance;
float distanceToTarget;
float distance = .013464;

int DT=25;
int DT1=300;
String msg1="The distance is: ";
String msg2="inches.";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin(16,2);
pinMode(triggerPin,OUTPUT);
pinMode(echoPin, INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(triggerPin,LOW);
delayMicroseconds(DT);
digitalWrite(triggerPin, HIGH);
delayMicroseconds(DT);
digitalWrite(triggerPin,LOW);
pingTravelTime = pulseIn(echoPin,HIGH);
pingTravelDistance = (.013464*pingTravelTime);

lcd.setCursor(0,0);
lcd.print(msg1);
lcd.setCursor(0,1);
lcd.print(pingTravelDistance);
lcd.print(msg2);
delay(DT1);
lcd.clear();

}
