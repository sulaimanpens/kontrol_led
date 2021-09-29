// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "aCuSxEcH-XXXXXXXXXXXXXXXX";

char ssid[] = "Router Lantai 1";
char pass[] = "XXXXXXXXXXX";

BlynkTimer timer;
void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}
void loop()
{
  Blynk.run();  
}
