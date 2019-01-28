#include<SoftwareSerial.h>

SoftwareSerial mySerial(8,9);

char c[100];
int i;
char b[15];
 
void setup()
{
          mySerial.begin(9600);
          delay(100); 
          Serial.begin(9600);          
          mySerial.println("AT+CGPSPWR=1");   
          Serial.println("Hello");
          delay(1000); 
}

void loop()
{
            if(Serial.available()>0)
              {
               while(1)
                {
                  getgps();
                  delay(1000);
              }
           if(mySerial.available()>0)
               Serial.write(mySerial.read());
                 
}
     
    void getgps()
               {   
                      mySerial.println("AT+CGPSINF=0");                                     
                      delay(10); 
                      if(mySerial.available()>0)
                      { 
                      mySerial.readBytes(c,100);
                      Serial.println(c);
                      String one = c;
                      int first = one.indexOf(',');                      
                      for(i=0;i<=10;i++)
                      {
                        b[i]=c[first+1+i];                        
                      }
                      Serial.print("Longitude:");
                      Serial.println(b);
                      int second = one.indexOf(",", first+ 1);
                      for(i=0;i<=9;i++)
                      {
                        b[i]=c[second+1+i];
                      }
                      Serial.print("Latitude:");
                      Serial.println(b);                      
                      int third = one.indexOf(",", second+ 1);
                      for(i=0;i<=8;i++)
                      {
                        b[i]=c[third+1+i];
                      }
                      Serial.print("Altitude:");
                      Serial.println(b);
                      } 
                } 
                  

