#include "cylinder.hpp"

#include <stdexcept>

// Base

Cylinder::Cylinder(const Figure &fig, const double height) {
  fig_    = fig.copy();
  height_ = height;
}

double Cylinder::calcVolume() const {
  double result = fig_->calcArea() * height_;
  return result;
}

// Figure

void Cylinder::setFigure(const Figure &fig) {
  delete fig_;
  fig_ = fig.copy();
}

Figure *Cylinder::getFigure() const { return fig_->copy(); }

// Height

void Cylinder::initHeight_(const double height) {
  if (height < 0)
    throw std::invalid_argument("Height should be positive!");
  height_ = height;
}

void Cylinder::setHeight(const double height) { initHeight_(height); }

double Cylinder::getHeight() const { return height_; }