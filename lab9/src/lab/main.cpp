#include <iostream>

#include "figures/circle.hpp"
#include "figures/parallelogram.hpp"
#include "figures/rectangle.hpp"

#include "cylinders/cirCylinder.hpp"
#include "cylinders/parCylinder.hpp"
#include "cylinders/rectCylinder.hpp"

int main(int argc, char *argv[]) {
  int choice = 0;
  std::cout << "Choose figure type for cylinder base.\n"
               "1 - Rectangle\n"
               "2 - Circle\n"
               "3 - Parallelogram\n"
               "(1-3): ";
  std::cin >> choice;

  std::cout << "volume:\n";
  if (choice == 1) {
    std::cout << RectCylinder(Rectangle(10, 15), 42).calcVolume();
  } else if (choice == 2) {
    std::cout << CirCylinder(Circle(42), 67).calcVolume();
  } else if (choice == 3) {
    std::cout
      << ParCylinder(Parallelogram(12, 55, 23), 43).calcVolume();
  }
}