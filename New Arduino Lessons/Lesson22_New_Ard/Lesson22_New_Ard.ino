int myNumb;
int buzzPin = 8;
int delayT = 2000;
String msg1 = "Please enter a number: ";


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println(msg1);
while (Serial.available()==0){
  }
myNumb = Serial.parseInt();
if (myNumb > 10){
  digitalWrite(buzzPin,HIGH);
  delay(delayT);
  digitalWrite(buzzPin,LOW);
}
  
}
