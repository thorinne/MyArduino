int potPin = A2;
int redPin = 5;
int potVal;
int j;
int delayT=100;


void setup() {
  // put your setup code here, to run once:
pinMode(potPin, INPUT);
pinMode(redPin, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

potVal = analogRead(potPin);
Serial.println(potVal);
delay(delayT);

while (potVal > 1000){
  digitalWrite(redPin,HIGH);
  potVal=analogRead(potPin);
  Serial.println(potVal);
  delay(delayT);
  }

digitalWrite(redPin,LOW);

}
