int redPin = 10;
int grPin = 11;
int blPin = 9;
String msg = "What color would you like? (red, blue, green, aqua, orange, grey, white, off)";
String color;
String msg1 = "What is your name? ";
String msg1a = "Hello, ";
String msg2 = "Welcome to Arduino!";
String uname;

void setup() {
  // put your setup code here, to run once:
pinMode(redPin,OUTPUT);
pinMode(grPin,OUTPUT);
pinMode(blPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println(msg1);
while (Serial.available()==0){
  
}
uname = Serial.readString();
Serial.print(msg1a);
Serial.println(uname);
Serial.println(msg2);

while (0 == 0){
  

  Serial.println(msg);
  while (Serial.available()==0){
  
  }

  color = Serial.readString();

  if (color == "red" || color == "Red"){
    digitalWrite(redPin,HIGH);
    digitalWrite(grPin, LOW);
    digitalWrite(blPin, LOW);
  }

  if (color == "green" || color == "Green"){
    digitalWrite(redPin,LOW);
    digitalWrite(grPin, HIGH);
    digitalWrite(blPin, LOW);
  }

  if (color == "blue" || color == "Blue"){
    digitalWrite(redPin,LOW);
    digitalWrite(grPin, LOW);
    digitalWrite(blPin, HIGH);
  }

  if (color == "white" || color == "White"){
    digitalWrite(redPin,HIGH);
    digitalWrite(grPin, HIGH);
    digitalWrite(blPin, HIGH);
  }


  if (color == "aqua" || color == "Aqua"){
    digitalWrite(redPin,HIGH);
    digitalWrite(grPin, 255);
    digitalWrite(blPin, 80);
  }


  if (color == "orange" || color == "Orange"){
    digitalWrite(redPin,255);
    digitalWrite(grPin, 128);
    digitalWrite(blPin, LOW);
  }

  if (color == "grey" || color == "Grey"){
    digitalWrite(redPin,128);
    digitalWrite(grPin, 128);
    digitalWrite(blPin, 128);
  }
  
  if (color == "off" || color == "Off"){
    digitalWrite(redPin,LOW);
    digitalWrite(grPin, LOW);
    digitalWrite(blPin, LOW);
  }

}
}
