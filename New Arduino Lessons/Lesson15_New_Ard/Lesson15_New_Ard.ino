int redPin=5;
int yellowPin=6;
int ydelayT = 250;
int rdelayT = 250;
int yellowBlink=3;
int redBlink=5;
int j;



void setup() {
  // put your setup code here, to run once:
pinMode(redPin,OUTPUT);
pinMode(yellowPin,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

for (
  j=1;
  j <= yellowBlink;
  j = j+1
  )
  {
digitalWrite(yellowPin, HIGH);
delay(ydelayT);
digitalWrite(yellowPin, LOW);
delay(ydelayT);
}

for (j=1;j<=redBlink;j=j+1){
digitalWrite(redPin,HIGH);
delay(rdelayT);
digitalWrite(redPin,LOW);
delay(rdelayT);
}
}
