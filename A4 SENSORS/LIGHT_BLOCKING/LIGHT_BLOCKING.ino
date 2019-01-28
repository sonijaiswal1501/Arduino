int sensor = 3; 
int led = 8; 
int sensorState = 0;
 
void setup() 
{
Serial.begin(9600);
pinMode(led, OUTPUT);
pinMode(sensor, INPUT);

}

void loop()
{
        sensorState = digitalRead(sensor);
        Serial.print(sensorState);

                if (sensorState == HIGH)
                  digitalWrite(led, HIGH);
                
                else 
                 digitalWrite(led, LOW);              
}
