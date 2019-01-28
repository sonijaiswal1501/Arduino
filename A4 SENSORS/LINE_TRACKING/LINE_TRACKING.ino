const int tracing = 3;
const int led = 2;

void setup()
{
   Serial.begin(9600);
   pinMode(tracing, INPUT);
   pinMode(led, OUTPUT);
}

void loop()
{
int val = digitalRead(tracing);
Serial.print("Tracing=");
Serial.println(val);
delay(100);
if(val == HIGH)
{ 
digitalWrite(led, LOW);
}
else
{
digitalWrite(led, HIGH);
}
}


