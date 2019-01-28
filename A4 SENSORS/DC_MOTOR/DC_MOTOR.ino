int motor1 =22;
int motor2 = 23;
int i;
void setup() 
{
      Serial.begin(9600);
      Serial.println("Hello");
      pinMode(motor1, OUTPUT);
      pinMode(motor2, OUTPUT);
}

void loop() 
{
 
       digitalWrite(motor1, HIGH);
        delay(1000); 
       digitalWrite(motor2, LOW);
       delay(1000); 
}
