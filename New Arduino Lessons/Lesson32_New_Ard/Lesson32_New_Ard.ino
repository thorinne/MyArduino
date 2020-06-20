int sw1 = 5;
int xPin = A0;
int yPin = A1;
int xVAL;
int yVAL;
int swVAL;
int DT = 200;
String xmsg = "X value: ";
String ymsg = " Y value: ";
String swmsg = " Switch state: ";


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(sw1,INPUT);
pinMode(xPin,INPUT);
pinMode(yPin,INPUT);
digitalWrite(sw1,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

xVAL = analogRead(xPin);
yVAL = analogRead(yPin);
swVAL = digitalRead(swVAL);
delay(DT);
Serial.print(xmsg);
Serial.print(xVAL);
Serial.print(ymsg);
Serial.print(yVAL);
Serial.print(swmsg);
Serial.println(swVAL);

}
