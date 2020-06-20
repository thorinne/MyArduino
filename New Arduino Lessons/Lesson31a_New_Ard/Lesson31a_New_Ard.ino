int photoPin = A3;
int photoVal;
int DT=250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(photoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

photoVal = analogRead(photoPin);
Serial.println(photoVal);
delay(DT);

}
