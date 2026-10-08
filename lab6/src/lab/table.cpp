#include <cstring>
#include <iostream>

#include "table.hpp"

void Table::initSize(const int value) {
  std::cout << "initSize(" << value << ")\n";
  if (value < 0) {
    std::cout << "Invalid size: " << value << "\nSize must be positive!\n";
    exit(1);
  }
  *this->size = value;
}

Table::Table() {
  std::cout << "Table()\n";
  setSize(0);
  setColor("");
}

Table::Table(const int size, const char* color) {
  std::cout << "Table(" << size << ", " << color << ")\n";
  setSize(size);
  setColor(color);
}

Table::Table(const int size) {
  std::cout << "Table(" << size << ")\n";
  setSize(size);
  setColor("black"); // default color
}

Table::~Table() {
  std::cout << "~Table()\n";
  delete size;
  size = nullptr;
  delete[] color;
  color = nullptr;
}

void Table::setSize(const int value) {
  std::cout << "setSize(" << value << ")\n";
  initSize(value);
}

const int Table::getSize() const {
  std::cout << "getSize() = " << *size << "\n";
  return *size;
}

void Table::setColor(const char* value) {
  int len = sizeof(color) - 1;
  std::strncpy(this->color, value, len);
  color[len] = '\0';
  std::cout << "setColor(" << value << ")\n";
}

const char* Table::getColor() const {
  std::cout << "getColor() = " << color << "\n";
  return color;
}

const int Table::calcVolume() const {
  int result = *size * *size * *size;
  std::cout << "calcVolume() = " << result << "\n";
  return result;
}
