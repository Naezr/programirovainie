#pragma once

class Figure {
public:
  virtual ~Figure() = default;

  virtual double calcArea() const = 0;

  virtual Figure *copy() const = 0;
};