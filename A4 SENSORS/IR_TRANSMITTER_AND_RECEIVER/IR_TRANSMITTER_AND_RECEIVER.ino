int IRpin = 4;  
int IRstatus = HIGH;  

void setup() 
{
          Serial.begin(9600);
          pinMode(IRpin, INPUT);            
}

void loop() 
{          
          IRstatus = digitalRead(IRpin);
          Serial.println(IRstatus);  
          //delay(1);        
}

