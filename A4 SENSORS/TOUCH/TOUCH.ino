int led =  2;
int touch = 3;
 
 
void setup() 
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(touch, INPUT);
}
 
void loop()
{
     int touchState = digitalRead(touch);
     Serial.print("Touch=");
     Serial.println(touchState);
     delay(1000);
      if (touchState == HIGH) 
         {
            digitalWrite(led, HIGH);
          }
      else
            digitalWrite(led, LOW);
}

