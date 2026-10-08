#pragma once

#include "figure.hpp"

class Circle : public Figure {
  double* radius_ = new double;

protected:
  void initRadius_(const double radius);

public:
  Circle();
  ~Circle() override;

  Circle(const double radius);

  void setRadius(const double radius);
  double getRadius() const;

  double calcArea() const override;
};