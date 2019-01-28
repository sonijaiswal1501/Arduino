int sensor = A0;
float SensorVal= 0;
float current = 0;

void setup()
{
      //pinMode(sensor, INPUT);
      Serial.begin(9600);
}

void loop() 
{
        SensorVal =analogRead(sensor);
        SensorVal=(SensorVal*5.0)/1023.0;
        current = ((SensorVal-2.5)/0.185);
        
        Serial.print("\nSensorValue: ");
        Serial.print(SensorVal);
        Serial.print("\tCurrent: ");
        Serial.print(current);
        delay(500);
}
