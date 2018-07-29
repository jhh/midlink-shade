#include <ESP8266WiFi.h>
#include "config.h"
#include "Shade.hpp"

const char* ssid = SSID;
const char* password = WIFI_PASSWORD;

Shade shade(15);

void setup() {}

void loop() {
  shade.Toggle();
  delay(2000);
}
