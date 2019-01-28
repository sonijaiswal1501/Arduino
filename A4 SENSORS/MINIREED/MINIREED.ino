int led = 9 ;
int MiniReed = 8; 

int val ;
void setup ()
{
  pinMode (led, OUTPUT);
  pinMode (MiniReed, INPUT);
}
void loop ()
{
  val = digitalRead (MiniReed) ;
  if (val == HIGH) 
  {
    digitalWrite (led, HIGH);
  }
  else
  {
    digitalWrite (led, LOW);
  }
}

