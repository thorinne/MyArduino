int buzzPin = 8;
int lightPin = A5;
int lightVal;
int buzzTone;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin,OUTPUT);
pinMode(lightPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

lightVal = analogRead(lightPin);
Serial.println(lightVal);

buzzTone = (9./550.)*(lightVal-((9.*200.)/550.))+1.;
Serial.println(lightVal);
digitalWrite(buzzPin,HIGH);
delay(buzzTone);
digitalWrite(buzzPin,LOW);
delay(buzzTone);


}
