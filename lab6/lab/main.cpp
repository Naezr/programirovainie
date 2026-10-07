#include <iostream>

#include "comptable.hpp"
#include "table.hpp"

int main() {
  int choice = 0;
  std::cout << "Choose table type.\n1 - Regular (Table)\n2 - "
               "Computer (CompTable)\n[1-2]: ";
  std::cin >> choice;

  Table* table = nullptr;

  if (choice == 1) {
    table = new Table(100, "Brown");
  } else if (choice == 2) {
    table = new CompTable(120, "Black", 50, "Wood");
  } else {
    std::cout << "Wrong choice.\n";
    return 1;
  }

  std::cout << "Table volume: " << table->calcVolume() << std::endl;

  delete table;

  return 0;
}
