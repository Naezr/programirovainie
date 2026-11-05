#include "cirCylinder.hpp"

#include "../log.hpp"

CirCylinder::CirCylinder(const Circle &fig, const double height)
  : Cylinder(fig, height) {
  LOG();
}

CirCylinder *CirCylinder::create(Circle fig, double height) {
  return new CirCylinder(fig, height);
}

void CirCylinder::setFigure(const Circle &fig) {
  LOG();
  Cylinder::setFigure(fig);
}

Circle *CirCylinder::getFigure() const {
  return dynamic_cast<Circle *>(Cylinder::getFigure());
}

void CirCylinder::setCircleRadius(const double radius) {
  fig_->setRadius(radius);
}
