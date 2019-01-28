 int led = 8;
 int pd = A0;
 int outputValue=0;

void setup() 
{
      Serial.begin(9600);
      pinMode(led, OUTPUT);
      pinMode(pd, INPUT);
}

void loop() 
{
         int sensorValue = analogRead(pd);     
         Serial.println(sensorValue);          
         delay(200);
         if (sensorValue <=1000) 
             {          
                digitalWrite(led, HIGH);          
                Serial.println("LED is ON");              
             }

          else 
             {
                digitalWrite(led, LOW);
                Serial.println("LED is OFF");              
             }
}


