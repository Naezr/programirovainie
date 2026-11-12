#include "parCylinder.hpp"

ParCylinder::ParCylinder(
  const Parallelogram &fig, const double height
)
  : Cylinder(fig, height) {}

ParCylinder *
ParCylinder::create(const Parallelogram &fig, const double height) {
  return new ParCylinder(fig, height);
}

void ParCylinder::setFigure(const Parallelogram &fig) {
  Cylinder::setFigure(fig);
}

Parallelogram *ParCylinder::getFigure() const {
  return dynamic_cast<Parallelogram *>(Cylinder::getFigure());
}

void ParCylinder::setParSide1(const double side1) {
  dynamic_cast<Parallelogram *>(fig_)->setSide1(side1);
}
void ParCylinder::setParSide2(const double side2) {
  dynamic_cast<Parallelogram *>(fig_)->setSide2(side2);
}
void ParCylinder::setParAngle(const double angle) {
  dynamic_cast<Parallelogram *>(fig_)->setAngle(angle);
}