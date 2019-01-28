int Led = 9;
int Switch = 8;
//boolean LedOn = false;
//int Pot = A0;

void setup() {
  // put your setup code here, to run once:
pinMode(Led, OUTPUT);
pinMode(Switch, INPUT);
digitalWrite(Switch, HIGH);
Serial.begin(9600);
}

void loop() {
  abc:
  // put your main code here, to run repeatedly:
 //SwitchValue = digitalRead(Switch);
 //SwitchValue = digitalRead(Switch);  
if (digitalRead(Switch) == LOW)
{
 while(1)
 {
  while(digitalRead(Switch) == LOW);
 //int val = digitalRead(Pot);
 //val = map(val, 0, 1023, 0, 255);
//LedOn = true;
digitalWrite(Led, HIGH);
Serial.println("OUT1");
if(digitalRead(Switch) == LOW)
{
  Serial.println("OUT3");
  while(digitalRead(Switch) == LOW);
 //LedOn = false;
 digitalWrite(Led, LOW);
 Serial.println("OUT2");
  delay(1);
  goto abc;
}
}
}
else
{
  digitalWrite(Led, LOW);  
}
}
