
String exString = "Hello World!";    

void setup()
{ 
  Serial.begin(9600); // Open serial communications and wait for port to open:
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }

  Serial.println("\n\nString remove() method example");
  Serial.println();
}

void loop() 
{
  
  Serial.println("The full string:");
  Serial.println(exString);

  exString.remove(7);   // Remove from from index=7 through the end of the string
  Serial.println("String after removing from the seventh index through the end");
  Serial.println(exString);  // Should be just "Hello W"

  // Removing only a portion in the middle of a string
  exString = "Hello World!";
  exString.remove(2, 6); // Remove six characters starting at index=2
  Serial.println("String after removing six characters starting at the third position");
  Serial.println(exString); // Should be just "Herld!"

  Serial.println();
  Serial.println();

  while(1)
    ; // no need to do it again
}
