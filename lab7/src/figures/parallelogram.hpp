#pragma once

#include "figure.hpp"

class Parallelogram : public Figure {
  double* side1_ = new double;
  double* side2_ = new double;
  double* angle_ = new double;

protected:
  void initSide1_(const double side1);
  void initSide2_(const double side2);
  void initAngle_(const double angle);

public:
  Parallelogram();
  ~Parallelogram() override;

  Parallelogram(
    const double side1, const double side2, const double angle
  );

  void   setSide1(const double side1);
  double getSide1() const;

  void   setSide2(const double side2);
  double getSide2() const;

  void   setAngle(const double angle);
  double getAngle() const;

  double calcArea() const override;
};