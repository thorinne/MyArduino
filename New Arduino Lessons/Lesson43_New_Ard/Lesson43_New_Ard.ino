int latchPin = 11;
int clockPin=10;
int dataPin=12;

byte LEDs = 0b00000000;

int DT=250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(latchPin,OUTPUT);
pinMode(dataPin,OUTPUT);
pinMode(clockPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(latchPin,LOW);
shiftOut(dataPin, clockPin, LSBFIRST, LEDs);
digitalWrite(latchPin,HIGH);

delay(DT);
Serial.println(LEDs,BIN);
LEDs=LEDs+1;
}
