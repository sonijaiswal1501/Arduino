#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int led = 7;
int h, m, s;

void setup()
{
      Serial.begin(9600);
      lcd.begin(16,2);
      lcd.print("HELLO");
      pinMode(led, OUTPUT);  
}

void loop()
{             
        for(h=0; h<24; h++)
        {
          for(m=0; m<=60; m++)
            {             
                  for(s=0; s<=60; s++)
                      {
                        lcd.setCursor(0,0);
                        lcd.print("Time");      
                        lcd.print(":");
                        lcd.print(h);
                        lcd.print(":");
                        lcd.print(m);
                        lcd.print(":");
                        lcd.print(s);
                        delay(5);
                        lcd.clear(); 
                        
                       if(h==10 && m==00) 
                          {
                             digitalWrite(led, HIGH);
                             delay(1);
                           }
                       if(h==11 && m==00) 
                          {
                             digitalWrite(led, HIGH);
                             delay(1);
                           }
                        if(h==12 && m==00) 
                          {
                             digitalWrite(led, HIGH);
                             delay(1);
                          }
                      if(h==13 && m==00) 
                          {
                             digitalWrite(led, HIGH);
                             delay(1);
                           }
                        if(h==14 && m==15) 
                          {
                             digitalWrite(led, HIGH);
                             delay(1);
                           }
                      if(h==15 && m==15)  
                          {
                             digitalWrite(led, HIGH);
                             delay(1);
                           }
                      if(h==16 && m==15) 
                          {
                             digitalWrite(led, HIGH);
                             delay(1);
                           }
                      if(h==17 && m==15) 
                          {
                             digitalWrite(led, HIGH);
                             delay(1);
                           }
                        else
                          {
                             digitalWrite(led, LOW);
                             delay(1);
                          }        
                      }
                    }
                 }
     
}

