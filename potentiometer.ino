int ledpin = 9;
int analogPin = 0;
void setup() 
{
  pinMode(ledpin,OUTPUT);
  pinMode(analogPin,INPUT);
  Serial.begin(9600);
}

void loop() 
{
  int sensedvalue = analogRead(analogPin);
  int sensoroutput = map(sensedvalue,0,1023,0,255);
  analogWrite(ledpin,sensoroutput);
  Serial.print("Initial value");
  Serial.print(sensedvalue);
  Serial.print("Converted value");
  Serial.print(sensoroutput);
  delay(30);
 
}
