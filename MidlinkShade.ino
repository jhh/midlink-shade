#import <Arduino.h>
#include "Shade.hpp"
#include "WiFi.hpp"
#include "config.h"

using namespace midlink;

Shade shade(15);

int counter = 0;
int state = LOW;
int last_state = LOW;

void setup() {
  Serial.begin(115200);
  // WiFi::Connect(SSID, WIFI_PASSWORD, "shades");
  pinMode(4, INPUT_PULLUP);
}

void loop() {
  state = digitalRead(4);
  
  if (state != last_state) {
    if (state == LOW) {
      shade.Toggle();
      Serial.println("button DOWN");
      Serial.printf("button push counter = %d\n", ++counter);
    } else {
      Serial.println("button UP");
    }
    delay(50);
    last_state = state;
  }
  

  // delay(2000);
}
