int button = 2;
int led = 13;
void setup()
{
    pinMode(led,OUTPUT);
    pinMode(button,INPUT);
}
void loop()
{
  if(digitalRead(button) == HIGH)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
