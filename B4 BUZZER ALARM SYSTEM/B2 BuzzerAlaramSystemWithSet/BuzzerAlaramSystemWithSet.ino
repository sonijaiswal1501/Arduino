#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int led = 7;
int Switch = 8;
int Switch1 = 9;
int h, m, s;
int i, j=0, k=0, l=0;


void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("HELLO");
  pinMode(led, OUTPUT);
  pinMode(Switch, INPUT);
  digitalWrite(Switch, HIGH); 
  pinMode(Switch1, INPUT);
  digitalWrite(Switch1, HIGH);   
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
                        Set();
                        stor();
                        lcd.print(":");
                        lcd.print(m);
                        Set();
                        stor();
                        lcd.print(":");
                        lcd.print(s);
                        Set();
                        stor();                         

                        lcd.setCursor(0,1);
                        lcd.print("Alarm");      
                        lcd.print(":");
                        lcd.print(j);                     
                        lcd.print(":");
                        lcd.print(k);                        
                        lcd.print(":");
                        lcd.print(l);
                        delay(10);                        
                   }
                 digitalWrite(led, LOW);
                 //  delay(1000);
           }
        }                 
}

    void stor()
        {
          if(h==j && m==k ) 
            {
              digitalWrite(led, HIGH);
              delay(10);
            }
        }

     void Set()
         {  
            abc:   
            if(digitalRead(Switch) == LOW)
                {
                  while(1)
                      {
                        if(digitalRead(Switch) == LOW)
                           {
                             lcd.clear();                                                                          
                             i++;
                             
                     switch(i)
                           {
                            case 1: lcd.setCursor(0,1);
                                     lcd.print("Set");
                                     delay(1000);
                                     break; 
                            
                            case 2: lcd.setCursor(0,1);
                                    lcd.print("HH");
                                    lcd.print(":");
                                    lcd.print("MM");
                                    lcd.print(":");
                                    lcd.print("SS");
                                    delay(1000);
                                    break;                                     
                            
                            case 3: lcd.clear(); 
                                    lcd.setCursor(0,1);
                                    lcd.print("HH:");
                                    j=0;
                                    lcd.print(j);
                                    delay(1000);                                   
                                    while(1)
                                    {
                                      if (digitalRead(Switch1) == LOW)
                                        {   
                                             j++;
                                             lcd.clear(); 
                                             lcd.setCursor(0,1);
                                             lcd.print("HH:");
                                             lcd.print(j);
                                             delay(1500);
                                          if (digitalRead(Switch1) == LOW)
                                            {
                                                delay(5000);
                                             if (digitalRead(Switch1) == LOW)
                                                 break;
                                             }
                                          if (j == 23)
                                              j=0;  
                                          }
                                      }                                     
                                     break;
                                        
                            case 4: lcd.clear(); 
                                    lcd.setCursor(0,1);
                                    lcd.print("MM:");
                                    k=0;
                                    lcd.print(k);
                                    delay(1000);                                    
                                    while(1)
                                    { 
                                      if (digitalRead(Switch1) == LOW)
                                        {                                                                            
                                             k++;
                                             lcd.clear(); 
                                             lcd.setCursor(0,1);
                                             lcd.print("MM:");
                                             lcd.print(k);
                                             delay(100);
                                            if (digitalRead(Switch1) == LOW)
                                               {
                                                  delay(5000);
                                                if(digitalRead(Switch1) == LOW)
                                                 break;
                                               }
                                                if (k == 60)
                                                    k=0;  
                                          }
                                      }                                   
                                     break; 
                                             
                            case 5: lcd.clear(); 
                                    lcd.setCursor(0,1);
                                    lcd.print("SS:");
                                    l=0;
                                    lcd.print(l);
                                    delay(1000);                                  
                                    while(1)
                                    {
                                      if (digitalRead(Switch1) == LOW)
                                        {                                    
                                             l++;
                                             lcd.clear(); 
                                             lcd.setCursor(0,1);
                                             lcd.print("SS:");
                                             lcd.print(l);
                                             delay(100);
                                             if (digitalRead(Switch1) == LOW)
                                            {
                                                delay(5000);
                                             if (digitalRead(Switch1) == LOW)
                                                 break;
                                            }
                                             if (l == 60)
                                                 l=0; 
                                          }                                     
                                      }
                                     break;
                                      
                              case 6: goto abc;                                   
                                      break;

                          }
                          }}}
          } 

