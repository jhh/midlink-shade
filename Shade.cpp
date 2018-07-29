#include "Shade.hpp"
#include <Arduino.h>

Shade::Shade(int port) {
  this->port = port;
  pinMode(port, OUTPUT);
}

void Shade::Up() { digitalWrite(port, HIGH); }

void Shade::Toggle() { digitalWrite(port, !digitalRead(port)); }