int Led = 8 ;
int ball = 7;
int val ;
void setup ()
{
  pinMode (Led, OUTPUT) ;
  pinMode (ball, INPUT) ;
}
  
void loop ()
{
  val = digitalRead (ball) ;
    if (val == HIGH) 
  {
    digitalWrite (Led, HIGH);
  }
  else
  {
    digitalWrite (Led, LOW);
  }
}
