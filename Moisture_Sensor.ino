#include<Servo.h>
Servo myservo;
int pos=5;
int sensorPin=0;
int sensor_value=0;
void setup() 
{
  myservo.attach(9);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop()
{
 sensor_value=analogRead(sensorPin);
 Serial.println(sensor_value);
 if(sensor_value > 300)
 {
  for(pos=0;pos<180;pos+=1)
  {
    myservo.write(pos);
    delay(15);
  }
  for(pos=180;pos>=0;pos-=1)
  {
    myservo.write(pos);
    delay(10);
    
  }
 }
 delay(1000);
  //put your main code here, to run repeatedly:

}
