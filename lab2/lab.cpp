#include <cstring>
#include <iostream>

class Table {
  int size;
  char color[20];

public:
  void setSize(const int value) {
    this->size = value;
    std::cout << "setSize(" << value << ")\n";
  }

  const int getSize() const {
    std::cout << "getSize() = " << size << "\n";
    return size;
  }

  void setColor(const char *value) {
    int len = sizeof(color) - 1;
    std::strncpy(this->color, value, len);
    color[len] = '\0';
    std::cout << "setColor(" << value << ")\n";
  }

  const char *getColor() const {
    std::cout << "getColor() = " << color << "\n";
    return color;
  }

  const int calcVolume() const {
    int result = size * size;
    std::cout << "calcVolume() = " << result << "\n";
    return result;
  }
};

int main() {
  Table table;

  table.setSize(12);
  int size = table.getSize();
  std::cout << size << "\n";

  table.setColor("blue");
  const char *color = table.getColor();
  std::cout << color << "\n";

  int volume = table.calcVolume();
  std::cout << volume << "\n";
}
