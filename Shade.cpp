#include "Shade.hpp"
#include <Arduino.h>

using namespace midlink;

Shade::Shade(int port) : port_(port) {
  pinMode(port_, OUTPUT);
}

void Shade::Up() { digitalWrite(port_, HIGH); }

void Shade::Toggle() { digitalWrite(port_, !digitalRead(port_)); }