int latchPin = 11;
int clockPin=10;
int dataPin=12;

byte myByte = 0b10101010;

int DT=1000;

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
myByte=myByte/2; //shifts to the left
// or myByte=myByte/2; shifts to the right

}
