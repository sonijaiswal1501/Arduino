int Soundin = A0;
int led =2;
const int threshold = 580;



void setup() 
{
  Serial.begin(9600);
  pinMode(Soundin, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
          
        int SoundSens = analogRead(Soundin);
         Serial.print("SoundSens=");
         Serial.println(SoundSens);
         delay(1);
         
         if(SoundSens >= threshold)
         {
           Serial.print("SoundSens1=");
         Serial.println(SoundSens);
         digitalWrite(led, HIGH);
                 delay(1000);
         }
         else
         digitalWrite(led, LOW);

         
        

}
