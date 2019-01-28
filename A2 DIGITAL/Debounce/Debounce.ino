const int button = 2;    
const int led = 12;    

int ledState = HIGH;        
int buttonState;             
int lastButtonState = LOW;   

unsigned long lastDebounceTime = 0; 
unsigned long debounceDelay = 50;  

void setup() 
{
    pinMode(button, INPUT);
    pinMode(led, OUTPUT);
    digitalWrite(led, ledState);
}

void loop() 
{  
          int reading = digitalRead(button);
          
          if (reading != lastButtonState)         
              lastDebounceTime = millis();         
        
          if ((millis() - lastDebounceTime) > debounceDelay)
          {  
            if (reading != buttonState) 
              {
                buttonState = reading;
                
                  if (buttonState == HIGH) 
                    ledState = !ledState;                  
              }
          } 
        digitalWrite(led, ledState); 
        lastButtonState = reading;
}
