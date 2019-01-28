int Switch = 7;
int SwitchValue = 0;
int SwitchValue1 = 0;
int SwitchState;
int Led = 8;

void setup() 
{
          pinMode(Switch, INPUT);
          pinMode(Led, OUTPUT);
          digitalWrite(Switch,HIGH);
          SwitchState = digitalRead(Switch);
          Serial.begin(9600);
}

void loop() 
{
        SwitchValue= digitalRead(Switch);
        SwitchValue1= analogRead(A0);
        Serial.print("\nSwitchValue:");
        Serial.print(SwitchValue1);
        delay(1000);
       
        if(SwitchValue == LOW)
        digitalWrite(Led, HIGH);
        else
        digitalWrite(Led, LOW);       
}
