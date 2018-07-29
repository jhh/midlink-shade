#include <ESP8266WebServer.h>

#include "Shade.hpp"
#include "WiFi.hpp"
#include "config.h"

using namespace midlink;

Shade shade(15);

void setup() {
  Serial.begin(115200);
  WiFi::Connect(SSID, WIFI_PASSWORD, "shades");
}

void loop() {
  shade.Toggle();
  delay(2000);
}
