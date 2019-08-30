int ledPin = 9;
void setup()
{
  pinMode(ledPin,OUTPUT);

}
void loop() 
{
  for(int i=0;i<=5;i++)
  {
    analogWrite(ledPin,i);
    delay(5000);
  }
  for(int i=5;i>=0;i--)
  {
    analogWrite(ledPin,i);
    delay(5000);
  }

}
