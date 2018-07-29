#pragma once

namespace midlink {

class WiFi {
 private:

 public:
  static void Connect(const char* ssid, const char* password, const char* hostname);
};

}  // namespace midlink
