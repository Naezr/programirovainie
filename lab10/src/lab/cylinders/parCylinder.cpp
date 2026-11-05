#include "parCylinder.hpp"

ParCylinder::ParCylinder(
  const Parallelogram &fig, const double height
)
  : Cylinder(fig, height) {}

ParCylinder *ParCylinder::create(Parallelogram fig, double height) {
  return new ParCylinder(fig, height);
}

void ParCylinder::setFigure(const Parallelogram &fig) {
  Cylinder::setFigure(fig);
}

Parallelogram *ParCylinder::getFigure() const {
  return dynamic_cast<Parallelogram *>(Cylinder::getFigure());
}

void ParCylinder::setParSide1(const double side1) {
  fig_->setSide1(side1);
}
void ParCylinder::setParSide2(const double side2) {
  fig_->setSide2(side2);
}
void ParCylinder::setParAngle(const double angle) {
  fig_->setAngle(angle);
}