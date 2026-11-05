#include "circle.hpp"

#include <numbers>
#include <stdexcept>

// Base

Circle::Circle() { initRadius_(0); }

Circle::~Circle() { delete radius_; }

Circle::Circle(const double radius) { initRadius_(radius); }

double Circle::calcArea() const {
  double result = std::numbers::pi * *radius_ * *radius_;

  return result;
}

Circle *Circle::copy() const { return new Circle(*this); }

// Radius

void Circle::initRadius_(const double radius) {
  if (radius < 0)
    throw std::invalid_argument("Radius should be positive!");
  *radius_ = radius;
}

void Circle::setRadius(const double radius) { initRadius_(radius); }

double Circle::getRadius() const { return *radius_; }