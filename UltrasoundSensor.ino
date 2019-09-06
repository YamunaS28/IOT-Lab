//LiquidCrystal lcd(8,9,4,5,6,7);
int echoPin=2,trigPin=4,inches,cm;
void setup() {
  /*lcd.begin(16,2);
  lcd.setCursor(0,0);*/
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);

}

void loop() {
  long duration,inches,cm;
  //lcd.setCursor(0,1);
  pinMode(trigPin,OUTPUT);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  pinMode(echoPin,INPUT);
  duration=pulseIn(echoPin,HIGH);
  inches=microsecondsToInches(duration);
  cm=microsecondsToCentimeters(duration);
  Serial.println(inches);
  Serial.println("inches");
  Serial.println(cm);
  Serial.println("cm");
  /*lcd.println(inches);
  lcd.println("inches");
  lcd.println(cm);
  lcd.println("cm");*/
  delay(1000);

}
long microsecondsToInches(long microseconds)
{
  return microseconds /74/2;
}
long microsecondsToCentimeters(long microseconds)
{
  return microseconds /29/2;
}
