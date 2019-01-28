int sensor = 8;    
int led = 7;      
int sensorStatus = 0; 
  
void setup () 
{
  pinMode (led, OUTPUT);
  Serial.begin (9600);
}
 
void loop () 
{
  sensorStatus = digitalRead (sensor);
  Serial.println("SensorStatus1");
   Serial.println (sensorStatus);
   delay(100);
    if (sensorStatus == HIGH) 
            {          
              digitalWrite(led, HIGH);          
              Serial.println("SensorStatus");
              Serial.println(sensorStatus);
            }

          else 
            {
              digitalWrite(led, LOW);
              Serial.println("SensorStatus");
              Serial.println(sensorStatus);
            }
}
