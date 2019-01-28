#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int Switch = 7; 
int Led1 = 8;
int Led2 = 9;
int Led3 = 10;
int a, abc = 0;
int Pot = A0;

void setup () 
{  
        lcd.begin(16, 2);
        pinMode(Switch, INPUT);
        pinMode(Pot, INPUT);
        pinMode(Led1, OUTPUT);
        pinMode(Led2, OUTPUT);
        pinMode(Led3, OUTPUT);
        digitalWrite(Switch, HIGH);
        Serial.begin(9600);

}

void loop ()
{
          if(digitalRead(Switch) == LOW)
            {
              if(a>5)
                abc=1;
                
              if(a<0)
                abc =0;
               
              if(abc == 1)
                a--;
             
              if(abc ==0)
                a++; 
            }
          switch(a)      
                {
                 case 1:digitalWrite(Led1, HIGH);
                        digitalWrite(Led2, LOW);
                        digitalWrite(Led3, LOW);
                        lcd.home();
                        lcd.print("LED1 is  ON");
                        delay(200);
                        lcd.clear();
                        break;
                     
               case 2:digitalWrite(Led2, HIGH);
                      digitalWrite(Led1, LOW);
                      digitalWrite(Led3, LOW);
                      lcd.home();
                      lcd.print("LED2 is  ON");
                      delay(200);
                      lcd.clear();
                      break;
            
               case 3:digitalWrite(Led3, HIGH);
                      digitalWrite(Led1, LOW);
                      digitalWrite(Led2, LOW);
                      lcd.home();
                      lcd.print("LED3 is  ON");
                      delay(200);
                      lcd.clear();
                      break;
            
               case 4:lcd.home();
                      lcd.print("Pot Value:   ");
                      lcd.print(analogRead(Pot));
                      delay(200);
                      lcd.clear();
                      break;
                     
             case 5:digitalWrite(Led3, LOW);
                    digitalWrite(Led1, LOW);
                    digitalWrite(Led2, LOW);
                    lcd.home();
                    lcd.print("LEDs is OFF");
                    delay(200);
                    lcd.clear();
                    break;
          }
}


