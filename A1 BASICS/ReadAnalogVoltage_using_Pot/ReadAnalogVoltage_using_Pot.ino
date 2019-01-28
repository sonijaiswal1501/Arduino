int Pot = A0;

void setup()
{ 
  Serial.begin(9600);
}

void loop() 
{
 
  int sensorValue = analogRead(Pot); 
  float voltage = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
 
  Serial.println(voltage);
  delay(1000);
}
