#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
         lcd.begin(16, 2);
         lcd.print("hello");
         delay(500);
         Serial.begin(9600);
}

void loop()
{
  int i=0, j=0;
       {
          if(j==0)
              {
                while(j<16)
                  {
                    
                    lcd.clear();
                    lcd.setCursor(j,i);
                    lcd.print("*"); 
                    delay(500); 
                    j++;
                  }
                  i++;  
              }
          if(j==16)
             {
              while(j>0)
                  {                    
                    lcd.clear();
                    lcd.setCursor(j,i);
                    lcd.print("*"); 
                    delay(500); 
                    j--;
                  }  
              }
        }
}
