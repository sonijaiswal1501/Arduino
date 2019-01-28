#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int Switch = 6;
int h, m, s;
int i,j = 0;

void setup ()
{
        Serial.begin(9600);
        //lcd.clear();
        pinMode(Switch, INPUT);
        digitalWrite(Switch, HIGH);
        lcd.begin(16, 2);       
}

void loop ()
{
          abc:        
             if(s==60)
                {
                   s = 0;
                   m = m+1;
                } 
              if(m==60)
                {
                   m = 0;
                   h = h+1;
                }
        
              if(h==25)
                {
                   h=1;
                } 
              lcd.setCursor(0,0);
              s = s+1;
              lcd.print("Time");      
              lcd.print(":");
              lcd.print(h);
              lcd.print(":");
              lcd.print(m);
              lcd.print(":");
              lcd.print(s);
              delay(1000);
              lcd.clear(); 
    
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
                             case 1:lcd.setCursor(0,1);
                                    lcd.print("Set");
                                    delay(1000);
                                    break; 
                            
                             case 2:lcd.setCursor(0,1);
                                    lcd.print("HH");
                                    lcd.print(":");
                                    lcd.print("MM");
                                    lcd.print(":");
                                    lcd.print("SS");
                                    delay(1000);
                                    break;                                     
                            
                            case 3: while(1)
                                    {
                                      if (digitalRead(Switch) == LOW)
                                        {
                                             lcd.clear();                                     
                                             j++;
                                             h = j;
                                             lcd.setCursor(0,1);
                                             lcd.print("");
                                             lcd.print(h);
                                             delay(1000);                                           
                                       }
                                       
                                      else if(j==24)
                                             break;
                                       }                                    
                                        
                            case 4:while(1)
                                    {
                                      if (digitalRead(Switch) == LOW)
                                        {
                                             lcd.clear();                                     
                                             j++;
                                             m = j;
                                             lcd.setCursor(0,1);
                                             lcd.print("");
                                             lcd.print(m);
                                             delay(1000);
                                             break;
                                       }
                                          else if(j==6)
                                               break;
                                       }           
                            case 5:while(1)
                                    {
                                      if (digitalRead(Switch) == LOW)
                                        {
                                             lcd.clear();                                     
                                             j++;
                                             s = j;
                                             lcd.setCursor(0,1);
                                             lcd.print("");
                                             lcd.print(s);
                                             delay(1000);
                                             break;
                                       }
                                            else if(j==4)
                                               break;
                                       }           
                              case 6: goto abc;                                   
                                      break;

                                        
                              }
                        }
                  }
           }
  }
               
                                                                                                  
