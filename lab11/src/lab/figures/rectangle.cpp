#include "rectangle.hpp"

#include "../notPositiveException.hpp"

// Base

Rectangle::Rectangle() {
  initWidth_(0);
  initHeight_(0);
}

Rectangle::Rectangle(const double width, const double height) {
  initWidth_(width);
  initHeight_(height);
}

double Rectangle::calcArea() const {
  double result = width_ * height_;
  return result;
}

Rectangle *Rectangle::copy() const { return new Rectangle(*this); }

// Width

void Rectangle::initWidth_(const double width) {
  if (width < 0)
    throw new notPositiveException("Width should be positive!");
  width_ = width;
}

void Rectangle::setWidth(const double width) { initWidth_(width); }

double Rectangle::getWidth() const { return width_; }

// Height

void Rectangle::initHeight_(const double height) {
  if (height < 0)
    throw new notPositiveException("Height should be positive!");
  height_ = height;
}

void Rectangle::setHeight(const double height) {
  initHeight_(height);
}

double Rectangle::getHeight() const { return height_; }
