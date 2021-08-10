
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "r1z6Ia64JL8D9k93BpN2GBJP7BKmm3mo";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Pop";
char pass[] = "Popeye13302";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Serial.println(analogRead(A0));
  Blynk.run();
}
