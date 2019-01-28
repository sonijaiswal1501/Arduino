int sensor = A0;    
int led = 7;      
int sensorValue = 0; 
  
void setup () 
{
  pinMode (led, OUTPUT);
  Serial.begin (9600);
}
 
void loop () 
{
  sensorValue = analogRead (sensor);
  Serial.println("SensorValue1");
   Serial.println (sensorValue);
   delay(1000);
    if (sensorValue >=540) 
            {          
              digitalWrite(led, HIGH);          
              Serial.println("SensorValue");
              Serial.println(sensorValue);
            }

          else 
            {
              digitalWrite(led, LOW);
              Serial.println("SensorValue");
              Serial.println(sensorValue);
            }
}
