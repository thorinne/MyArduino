int latchPin = 11;
int clockPin=10;
int dataPin=12;
int DT=1000;


byte myByte = 0xF0;
byte myByteFlipped;


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
shiftOut(dataPin, clockPin, LSBFIRST, myByte);
digitalWrite(latchPin,HIGH);

delay(DT);
Serial.println(myByte,BIN);
Serial.println(myByteFlipped,BIN);


myByteFlipped = 255 - myByte; //Flips the bits.

digitalWrite(latchPin,LOW);
shiftOut(dataPin, clockPin, LSBFIRST, myByteFlipped);
digitalWrite(latchPin,HIGH);
delay(DT);

}
