#include <LiquidCrystal.h>
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
int DT = 1000;
int j;
int num1;
int num2;
String numer;
String msg1="First number?";
String msg2="Second number?";
String msg3="Operation?";
String msg4;
int calc1;
float calc2;


LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

lcd.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:

lcd.setCursor(0,0);
lcd.print(msg1);

while (Serial.available()==0){
 
}
num1 = Serial.parseInt();

lcd.clear();
lcd.setCursor(0,0);
lcd.print(msg2);

while (Serial.available()==0){
 
}
num2 = Serial.parseInt();

lcd.clear();
lcd.setCursor(0,0);
lcd.print(msg3);

while (Serial.available()==0){
 
}
numer = Serial.readString();

lcd.clear();

if (numer == "+"){
  calc1 = num1 + num2;
  
}

if (numer == "-"){
  calc1 = num1 - num2;
  
}

if (numer == "/"){
  calc2 = num1 / num2;
}

if (numer == "*"){
  calc1 = num1 * num2;
}

if (numer == "+" || numer == "-" || numer == "*"){
  msg4 = num1 + numer + num2 + "=";
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(msg4);
  lcd.setCursor(0,1);
  lcd.print(calc1);
  }
else{
  msg4 = num1 + numer + num2 + "=";
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(msg4);
  lcd.setCursor(0,1);
  lcd.print(calc2);
}

delay(DT);
lcd.clear();
}
