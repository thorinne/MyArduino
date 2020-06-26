#include <IRremote.h>
int irPin=9;
IRrecv IR(irPin);
decode_results cmd;
String myCom;
int DT=1500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(irPin,INPUT);
IR.enableIRIn();
}

void loop() {
  // put your main code here, to run repeatedly:

while (IR.decode(&cmd)==0){
  
}

Serial.println(cmd.value,HEX);
delay(DT);
IR.resume();
if (cmd.value==0xFF6897){
  myCom="zero";
  Serial.println(myCom);
}


}
