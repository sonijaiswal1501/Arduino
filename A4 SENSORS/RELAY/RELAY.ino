int led1 = 4;
int led2 = 12;
#define relay1 7
#define relay2 8

void setup ()
{
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);

digitalWrite(relay1, LOW);
digitalWrite(relay2, LOW);
delay(2000);
  
}

void loop()
{
  
  
  digitalWrite(relay1, HIGH);
  delay(1000);
  digitalWrite(relay1, LOW);
  delay(1000);
  digitalWrite(relay2, HIGH);
  delay(1000);
  digitalWrite(relay2, LOW);
  delay(1000);
}

