int bSW1 = 7;
int bSW2 = 8;
int redLED = 6;
int ledBrightness = 0;
int buzzPin = 4;
int delayT = 250;
int hi;
int low;
int buzzTone = 100;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(bSW1, INPUT);
pinMode(bSW2, INPUT);
pinMode(redLED, OUTPUT);
pinMode(buzzPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println(ledBrightness);
delay(delayT);

hi = digitalRead(bSW1);
low = digitalRead(bSW2);


Serial.println(hi);
Serial.println(low);
Serial.println();
Serial.println();



if (hi == 0){
  hi = 1;
  if (ledBrightness >= 0 && ledBrightness < 255){
    ledBrightness = ledBrightness + 5;
  }
}
if (low == 0){
  low = 1;
  if (ledBrightness > 0){ 
    ledBrightness = ledBrightness - 5;
  }
}

if (ledBrightness > 255);{
  digitalWrite(buzzPin,HIGH);
  delay(buzzTone);
  digitalWrite(buzzPin,LOW);
  }

}
