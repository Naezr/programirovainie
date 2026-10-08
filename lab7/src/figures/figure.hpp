#pragma once

#include "../log.hpp"

class Figure {
public:
  virtual ~Figure() { LOG(); }

  virtual double calcArea() const {
    LOG();
    return 0;
  }
};