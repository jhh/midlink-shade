#include "WiFi.hpp"
#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <WiFiClient.h>

using namespace midlink;

void WiFi::Connect(const char* ssid, const char* password,
                   const char* hostname) {
  ::WiFi.mode(WIFI_STA);
  ::WiFi.begin(ssid, password);
  while (::WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(::WiFi.localIP());

  if (MDNS.begin(hostname)) {
    MDNS.addService("http", "tcp", 80);
    Serial.println("MDNS responder started");
    Serial.printf("Connect to http://%s.local/\n", hostname);
  }
}
