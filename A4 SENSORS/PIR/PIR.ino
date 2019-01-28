const int PIR = 4;  

void setup() 
{
  pinMode(PIR, INPUT);
  Serial.begin(9600);
  delay(2000); 
}

void loop() 
{
  int sensor_output;
  sensor_output = digitalRead(PIR);
  if( sensor_output == LOW )
    {
      Serial.println("No object in sight");
      delay(1000);
    }
  else
    {
      Serial.println("Object detected"); 
      delay(1000);
    }  
}
