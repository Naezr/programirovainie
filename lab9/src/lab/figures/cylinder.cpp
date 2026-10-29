#include "cylinder.hpp"

#include "../log.hpp"

#include <stdexcept>

// Base

Cylinder::Cylinder(const Figure &fig, const double height) {
  fig_     = fig.copy();
  *height_ = height;
}

double Cylinder::calcVolume() const {
  double result = fig_->calcArea() * *height_;
  LOG(result);
  return result;
}

// Figure

void Cylinder::setFigure(const Figure &fig) {
  LOG();
  fig_ = fig.copy();
}

Figure *Cylinder::getFigure() const {
  LOG();
  return fig_->copy();
}

// Height

void Cylinder::initHeight_(const double height) {
  LOG(height);
  if (height < 0)
    throw std::invalid_argument("Height should be positive!");
  *height_ = height;
}

void Cylinder::setHeight(const double height) {
  LOG(height);
  initHeight_(height);
}

double Cylinder::getHeight() const {
  LOG(*height_);
  return *height_;
}