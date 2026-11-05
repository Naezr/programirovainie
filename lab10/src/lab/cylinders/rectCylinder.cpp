#include "rectCylinder.hpp"

RectCylinder::RectCylinder(const Rectangle &fig, const double height)
  : Cylinder(fig, height) {}

static RectCylinder *create(Rectangle fig, double height) {
  return new RectCylinder(fig, height);
}

void RectCylinder::setFigure(const Rectangle &fig) {
  Cylinder::setFigure(fig);
}

Rectangle *RectCylinder::getFigure() const {
  return dynamic_cast<Rectangle *>(Cylinder::getFigure());
}

void RectCylinder::setRectWidth(const double width) {
  fig_->setWidth(width);
}
void RectCylinder::setRectHeight(const double height) {
  fig_->setHeight(height);
}