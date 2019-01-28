#include<SoftwareSerial.h>

int data;
int Led1 = 8;

 
void setup()
{        
        Serial.begin(9600);
        delay(100); 
        pinMode(Led1, OUTPUT); 
        Serial.println(data);
        delay(1000); 
                
}

void loop()
{                         
     if(Serial.available()>0)
       {
          data = Serial.read();
           Serial.println(data);
           delay(1000);
       }
     if (data==1)
      {              
        digitalWrite(Led1, HIGH);  
        Serial.println("LED ON");
        delay(1000);  
      }     
    else
     {
        digitalWrite(Led1, LOW);  
        Serial.println("LED OFF");
        delay(1000);  
     }        
}
     
    
