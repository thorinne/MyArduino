int redPin = 6;
int buttonPin = 8;
int buttonRead;
int DT = 100;
int ledState = 0;
int buttonNew;
int buttonOld = 1;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(buttonPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

buttonNew = digitalRead(buttonPin);
Serial.println(buttonRead);
delay(DT);


if (buttonOld == 0 && buttonNew == 1){
  if (ledState == 0){
    digitalWrite(redPin,HIGH);
    ledState=1;
     }
  else {
    digitalWrite(redPin,LOW);
    ledState=0;
    }
  }
buttonOld = buttonNew;
}
