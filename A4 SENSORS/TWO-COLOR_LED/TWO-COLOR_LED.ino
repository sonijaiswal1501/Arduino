int red = 6; 
int green = 7; 
int val;

void setup () 
{
   pinMode(red, OUTPUT);
   pinMode(green, OUTPUT);
   Serial.begin(9600);
}
void loop ()
{
   
        digitalWrite (red, HIGH);
        delay(1000);               
        digitalWrite (green, HIGH);
        delay(1000);
   
}
