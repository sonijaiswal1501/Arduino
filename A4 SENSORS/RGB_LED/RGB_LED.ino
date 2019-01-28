int Red = 5;
int Green = 6;
int Blue = 7;

void setup() 
{
    pinMode(Red, OUTPUT); 
    pinMode(Green, OUTPUT);
    pinMode(Blue, OUTPUT);
}

void loop() 
{
      digitalWrite(Red, HIGH);
      digitalWrite(Green, LOW);
      digitalWrite(Blue, LOW);
      delay(1000);
      digitalWrite(Red, LOW);
      digitalWrite(Green, HIGH);
      digitalWrite(Blue, LOW);
      delay(1000);
      digitalWrite(Red, LOW);
      digitalWrite(Green, LOW);
      digitalWrite(Blue, HIGH);
      delay(1000);
      digitalWrite(Red, HIGH);
      digitalWrite(Green, HIGH);
      digitalWrite(Blue, HIGH);
      delay(1000);
      digitalWrite(Red, LOW);
      digitalWrite(Green, LOW);
      digitalWrite(Blue, LOW);
      delay(1000);
}
