#pragma once

#include "../figures/circle.hpp"
#include "cylinder.hpp"

class CirCylinder : public Cylinder {
  Circle *fig_ = nullptr;

public:
  CirCylinder(const Circle &fig, const double height);

  static CirCylinder *create(Circle fig, double height);

  void    setFigure(const Circle &fig);
  Circle *getFigure() const;

  void setCircleRadius(const double radius);
};