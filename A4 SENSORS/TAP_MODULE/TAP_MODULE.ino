int led = 3;
int knockSensor = A0;    
           
byte val = 0;
int state = LOW;
int THRESHOLD = 100;

void setup()
{
 pinMode(led, OUTPUT); 
 Serial.begin(9600);
}

void loop() 
{
      val = analogRead(knockSensor);     
      Serial.println(val);
    
        if (val >= THRESHOLD) 
          {
            state = !state;
            digitalWrite(led, state);
            Serial.println("Knock!");        
          }
        delay(1000); 

}
