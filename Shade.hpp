#pragma once

namespace midlink {
class Shade {
 private:
  int port_;

 public:
  Shade(int port);
  void Up();
  void Toggle();
};
}  // namespace midlink
