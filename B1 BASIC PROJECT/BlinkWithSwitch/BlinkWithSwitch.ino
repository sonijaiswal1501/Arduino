int Led = 9;
int Switch = 8;

void setup() {
  // put your setup code here, to run once:
pinMode(Led, OUTPUT);
pinMode(Switch, INPUT);
digitalWrite(Switch, HIGH);
Serial.begin(9600);
}

void loop() {
  abc:
if (digitalRead(Switch) == LOW)
{
 while(1)
 {
  //while(digitalRead(Switch) == LOW);
 digitalWrite(Led, HIGH);
//Serial.println("OUT1");
if(digitalRead(Switch) == LOW)
{
  Serial.println("OUT3");
  //while(digitalRead(Switch) == LOW);
 digitalWrite(Led, LOW);
 //Serial.println("OUT2");
  //delay(1);
  goto abc;
}
}
}
else
{
  digitalWrite(Led, LOW);
 }
}
