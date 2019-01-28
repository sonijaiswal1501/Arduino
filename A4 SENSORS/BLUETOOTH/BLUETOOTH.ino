int led = 8;

void setup() 
{
        Serial.begin(9600);
        pinMode(led, OUTPUT); 
 }
 
void loop() 
{
                if(Serial.available()>0)
                 {     
                    char data= Serial.read(); 
                    switch(data)
                    {
                      case 'a': digitalWrite(8, HIGH);
                                delay(1000);
                                break; 
                      case 'd': digitalWrite(8, LOW);
                                delay(1000);
                                break; 
                      default : break;
                    }
                    Serial.println(data);
                 }                
}
