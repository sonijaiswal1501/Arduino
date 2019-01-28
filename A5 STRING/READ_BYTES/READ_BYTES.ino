int incomingByte = 0;   

void setup() {
        Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {

        
        if (Serial.available() > 0)
        {
                // read the incoming byte:
                incomingByte = Serial.read();

                Serial.print("I received: ");
                Serial.println(incomingByte, DEC);
        }
}
