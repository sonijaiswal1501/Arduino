int LED = 8; 
int IRpin = 3;  
int IRstatus = HIGH;  

void setup() 
{
          pinMode(LED, OUTPUT);
          pinMode(IRpin, INPUT);
          Serial.begin(9600);  
}

void loop() 
{
          
          IRstatus = digitalRead(IRpin);
          Serial.println(IRstatus);
          if (IRstatus == LOW)
          {            
            digitalWrite(LED, HIGH);
            Serial.println("OK");
          }
          else
          {            
            digitalWrite(LED, LOW);
            Serial.println("NOT OK");
          }
          delay(200);
}

