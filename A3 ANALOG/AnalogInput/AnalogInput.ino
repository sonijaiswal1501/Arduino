int sensor = A0;   
int led = 12;      
int sensorValue = 0;  

void setup() 
{
  pinMode(led, OUTPUT);
}

void loop()
{ 
  sensorValue = analogRead(sensor);  
  digitalWrite(led, HIGH);
 
  delay(sensorValue);
  digitalWrite(led, LOW);  
  delay(sensorValue);
}
