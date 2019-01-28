int Pot = A0;

void setup() 
{
   Serial.begin(9600);
   pinMode(Pot, INPUT);
}


void loop() 
{
      int sensorValue = analogRead(Pot);
     
      Serial.println(sensorValue);
      delay(1);       
}
