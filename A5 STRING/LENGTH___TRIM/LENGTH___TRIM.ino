
void setup() {
 
  Serial.begin(9600); // Open serial communications and wait for port to open:
  while (!Serial) 
  {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  Serial.println("\n\nString length() and trim():");
  Serial.println();
}

void loop() {
  
  String stringOne = "Hello!       ";
  Serial.print(stringOne);
  Serial.print("<--- end of string. Length: ");
  Serial.println(stringOne.length());

  // trim the white space off the string:
  stringOne.trim();
  Serial.print(stringOne);
  Serial.print("<--- end of trimmed string. Length: ");
  Serial.println(stringOne.length());

  while (true);
}
