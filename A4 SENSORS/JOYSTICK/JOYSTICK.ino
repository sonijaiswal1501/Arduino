int Switch = 2;
int xPin = A0;
int yPin = A1;

int SwitchState = 0;
int xPosition = 0;
int yPosition = 0;

void setup()
{
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(Switch, INPUT_PULLUP);
  Serial.begin(9600);
}


void loop()
{
    xPosition = analogRead(xPin);
    yPosition = analogRead(yPin);
    SwitchState = digitalRead(Switch);

    Serial.print("X=");
    Serial.println(xPosition);
    Serial.print("Y=");
    Serial.println(yPosition);
    Serial.print("Button=");
    Serial.println(SwitchState);
    delay(1000);
}



