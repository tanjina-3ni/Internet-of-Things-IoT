
#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>


char auth[] = "3qJOXCMYUujeViyIaYG3kWJKxoVs9G_7";
char ssid[] = "RUET--Employee";
char pass[] = "RUETEM#789";
String x;
void setup()
{

   Serial.begin(115200);
   Serial2.begin(115200);


   Blynk.begin(auth, ssid, pass);
}

void loop()
{
  if(Serial2.available()>0)
 {   
  String x= Serial2.readString();
  Blynk.virtualWrite(V7,x);
   delay(2000); 
  }
                                     
}

