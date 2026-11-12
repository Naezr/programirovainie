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
    RectCylinder *rcyl = RectCylinder::create(Rectangle(10, 15), 42);

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
    CirCylinder *ccyl = CirCylinder::create(Circle(42), 67);

    std::cout << "Initial data:\n - circle radius: "
              << ccyl->getFigure()->getRadius()
              << "\n - volume: " << ccyl->calcVolume()
              << "\nEnter new radius for circle:\n";

    double radius;
    std::cin >> radius;

    std::cout << "New volume: " << ccyl->calcVolume() << "\n";

    delete ccyl;

  } else if (choice == 3) {
    ParCylinder *pcyl =
      ParCylinder::create(Parallelogram(12, 55, 23), 43);

    std::cout
      << "Initial data:\n - side1 len: "
      << pcyl->getFigure()->getSide1()
      << "\n - side2 len: " << pcyl->getFigure()->getSide2()
      << "\n - volume: " << pcyl->calcVolume()
      << "\nEnter new side1, side2 and angle for parallelogram:\n";

    double side1, side2, angle;
    std::cin >> side1 >> side2 >> angle;

    std::cout << "New volume: " << pcyl->calcVolume() << "\n";

    delete pcyl;
  }
}