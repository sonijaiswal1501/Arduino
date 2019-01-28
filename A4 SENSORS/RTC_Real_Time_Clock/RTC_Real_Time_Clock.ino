#include <Wire.h>
#include "RTClib.h"
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
RTC_DS1307 rtc;
char daysOfTheWeek[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

void setup ()
{
          Serial.begin(9600);
         
          rtc.begin();
          lcd.begin(16, 2);
      //    setCursor(0, 0);
          lcd.print("Hello");
          delay(1000);

          
}

void loop ()
{
          DateTime now = rtc.now();
    
          Serial.print(now.year(), DEC);
          Serial.print('/');
          Serial.print(now.month(), DEC);
          Serial.print('/');
          Serial.print(now.day(), DEC);
          Serial.print(" (");
          Serial.print(daysOfTheWeek[now.dayOfTheWeek()]);
          Serial.print(") ");
          Serial.print(now.hour(), DEC);
          Serial.print(':');
          Serial.print(now.minute(), DEC);
          Serial.print(':');
          Serial.print(now.second(), DEC);
          Serial.println();
          delay(1000);
}
