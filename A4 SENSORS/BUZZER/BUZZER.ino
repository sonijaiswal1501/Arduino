const int buzzerPin = 5; 
  
void setup()
{
      Serial.begin(9600);
      pinMode(buzzerPin, OUTPUT); 
}

void loop() 
{
      tone(buzzerPin, 50);
      delay(500);
      noTone(buzzerPin);
      delay(500);
}
