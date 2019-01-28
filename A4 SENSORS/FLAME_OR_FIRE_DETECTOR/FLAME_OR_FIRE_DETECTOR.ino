int flame = 3;
int led = 2;

void setup()
{
     Serial.begin(9600);
     pinMode(flame, INPUT);
     pinMode(led, OUTPUT);
}

void loop()
{
      int flameval = digitalRead(flame);
          Serial.print("Flame=");
          Serial.println(flameval);
          delay(100);
          if(flameval == HIGH)     
            digitalWrite(led, HIGH);     
          else     
           digitalWrite(led, LOW);
}


