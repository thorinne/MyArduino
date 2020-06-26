#include <IRremote.h>
int IRpin=9;
IRrecv IR(IRpin);
decode_results cmd;
String myCom;

int speedPin=5;
int dir1=4;
int dir2=3;
int mSpeed=110;

int powerState;
int btn = 0;


void setup()
{
Serial.begin(9600);
IR.enableIRIn();

pinMode(speedPin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
digitalWrite(dir1,HIGH);
digitalWrite(dir2,LOW);
}




void loop() {

  
while (IR.decode(&cmd)==0){ 
}

delay(1500);
IR.resume();



if (cmd.value==0xFFA25D){
  myCom="pwr";
  Serial.println(myCom);
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  analogWrite(speedPin,110);
  powerState = 1; 
}
if (cmd.value==0xFF629D){
  myCom="v+";
  Serial.println(myCom);
  if (powerState == 1){
    if (btn < 5){
      btn = btn + 1;
      mSpeed = (145./5.)*btn + 110;
      analogWrite(speedPin,mSpeed);    
    }
  }
}

if (cmd.value==0xFFA857){
  myCom="v-";
  Serial.println(myCom);
  if (powerState == 1){
    if (btn > 0){
      btn = btn - 1;
      mSpeed = (145./5.)*btn + 110;
      analogWrite(speedPin,mSpeed);
      }
  }
}

if (cmd.value==0xFF22DD){
  myCom="rew";
  Serial.println(myCom);
  if (powerState == 1){
    digitalWrite(dir1,LOW);
    digitalWrite(dir2,HIGH);
    //analogWrite(speedPin,mSpeed);
    }
}

if (cmd.value==0xFFC23D){
  myCom="ff";
  Serial.println(myCom);
  if (powerState == 1){
    digitalWrite(dir1,HIGH);
    digitalWrite(dir2,LOW);
    //analogWrite(speedPin,mSpeed);
    }
}

if (cmd.value==0xFFB04F){
  myCom="st";
  Serial.println(myCom);
  analogWrite(speedPin,0);
  powerState = 0;
  }

}
