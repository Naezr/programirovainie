#pragma once

class Figure {
public:
  virtual double calcArea() const = 0;

  virtual Figure *copy() const = 0;
};