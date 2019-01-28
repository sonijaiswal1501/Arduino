#include<SoftwareSerial.h>

SoftwareSerial mySerial(8,9);

void setup()
 {
          mySerial.begin(9600);
          delay(100); 
          Serial.begin(9600);
          mySerial.println("AT");
          Serial.print("Hello");
          delay(1000); 
 }

void loop()
{
           if(Serial.available()>0)
              {
                switch(Serial.read())
                {
                  case 's':SendMessage();
                           break;
                  case 'r':ReceiveMessage();
                           break;
                  case 'd':DialCall();
                           break;
                  case 'p':ReceiveCall();
                           break;
                }
              }                         
          if(mySerial.available()>0)
            Serial.write(mySerial.read());               
 }
      
      void SendMessage()
                    {
                      mySerial.println("AT+CMGF=1");
                      delay(1000);  
                      mySerial.println("AT+CMGS=\"+918765718833\"\r");
                      delay(1000);
                      mySerial.println("I'm soni jaiswal");
                      delay(1000);
                      mySerial.println((char)26);
                      delay(1000);                      
                    }
                    
      void ReceiveMessage()
                    {                      
                      mySerial.println("AT+CNMI=2,2,0,0,0");                     
                      delay(1000);
                    }
                    
       void DialCall()
                    {                      
                      mySerial.println("ATD+919140814861;");
                      delay(1000);                      
                    }
                    
     void ReceiveCall()
                    {                       
                      mySerial.println("ATA");
                      mySerial.println("AT+CLIP=1\r\n");                    
                      delay(1000);                      
                    }
                   

