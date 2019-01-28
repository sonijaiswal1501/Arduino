int button = 2;     
int led =  12;      

int buttonState = HIGH;        

void setup() 
{ 
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() 
{ 
        buttonState = digitalRead(button);
      
        if (buttonState == LOW) 
          digitalWrite(led, HIGH);
        else 
          digitalWrite(led, LOW); 
}
