
int led = 13;
void setup()
{
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available()>0)
  {
    char data = Serial.read();
    if(data == 'H')
    {
      digitalWrite(led,HIGH);
    }
    else
    {
      digitalWrite(led,LOW);
    }
    delay(10000);
  }
}
