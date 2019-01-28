int IR = 3;
int pd = A5;
int outputValue =0;

void setup()
{
       Serial.begin(9600);
       pinMode(IR, OUTPUT);       
}

void loop() 
{
        digitalWrite(IR, HIGH);
        fn();
        delay(10);  
        digitalWrite(IR, LOW);
        delay(90);    
}

void fn()
{
       int SenRead  = analogRead(pd);  
       
       Serial.print("output :");  
       Serial.println(SenRead);       
          if (outputValue <510) 
            { 
              Serial.println("output1");
            }

          else if(outputValue >=510 && outputValue <=515 )
            {  
              Serial.println("output2");              
            }
          else if(outputValue <515)
            {
              Serial.println("output3"); 
            }
}

