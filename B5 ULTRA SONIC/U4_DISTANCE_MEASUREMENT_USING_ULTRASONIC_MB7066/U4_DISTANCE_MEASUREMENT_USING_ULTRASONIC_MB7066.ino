int input = A0;
int Centimeter;
int Inches;

void setup() 
{
   pinMode(input, INPUT);
   Serial.begin(9600);
}

void loop()
{
       Centimeter =  analogRead(input);
       Inches =  Centimeter*0.393701;
       Serial.print("Centimeter = ");
       Serial.println(Centimeter);
       Serial.print("Inches = ");
       Serial.println(Inches);
       delay(1000);
}
