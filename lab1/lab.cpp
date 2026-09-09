#include <iostream>

struct Table {
  int size;
  char color[20];
};

std::ostream& operator<<(std::ostream& os, const Table& table) {
  os << "Table(size: " << table.size << ", color: " << table.color << ")";
  return os;
}

int main() {
  Table sTable{12, "green"};
  Table* dTable = new Table{15, "red"};

  std::cout << "Static: " << sTable << "\n";
  std::cout << "Dynamic: " << *dTable << "\n";

  delete dTable;
}