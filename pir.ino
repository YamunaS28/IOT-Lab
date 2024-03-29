int CalibrationTime=30;
long unsigned int lowIn;
long signed int pause=5000;
boolean locklow=true;
boolean takelowTime;
int pirPin=4;
int ledPin=13;
void setup()
{
  Serial.begin(9600);
  pinMode(pirPin,INPUT);
  pinMode(ledPin,OUTPUT);
  digitalWrite(pirPin,LOW);
  Serial.print("Callibrating the sensor");
  for(int i=0;i<CalibrationTime;i++)
  {
    Serial.print('.');
    delay(100);
  }
  Serial.println("Done");
  Serial.println("Sensor Active");
  delay(10);
}
void loop()
{
  if(digitalRead(pirPin)==HIGH)
  {
    digitalWrite(ledPin,HIGH);
    if(locklow)
    {
      locklow=false;
      Serial.println("---");
      Serial.println("Motion Detected at");
      Serial.println((millis()/1000));
      Serial.println("Sec.");
      delay(50);
    }
    takelowTime=true;
  }
  if(digitalRead(pirPin)==LOW)
  {
    digitalWrite(ledPin,LOW);
    if(takelowTime)
    {
      lowIn=millis();
      takelowTime=false;
    }
    if(!locklow && millis()-lowIn>pause)
    {
      locklow=true;
      Serial.print("Motion Ended at");
      Serial.print((millis()-pause)/1000);
      Serial.println("Sec.");
      delay(50);
    }
  }
}
