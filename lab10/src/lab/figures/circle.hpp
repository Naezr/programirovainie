#pragma once

#include "figure.hpp"

class Circle : public Figure {
  double radius_;

protected:
  void initRadius_(const double radius);

public:
  Circle();

  Circle(const double radius);

  Circle *copy() const override;

  void   setRadius(const double radius);
  double getRadius() const;

  double calcArea() const override;
};