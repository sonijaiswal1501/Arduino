#include <IRremote.h>

int TRANS = 2;

IRsend irsend;

void setup()
{
 Serial.begin(9600);
}

void loop() 
{
   digitalWrite(TRANS, HIGH);
   irsend.sendNEC(0x20dfc03f, 32);
     delay(40);
  
}


