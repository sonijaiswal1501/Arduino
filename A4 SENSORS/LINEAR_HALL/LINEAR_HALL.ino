const int led = 2;
int sensor = A0; 
int digital=3; 

int sensorValue = 0;
boolean digitalValue=0;

void setup() 
{
  pinMode(digital,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600); 

}

void loop() 
{ 
  sensorValue = analogRead(sensor); 
  digitalValue=digitalRead(digital); 
  Serial.print("Sensor Value "); 
  Serial.println(sensorValue); 
  Serial.print("Digital Value "); 
  Serial.println(digitalValue); 
  if( digitalValue==HIGH )
  {
    digitalWrite(led,LOW);
  }
  if( digitalValue==LOW)//else
  {
    digitalWrite(led,HIGH);
  }
  delay(1000);
}
