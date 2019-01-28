#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int Switch = 7;
int SwitchValue = 0;

void setup () 
{
        lcd.begin(16, 2);
        pinMode(Switch, INPUT);
        digitalWrite(Switch, HIGH);
        Serial.begin(9600);

}

void loop ()
{
          abc: 
          if (digitalRead(Switch) == LOW)
             {
              Serial.print("LOW button 1");
              Serial.print(Switch);
              delay(200);
              while(1)
                  {
                   while(digitalRead(Switch) == LOW);
                   Serial.print("LOW button 2");
                   Serial.print(Switch);
                   delay(200);
                   lcd.home();
                   lcd.print("Switch  ON");
                    
                   if(digitalRead(Switch) == LOW)
                     {
                      Serial.print("LOW button 3");
                      Serial.print(Switch);
                      delay(200);
                       while(digitalRead(Switch) == LOW);
                          Serial.print("HIGH button 4");
                          Serial.print(Switch);
                          delay(200);
                          lcd.home();
                          lcd.print("Switch OFF");
                          goto abc;
                     }
                }
            }
          else
            {
               lcd.home();
               lcd.print("Switch OFF");
            }
}


