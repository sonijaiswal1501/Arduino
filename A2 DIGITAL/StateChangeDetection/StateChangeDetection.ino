int  button = 2;   
int led = 12;       

int buttonPushCounter = 0;  
int buttonState = HIGH;         
int lastButtonState = 0;     

void setup() 
{  
  pinMode(button, INPUT);  
  pinMode(led, OUTPUT);  
  Serial.begin(9600);
}

void loop() 
{  
          buttonState = digitalRead(button);
          
          if (buttonState != lastButtonState) 
              {    
               if (buttonState == LOW) 
                  {      
                    buttonPushCounter++;
                    Serial.println("on");
                    Serial.print("number of button pushes: ");
                    Serial.println(buttonPushCounter);
                  } 
                else 
                  Serial.println("off");                  
                
                delay(50);
              }          
          lastButtonState = buttonState;
        
          if (buttonPushCounter % 4 == 0)          
              digitalWrite(led, HIGH);
          
          else 
              digitalWrite(led, LOW);         

}
