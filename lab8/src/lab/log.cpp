#include "log.hpp"

#include <iomanip>
#include <iostream>
#include <source_location>

#define FILENAME_WIDTH 35

void log_(const std::source_location location, std::string message) {

  std::string source = (std::string)location.file_name() + ":" +
                       std::to_string(location.line()) + ":" +
                       std::to_string(location.column());

  std::cout << "[LOG] " << std::left << std::setw(FILENAME_WIDTH)
            << source << " " << location.function_name()
            << ((!message.empty()) ? (": " + message) : "") << "\n";
};