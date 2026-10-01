#include <cstring>
#include <iostream>

#include "comptable.hpp"

void CompTable::initStandSize(const int value) {
  std::cout << "initStandSize(" << value << ")\n";
  if (value < 0) {
    std::cout << "Invalid size: " << value << "\nSize must be positive!\n";
    exit(1);
  }
  *this->standSize = value;
}

CompTable::CompTable() : Table() {
  std::cout << "CompTable()\n";
  setStandSize(0);
  setColor("");
}

CompTable::CompTable(const int size, const char* color, const int standSize,
                     const char* material)
    : Table(size, color) {
  std::cout << "CompTable(" << size << ", " << color << ", " << standSize
            << ", " << material << ")\n";
  setStandSize(standSize);
  setMaterial(material);
}

CompTable::~CompTable() {
  std::cout << "~CompTable()\n";
  delete standSize;
  standSize = nullptr;
  delete[] material;
  material = nullptr;
}

void CompTable::setStandSize(const int value) {
  std::cout << "setStandSize(" << value << ")\n";
  initStandSize(value);
}

const int CompTable::getStandSize() const {
  std::cout << "getStandSize() = " << *standSize << "\n";
  return *standSize;
}

void CompTable::setMaterial(const char* value) {
  int len = sizeof(material) - 1;
  std::strncpy(this->material, value, len);
  material[len] = '\0';
  std::cout << "setMaterial(" << value << ")\n";
}

const char* CompTable::getMaterial() const {
  std::cout << "getMaterial() = " << material << "\n";
  return material;
}

const int CompTable::calcVolumeCT() const {
  int result = calcVolume() + *standSize * *standSize * *standSize;
  std::cout << "calcVolumeCT() = " << result << "\n";
  return result;
};
