
int speedPin = 5;
int dirPin1 = 4;
int dirPin2 = 3;
int motorSpeed=255;

int DT=250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(speedPin,OUTPUT);
pinMode(dirPin1,OUTPUT);
pinMode(dirPin2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


digitalWrite(dirPin1,LOW);
digitalWrite(dirPin2,HIGH);
analogWrite(speedPin,255);
delay(100);
analogWrite(speedPin,motorSpeed);
delay(5000);

}
