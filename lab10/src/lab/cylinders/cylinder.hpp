#pragma once

#include "../figures/figure.hpp"

class Cylinder {

protected:
  Figure *fig_ = nullptr;
  double  height_;

  void initHeight_(const double height);

public:
  Cylinder(const Figure &fig, const double height);

  virtual ~Cylinder();

  void    setFigure(const Figure &fig);
  Figure *getFigure() const;

  void   setHeight(const double height);
  double getHeight() const;

  double calcVolume() const;
};