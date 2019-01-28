int pushButton = 7;
int Led = 8 ;
int buttonState = 0;
int lastButtonState=0;

void setup()
{
 
  Serial.begin(9600);
  pinMode(pushButton, INPUT);  
  pinMode(Led, OUTPUT);
  digitalWrite(pushButton, HIGH);
 
}


void loop()
{
 
      buttonState = digitalRead(pushButton);
      
      Serial.println(buttonState);
    delay(10);      
      if (buttonState != lastButtonState)
          {
            if(buttonState == LOW)
              {
                digitalWrite(Led, HIGH);
                delay(1000);               
             }
         else
            {
              digitalWrite(Led, LOW);
              delay(1000);              
            }
          }
       lastButtonState = buttonState;
  }

