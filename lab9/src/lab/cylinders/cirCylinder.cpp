#include "cirCylinder.hpp"

#include "../log.hpp"

CirCylinder::CirCylinder(const Circle &fig, const double height)
  : Cylinder(fig, height) {
  LOG();
}

void CirCylinder::setFigure(const Circle &fig) {
  LOG();
  Cylinder::setFigure(fig);
}

Circle *CirCylinder::getFigure() const {
  return dynamic_cast<Circle *>(Cylinder::getFigure());
}