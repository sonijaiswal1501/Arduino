#include<SoftwareSerial.h>  
SoftwareSerial mySerial(8,9);
String str1;
char flag;

void setup() 
{
  
      mySerial.begin(9600);   
      Serial.begin(9600);  
      delay (100);
      mySerial.println ("AT");
      delay(100);     
      mySerial.println("AT+CNMI=2,2,0,0,0");                     
      delay(500);
      mySerial.println("AT+CMGF=1");         
      delay(1000);
      
}

void loop() 
{
     if (mySerial.available() > 0)
       {
        flag=mySerial.read();
        if (flag=='+')
          {
            str1=mySerial.readString();       
            Serial.println (str1);
            if (str1.substring(0,3)=="CMT")
              {
               Serial.println ("Match");
              
              }
          }
      }
}


