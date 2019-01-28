#include<LiquidCrystal.h>
const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13; 
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

long int Trig = 5; 
#define Echo 7

void setup()
{
               lcd.begin(16,2);
               pinMode(Trig, OUTPUT);
               pinMode(Echo, INPUT);
               lcd.setCursor(0,0);
                lcd.clear();
               lcd.print("HELLO");
               Serial.begin(9600); 
}

void loop ()
{                
                lcd.clear();
                Serial.print("out1\n");
                long duration;
                long distanceCm;
                long distanceInch;

                  digitalWrite(Trig, LOW);
                  delayMicroseconds(2);

                  
                  digitalWrite(Trig, HIGH);
                  delayMicroseconds(10);                  
                  digitalWrite(Trig, LOW);

                  duration = pulseIn(Echo, HIGH);
                  distanceCm= duration*0.034/2;
                  distanceInch= duration*0.0133/2;

                  lcd.clear();
                  lcd.setCursor(0, 0);
                  Serial.print(duration);
                  Serial.print(distanceCm);
                  lcd.print("DistanceCm:");
                  lcd.print(distanceCm);
                  lcd.setCursor(0, 1);
                  lcd.print("DistanceInch:");
                  lcd.println(distanceInch);
                  delay(1000);
                  Serial.print("out2");
}

