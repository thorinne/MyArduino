
int triggerPin = 11;
int echoPin = 12;
int pingTravelTime;
int DT=10;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(triggerPin,OUTPUT);
pinMode(echoPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(triggerPin,LOW);
delayMicroseconds(DT);
digitalWrite(triggerPin,HIGH);
delayMicroseconds(DT);
digitalWrite(triggerPin,LOW);
pingTravelTime = pulseIn(echoPin,HIGH);
Serial.println(pingTravelTime);
delay(25);

}
