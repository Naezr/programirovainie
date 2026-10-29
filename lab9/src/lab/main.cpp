#include <iostream>

#include "figures/circle.hpp"
#include "figures/cylinder.hpp"
#include "figures/parallelogram.hpp"
#include "figures/rectangle.hpp"

int main(int argc, char *argv[]) {
  int choice = 0;
  std::cout << "Choose figure type for cylinder base.\n"
               "1 - Rectangle\n"
               "2 - Circle\n"
               "3 - Parallelogram\n"
               "(1-3): ";
  std::cin >> choice;

  Figure *fig = nullptr;

  if (choice == 1) {
    fig = new Rectangle(10, 15);
  } else if (choice == 2) {
    fig = new Circle(42);
  } else if (choice == 3) {
    fig = new Parallelogram(12, 55, 23);
  }

  Cylinder *cyl = new Cylinder(*fig, 10);

  std::cout << "volume:\n" << cyl->calcVolume() << "\n";

  delete fig;
}