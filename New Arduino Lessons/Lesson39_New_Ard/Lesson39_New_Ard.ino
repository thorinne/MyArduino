int speedPin = 5;
int dirPin1 = 4;
int dirPin2 = 3;
int motorSpeed = 100;
int DT=250;

int xPin = A3;
int yPin = A4;
int xVal;
int yVal;





void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(speedPin,OUTPUT);
pinMode(dirPin1,OUTPUT);
pinMode(dirPin2,OUTPUT);
pinMode(xPin, INPUT);
pinMode(yPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

Serial.print("The X value is: ");
Serial.print(xVal);
Serial.print(" The fan spped is: ");
Serial.println(motorSpeed);


xVal = analogRead(xPin);

motorSpeed = (510./1023.)*xVal;

if (xVal == 512){
  analogWrite(speedPin,0);
}


if (xVal >= 513){
  digitalWrite(dirPin1,LOW);
  digitalWrite(dirPin2,HIGH);
  analogWrite(speedPin,motorSpeed);
}

if (xVal <= 511){
  digitalWrite(dirPin1,HIGH);
  digitalWrite(dirPin2,LOW);
  analogWrite(speedPin,motorSpeed);
  
}
}
