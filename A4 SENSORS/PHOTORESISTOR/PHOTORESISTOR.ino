 int led = 9;
 int ldr = A5;

void setup() 
{
    Serial.begin(9600);
    pinMode(led, OUTPUT);
   // pinMode(ldr, INPUT);
}

void loop() 
{

          int ldrStatus = analogRead(ldr);  
          Serial.println(ldrStatus);        
          if (ldrStatus >=300) 
            {          
              digitalWrite(led, HIGH);          
              Serial.println(" LED is ON");
              Serial.println(ldrStatus);
            }

          else 
            {
              digitalWrite(led, LOW);
              Serial.println("LED is OFF");
              Serial.println(ldrStatus);
            }
         delay(2000);
}


