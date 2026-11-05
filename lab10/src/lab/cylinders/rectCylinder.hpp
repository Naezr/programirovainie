#pragma once

#include "../figures/rectangle.hpp"
#include "cylinder.hpp"

class RectCylinder : public Cylinder {
  Rectangle *fig_ = nullptr;

public:
  RectCylinder(const Rectangle &fig, const double height);

  static RectCylinder *
  create(const Rectangle &fig, const double height);

  void       setFigure(const Rectangle &fig);
  Rectangle *getFigure() const;

  void setRectWidth(const double width);
  void setRectHeight(const double height);
};