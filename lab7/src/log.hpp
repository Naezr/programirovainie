#pragma once

#include <format>
#include <source_location>
#include <string>

void log_(
  const std::source_location location, std::string message = ""
);

template <typename T>
inline void log_(const std::source_location location, const T value) {
  log_(location, std::format("{}", value));
}

template <typename... Args>
inline void
log_(const std::source_location location, const Args&... values) {

  std::string message;
  const char* sep = "";

  for (std::string s : {std::format("{}", values)...}) {
    message += sep + s;
    sep      = ", ";
  }

  log_(location, message);
}

#define LOG(...) \
  log_(std::source_location::current() __VA_OPT__(, ) __VA_ARGS__)
