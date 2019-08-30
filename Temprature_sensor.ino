int analogPin=0;
void setup() 
{
  pinMode(analogPin,INPUT);
  Serial.begin(9600);

}

void loop() 
{
  float value=analogRead(analogPin);
  float mv_value=(value/1024)*5000;
  float temp_in_c=mv_value/10;
  Serial.print("Temp_in_c");
  Serial.println(temp_in_c);
  delay(1000);
}
