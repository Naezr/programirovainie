#include "rectCylinder.hpp"

#include "../log.hpp"

RectCylinder::RectCylinder(const Rectangle &fig, const double height)
  : Cylinder(fig, height) {
  LOG();
}

void RectCylinder::setFigure(const Rectangle &fig) {
  LOG();
  Cylinder::setFigure(fig);
}

Rectangle *RectCylinder::getFigure() const {
  return dynamic_cast<Rectangle *>(Cylinder::getFigure());
}