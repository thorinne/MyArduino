#include <LiquidCrystal.h>
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
int DT = 1000;
int j;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

lcd.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:

lcd.setCursor(0,0);
lcd.print("Hello World!");
lcd.setCursor(0,1);
lcd.print("My name is Mike!");
delay(DT);
lcd.clear();
delay(DT);

for (j=1;j<=10;j=j+1){
  lcd.setCursor(0,0);
  lcd.print("Watch me count!");
  lcd.setCursor(0,1);
  lcd.print(j);
  delay(750);
}
lcd.clear();
}
