int sensorPin = 7;
int Led = 6;

void setup ()
{
  Serial.begin (9600);
  pinMode(Led, OUTPUT);
}

void loop ()
{    
    int SensorValue = digitalRead(sensorPin);
    Serial.println(SensorValue);
    if(SensorValue == 1)
      digitalWrite(Led, HIGH);
    else
        digitalWrite(Led, LOW);    
  
    delay (100);
}
