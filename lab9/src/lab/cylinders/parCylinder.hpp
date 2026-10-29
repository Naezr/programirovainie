#pragma once

#include "../figures/parallelogram.hpp"
#include "cylinder.hpp"

class ParCylinder : public Cylinder {

public:
  ParCylinder(const Parallelogram &fig, const double height);

  void           setFigure(const Parallelogram &fig);
  Parallelogram *getFigure() const;
};