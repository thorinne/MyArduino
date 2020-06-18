int redPin=4;
int myVoltPin=A2;
int readVal;
float V2;
int delayT=250;



void setup() {
  // put your setup code here, to run once:
pinMode(redPin,OUTPUT);
Serial.begin(9600);



}

void loop() {
  // put your main code here, to run repeatedly:

readVal=analogRead(myVoltPin);
V2=(5./1023.)*readVal;
Serial.print("Potentiometer voltage is: ");
Serial.println(V2);
delay(delayT);

if (V2 >= 2 && V2 <= 3) {
  digitalWrite(redPin,HIGH);
}
if (V2 <= 2 || V2 >= 3){
  digitalWrite(redPin,LOW);
}

delay(delayT);
}
