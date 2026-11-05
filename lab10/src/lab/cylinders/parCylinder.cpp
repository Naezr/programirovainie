#include "parCylinder.hpp"

#include "../log.hpp"

ParCylinder::ParCylinder(
  const Parallelogram &fig, const double height
)
  : Cylinder(fig, height) {
  LOG();
}

void ParCylinder::setFigure(const Parallelogram &fig) {
  LOG();
  Cylinder::setFigure(fig);
}

Parallelogram *ParCylinder::getFigure() const {
  return dynamic_cast<Parallelogram *>(Cylinder::getFigure());
}