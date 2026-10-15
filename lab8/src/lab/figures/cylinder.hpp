#pragma once

#include "figure.hpp"

class Cylinder {
  Figure *fig_    = nullptr;
  double *height_ = new double;

protected:
  void initHeight_(const double height);

public:
  Cylinder(const Figure &fig, const double height);

  void    setFigure(const Figure &fig);
  Figure *getFigure() const;

  void   setHeight(const double height);
  double getHeight() const;

  double calcVolume() const;
};