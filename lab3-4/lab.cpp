#include <cstring>
#include <iostream>

class Table {
  int* size = new int;
  char* color = new char[20];

  void initSize(const int value) {
    std::cout << "initSize(" << value << ")\n";
    if (value < 0) {
      std::cout << "Invalid size: " << value << "\nSize must be positive!\n";
      exit(1);
    }
    *this->size = value;
  }

public:
  Table() {
    std::cout << "Table()\n";
    setSize(0);
    setColor("");
  }

  Table(const int size, const char* color) {
    std::cout << "Table(" << size << ", " << color << ")\n";
    setSize(size);
    setColor(color);
  }

  Table(const int size) {
    std::cout << "Table(" << size << ")\n";
    setSize(size);
    setColor("black"); // default color
  }

  ~Table() {
    std::cout << "~Table()\n";
    delete size;
    size = nullptr;
    delete[] color;
    color = nullptr;
  }

  void setSize(const int value) {
    std::cout << "setSize(" << value << ")\n";
    initSize(value);
  }

  const int getSize() const {
    std::cout << "getSize() = " << *size << "\n";
    return *size;
  }

  void setColor(const char* value) {
    int len = sizeof(color) - 1;
    std::strncpy(this->color, value, len);
    color[len] = '\0';
    std::cout << "setColor(" << value << ")\n";
  }

  const char* getColor() const {
    std::cout << "getColor() = " << color << "\n";
    return color;
  }

  const int calcVolume() const {
    int result = *size * *size;
    std::cout << "calcVolume() = " << result << "\n";
    return result;
  }
};

int main() {
  Table table;
  std::cout << "\n";

  int size;
  std::cout << "Enter table size: ";
  std::cin >> size;
  table.setSize(size);
}
