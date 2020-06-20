int redPin = 6;
int buttonPin = 8;
int buttonRead;
int DT = 100;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(buttonPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

buttonRead = digitalRead(buttonPin);
Serial.println(buttonRead);
delay(DT);
if (buttonRead == 1){
  digitalWrite(redPin,LOW);
}
if (buttonRead == 0){
  digitalWrite(redPin,HIGH);
}

}
