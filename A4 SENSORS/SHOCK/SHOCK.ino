const int vibswPin = 7; 
const int ledPin = 8; 
int val = 0; 

void setup()
{
  Serial.begin(9600);
  pinMode(vibswPin,INPUT);
  pinMode(ledPin,OUTPUT); 
}

void loop()
{
    val = digitalRead(vibswPin); 
      if(val == HIGH) 
        {
          digitalWrite(ledPin,LOW);
          Serial.print("Val="); 
          Serial.println(val); 
          delay(1000);
        }
        else
        {
          digitalWrite(ledPin,HIGH); 
          delay(1000);
        }
}
