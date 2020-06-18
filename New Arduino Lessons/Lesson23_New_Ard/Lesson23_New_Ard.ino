int buzzPin = 8;
int BT = 1;
int BT2 = 2;
int potPin = A5;
int potVal;
int buz;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin,OUTPUT);
pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


potVal = analogRead(potPin);
buz = (255./1023.)*potVal

digitalWrite(buzzPin,HIGH);
delay(buz);
digitalWrite(buzzPin,LOW);
delay(BT);
  
}
