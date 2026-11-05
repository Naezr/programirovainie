#include "rectCylinder.hpp"

RectCylinder::RectCylinder(const Rectangle &fig, const double height)
  : Cylinder(fig, height) {}

RectCylinder *
RectCylinder::create(const Rectangle &fig, const double height) {
  return new RectCylinder(fig, height);
}

void RectCylinder::setFigure(const Rectangle &fig) {
  Cylinder::setFigure(fig);
}

Rectangle *RectCylinder::getFigure() const {
  return dynamic_cast<Rectangle *>(Cylinder::getFigure());
}

void RectCylinder::setRectWidth(const double width) {
  dynamic_cast<Rectangle *>(fig_)->setWidth(width);
}
void RectCylinder::setRectHeight(const double height) {
  dynamic_cast<Rectangle *>(fig_)->setHeight(height);
}