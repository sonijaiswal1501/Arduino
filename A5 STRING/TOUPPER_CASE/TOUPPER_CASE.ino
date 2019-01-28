
void setup() 
{  
          Serial.begin(9600);
          while (!Serial)
          {
            ; 
          } 
          Serial.println("\n\nString case changes:");
          Serial.println();
}

void loop() 
{
          // toUpperCase() changes all letters to upper case:
              String stringOne = "<html><head><body>";
              Serial.println(stringOne);
              stringOne.toUpperCase();
              Serial.println(stringOne);
            
              // toLowerCase() changes all letters to lower case:
              String stringTwo = "</BODY></HTML>";
              Serial.println(stringTwo);
              stringTwo.toLowerCase();
              Serial.println(stringTwo);
            
            
              // do nothing while true:
              while (true);
}
