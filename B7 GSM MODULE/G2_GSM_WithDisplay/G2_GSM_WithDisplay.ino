#include<SoftwareSerial.h>
#include<LiquidCrystal.h>

SoftwareSerial mySerial(8,9);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

char c[100];
int i;
char b[15];
 
void setup()
{
        mySerial.begin(9600);
        Serial.begin(9600);
        lcd.begin(16, 2);           
        mySerial.println("AT");          
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
           {   
             mySerial.readBytes(c,100);
             Serial.print(c);
             lcd.clear();
             lcd.setCursor(0,0);                  
             for(i=0;i<=10;i++)
               {
                 b[i]=c[18+i];
               }                    
             lcd.print(b);
             delay(1000);                     
          }         
 }
void SendMessage()
{
       mySerial.println("AT+CMGF=1");         
       delay(1000);  
       mySerial.println("AT+CMGS=\"+918765718833\"\r");
       delay(1000);
       mySerial.println("I'm sweet");
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
