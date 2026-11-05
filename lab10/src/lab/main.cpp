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
    Rectangle     rect(10, 15);
    RectCylinder *rcyl = RectCylinder::create(rect, 42);

    std::cout << "Initial data:\n - rect width: "
              << rcyl->getFigure()->getWidth() << "\n - rect height: "
              << rcyl->getFigure()->getHeight()
              << "\n - volume: " << rcyl->calcVolume()
              << "\nEnter new width and height for rectangle:\n";

    double width, height;
    std::cin >> width >> height;
    rcyl->setRectWidth(width);
    rcyl->setRectHeight(height);

    std::cout << "New volume: " << rcyl->calcVolume() << "\n";

    delete rcyl;

  } else if (choice == 2) {
    std::cout << CirCylinder(Circle(42), 67).calcVolume();

  } else if (choice == 3) {
    std::cout
      << ParCylinder(Parallelogram(12, 55, 23), 43).calcVolume();
  }
}