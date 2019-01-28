int button = 2;     
int led =  12;      

void setup()
{  
  Serial.begin(9600); 
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);

}

void loop() 
{  
        int sensorVal = digitalRead(button);  
        Serial.println(sensorVal);
      
        if (sensorVal == HIGH) 
          digitalWrite(led, LOW);
        else
          digitalWrite(led, HIGH);       
}
