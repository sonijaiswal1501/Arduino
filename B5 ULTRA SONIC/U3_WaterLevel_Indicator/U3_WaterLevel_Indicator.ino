#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);

int Trig = 10;
int Echo = 11;
#define Motor 8
#define Buzzer 12

float Time = 0, distance = 0;
int temp = 0;

void setup ()
{
                lcd.begin(16,2);
                pinMode(Trig, OUTPUT);
                pinMode(Echo, OUTPUT);
                pinMode(Motor, OUTPUT);
                pinMode(Buzzer, OUTPUT);
                lcd.print("Water Level");
                lcd.setCursor(0,1);
                lcd.print("Indicator");
                delay(2000);
}

void loop ()
  {
              digitalWrite(Trig, LOW);
              delayMicroseconds(2);
              digitalWrite(Trig, HIGH);
              delayMicroseconds(10);
              digitalWrite(Trig, LOW);
              delayMicroseconds(2);
              Time = pulseIn(Echo, HIGH);
              distance =Time*340/2000;
              lcd.clear();
              lcd.print("Tank is ");
              lcd.print("cm");
              lcd.print(distance);
              delay(2000);

        if(distance<12 && temp == 0)
                    {
                        digitalWrite(Motor, LOW);
                        digitalWrite(Buzzer, HIGH);
                        lcd.clear();
                        lcd.print("Water Tank is full");
                        lcd.setCursor(0,1);
                        lcd.print("motor is turned off");
                        delay(2000);
                        digitalWrite(Buzzer, LOW);
                        delay(3000);
                        temp =1;
                     }
       if(distance<12 && temp == 1)
                      {
                        digitalWrite(Motor, LOW);
                        lcd.clear();
                        lcd.print("Water Tank is full");
                        lcd.setCursor(0,1);
                        lcd.print("motor is turned off");
                        delay(2000);
                        digitalWrite(Buzzer, LOW);
                        delay(3000);
                        temp =1;
                      }   
                  else if(distance>30)
                      {
                        digitalWrite(Motor, HIGH);
                        lcd.clear();
                        lcd.print("Low Water Level");
                        lcd.setCursor(0,1);
                        lcd.print("motor is turned on");
                        delay(2000);
                        temp =0;
                      }                      
    }

