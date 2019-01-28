int Lightcup = 7;
int Led = 8 ;

void setup()
{
 
  Serial.begin(9600);
  pinMode(Lightcup, INPUT);  
  pinMode(Led, OUTPUT);
 
 
}


void loop()
{
 
      int LightcupState = digitalRead(Lightcup);      
      Serial.println(LightcupState);
      delay(10);      
     
            if(LightcupState == LOW)
              {
                digitalWrite(Led, HIGH);
                delay(1000);               
             }
         else
            {
              digitalWrite(Led, LOW);
              delay(1000);              
            }
                 
  }

