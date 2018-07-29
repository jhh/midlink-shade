#pragma once

class Shade {
 private:
  int port;
 public:
  Shade(int port);
  void Up();
  void Toggle();
};