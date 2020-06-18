int redPin = 7;
int gPin = 9;
int lightPin = A5;
int lightVal;
int delayT = 250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(gPin,OUTPUT);
pinMode(lightPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

lightVal = analogRead(lightPin);
Serial.println(lightVal);
delay(delayT);

if (lightVal >= 700){
  digitalWrite(gPin,HIGH);
  digitalWrite(redPin, LOW);
  }
if (lightVal<500){
  digitalWrite(gPin,LOW);
  digitalWrite(redPin,HIGH);
}
}
