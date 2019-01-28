int led1 = 8;
int led2 = 9;
int led3 = 10;
long int Trig = 5;
long int Echo = 6;
int relay1 = 4;


void setup() 
            {
              pinMode(led1, OUTPUT);              
              pinMode(led2, OUTPUT);
              pinMode(led3, OUTPUT);
              pinMode(Trig, OUTPUT);
              pinMode(Echo, INPUT);
              pinMode(relay1, OUTPUT);

              digitalWrite(relay1, LOW);
               Serial.begin(9600);
            }

void loop() 
{
              long duration;
              long distanceCm;
              
              digitalWrite(Trig, LOW);
              delayMicroseconds(20);
              digitalWrite(Trig, HIGH);
              delayMicroseconds(100);
              digitalWrite(Trig, LOW);

              duration = pulseIn(Echo, HIGH);
              distanceCm = duration *0.034/2;
              Serial.print("\nout :");
              Serial.print(distanceCm);
              delay(100);
            
              if( distanceCm < 10)
                { 
                  digitalWrite(relay1, HIGH);
                  digitalWrite(led1, LOW);
                  digitalWrite(led2, LOW);
                  digitalWrite(led3, LOW);
                }
             
              else if(distanceCm >= 10 && distanceCm < 25)
                {              
                  digitalWrite(relay1, LOW);
                  digitalWrite(led1, HIGH);
                  digitalWrite(led2, LOW);
                  digitalWrite(led3, LOW);
                  delay(2000);
                }
                
              else if(distanceCm >= 25 && distanceCm < 50)             
                { 
                  digitalWrite(relay1, HIGH);
                  digitalWrite(led1, LOW);
                  digitalWrite(led2, HIGH);
                  digitalWrite(led3, LOW);
                  delay(2000);
                }
                
              else if(distanceCm >= 50 && distanceCm < 100)
                {
                  digitalWrite(relay1, HIGH);
                  digitalWrite(led1, LOW);
                  digitalWrite(led2, LOW);
                  digitalWrite(led3, HIGH);
                  delay(2000);
                }

              else if( distanceCm > 100)
                {               
                  digitalWrite(relay1, HIGH);
                  digitalWrite(led1, LOW);
                  digitalWrite(led2, LOW);
                  digitalWrite(led3, LOW);
                }
}
