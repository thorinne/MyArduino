int tiltSwitchPin = 11;
int tiltVal;
int redLED = 10;
int greenLED = 9;
int DT=250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redLED,OUTPUT);
pinMode(greenLED,OUTPUT);
pinMode(tiltSwitchPin,INPUT);
digitalWrite(tiltSwitchPin,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
tiltVal = digitalRead(tiltSwitchPin);
Serial.println(tiltVal);
delay(DT);

if (tiltVal == 1){
  digitalWrite(redLED,HIGH);
  digitalWrite(greenLED,LOW);
}

if (tiltVal == 0){
  digitalWrite(redLED,LOW);
  digitalWrite(greenLED,HIGH);
}

}
