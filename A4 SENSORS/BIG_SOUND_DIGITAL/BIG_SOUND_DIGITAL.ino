int Soundin = 3;
int led =2;




void setup() 
{
  Serial.begin(9600);
  pinMode(Soundin, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
         int SoundSens = digitalRead(Soundin);
         Serial.print("SoundSens=");
         Serial.println(SoundSens);
         delay(1);
         
         if(SoundSens == 1)
        {
         Serial.print("SoundSens1=");
         Serial.println(SoundSens);
         digitalWrite(led, HIGH);
         delay(1000);
        }
         else
         digitalWrite(led, LOW);

         
        

}
