#include "circle.hpp"

#include <numbers>
#include <stdexcept>

#include "../log.hpp"

// Base

Circle::Circle() {
  LOG();
  initRadius_(0);
}

Circle::~Circle() {
  LOG();
  delete radius_;
}

Circle::Circle(const double radius) {
  LOG(radius);
  initRadius_(radius);
}

double Circle::calcArea() const {
  double result = std::numbers::pi * *radius_ * *radius_;
  LOG(result);
  return result;
}

// Radius

void Circle::initRadius_(const double radius) {
  LOG(radius);
  if (radius < 0)
    throw std::invalid_argument("Radius should be positive!");
  *radius_ = radius;
}

void Circle::setRadius(const double radius) {
  LOG(radius);
  initRadius_(radius);
}

double Circle::getRadius() const {
  LOG(*radius_);
  return *radius_;
}