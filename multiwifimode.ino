#include <ESP8266WiFiMulti.h>

ESP8266WiFiMulti wifiMulti;

void setup() {
  Serial.begin(115200);
  Serial.println("\nESP8266 Multi WiFi example");

  // Register multi WiFi networks
  wifiMulti.addAP("ssid_from_AP_1", "your_password_for_AP_1");
  wifiMulti.addAP("ssid_from_AP_2", "your_password_for_AP_2");
  wifiMulti.addAP("ssid_from_AP_3", "your_password_for_AP_3");
  // More is possible

Serial.println("Connecting to Strongest Wifi .....");

if (wifiMulti.run() == WL_CONNECTED) {
    Serial.print("WiFi connected: ");
    Serial.print(WiFi.SSID());
    Serial.print(" ");
    Serial.println(WiFi.localIP());
  } else {
    Serial.println("WiFi not connected!");
  }
}
void loop() {
 
}
