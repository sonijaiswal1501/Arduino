#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int led1 = 7;
int led2 = 8;
int h, m, s;

void setup () 
{
        //lcd.clear();
        pinMode(led1, OUTPUT);
        pinMode(led2, OUTPUT);
        lcd.begin(16, 2);
        Serial.begin(9600);
}

void loop ()
{
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
                    delay(100);
                    lcd.clear();  
      
            switch(m)
                   {
                    case 1:
                            digitalWrite(led1, HIGH);
                            digitalWrite(led2, LOW);                            
                            break;
                    
                    case 2:
                            digitalWrite(led2, HIGH);
                            digitalWrite(led1, LOW);
                            break;
                             
                    case 3:
                            digitalWrite(led1, HIGH);
                            digitalWrite(led2, HIGH);
                            break;
      
                            
                    case 4:
                            digitalWrite(led1, LOW);
                            digitalWrite(led2, LOW);
                            break;
                   }  
  }
  
                                                                                                                                                 
