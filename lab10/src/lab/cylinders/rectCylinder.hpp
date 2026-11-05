#pragma once

#include "../figures/rectangle.hpp"
#include "cylinder.hpp"

class RectCylinder : public Cylinder {

public:
  RectCylinder(const Rectangle &fig, const double height);

  void       setFigure(const Rectangle &fig);
  Rectangle *getFigure() const;
};