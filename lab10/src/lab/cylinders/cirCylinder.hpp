#pragma once

#include "../figures/circle.hpp"
#include "cylinder.hpp"

class CirCylinder : public Cylinder {

public:
  CirCylinder(const Circle &fig, const double height);

  void    setFigure(const Circle &fig);
  Circle *getFigure() const;
};