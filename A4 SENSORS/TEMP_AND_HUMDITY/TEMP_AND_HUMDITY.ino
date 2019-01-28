#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup()
{

  Serial.begin(9600);
  Serial.println("DHT11 Output!");
  dht.begin();

}

void loop()
{
   
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  
    Serial.print("Humidity: ");
    Serial.println(h);

    Serial.print("Temperature: ");
    Serial.println(t);
    delay(1000);

  
}

