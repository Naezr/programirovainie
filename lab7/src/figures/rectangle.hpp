#pragma once

#include "figure.hpp"

class Rectangle : public Figure {
  double* width_  = new double;
  double* height_ = new double;

protected:
  void initWidth_(const double width);
  void initHeight_(const double height);

public:
  Rectangle();
  ~Rectangle() override;

  Rectangle(const double width, const double height);

  void   setWidth(const double width);
  double getWidth() const;

  void   setHeight(const double width);
  double getHeight() const;

  double calcArea() const override;
};