int tempin = A0;
int led =2;
const int threshold = 580;



void setup() 
{
  Serial.begin(9600);
  pinMode(tempin, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
          
        int TempSens = analogRead(tempin);
         Serial.print("TempSens=");
         Serial.println(TempSens);
         delay(1000);
         
         if(TempSens >= threshold)
         {
           Serial.print("TempSens1=");
         Serial.println(TempSens);
         digitalWrite(led, HIGH);
                 delay(1000);
         }
         else
         digitalWrite(led, LOW);

         
        

}
