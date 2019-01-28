int Button = 2;

void setup()
{
   Serial.begin(9600);
   pinMode(Button, INPUT);
}


void loop() 
{
      
      int buttonState = digitalRead(Button);
      
      Serial.println(buttonState);
      delay(1);       
}
