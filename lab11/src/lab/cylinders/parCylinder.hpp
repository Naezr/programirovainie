#pragma once

#include "../figures/parallelogram.hpp"
#include "cylinder.hpp"

class ParCylinder : public Cylinder {

public:
  ParCylinder(const Parallelogram &fig, const double height);

  static ParCylinder *
  create(const Parallelogram &fig, const double height);

  void           setFigure(const Parallelogram &fig);
  Parallelogram *getFigure() const;

  void setParSide1(const double side1);
  void setParSide2(const double side2);
  void setParAngle(const double angle);
};