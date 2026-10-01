#include <iostream>

#include "comptable.hpp"

int main() {
  CompTable ctable(42, "black", 12, "wood");
  std::cout << "\nvolumeCT:\n" << ctable.calcVolumeCT() << "\n\n";

  std::cout << "/***********************************************************/"
               "\n\n";

  Table table(67, "green");
  std::cout << "\nvolume:\n" << table.calcVolume() << "\n\n";
}
