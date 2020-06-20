
int speedPin = 5;
int dirPin1 = 4;
int dirPin2 = 3;
int motorSpeed=255;
int switchPin = 11;
int switchVal;

int DT=250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(speedPin,OUTPUT);
pinMode(dirPin1,OUTPUT);
pinMode(dirPin2,OUTPUT);
pinMode(switchPin, INPUT);
digitalWrite(switchPin,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

switchVal = digitalRead(switchPin);
Serial.println(switchVal);
delay(DT);

if (switchVal == 0){
  digitalWrite(dirPin1,LOW);
  digitalWrite(dirPin2,HIGH);
  analogWrite(speedPin,motorSpeed);
}

if (switchVal == 1){
  digitalWrite(dirPin1,LOW);
  digitalWrite(dirPin2,HIGH);
  analogWrite(speedPin,0);
}
}
