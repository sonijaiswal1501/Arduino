#define led 2
#define avoid A0
int detect = 200;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(avoid, INPUT);
}

void loop()
{
  int avoidVal = analogRead(avoid);
  Serial.print("AvoidVal=");
  Serial.println(avoidVal);
  delay(10);
  if (avoidVal >= detect)
  {
    digitalWrite(led, HIGH);
    delay(100);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}
