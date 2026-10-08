#include "rectangle.hpp"

#include <stdexcept>

#include "../log.hpp"

// Base

Rectangle::Rectangle() {
  LOG();
  initWidth_(0);
  initHeight_(0);
}

Rectangle::~Rectangle() {
  LOG();
  delete width_;
  delete height_;
}

Rectangle::Rectangle(const double width, const double height) {
  LOG(width, height);
  initWidth_(width);
  initHeight_(height);
}

double Rectangle::calcArea() const {
  double result = *width_ * *height_;
  LOG(result);
  return result;
}

// Width

void Rectangle::initWidth_(const double width) {
  LOG(width);
  if (width < 0)
    throw std::invalid_argument("Width should be positive!");
  *width_ = width;
}

void Rectangle::setWidth(const double width) {
  LOG(width);
  initWidth_(width);
}

double Rectangle::getWidth() const {
  LOG(*width_);
  return *width_;
}

// Height

void Rectangle::initHeight_(const double height) {
  LOG(height);
  if (height < 0)
    throw std::invalid_argument("Height should be positive!");
  *height_ = height;
}

void Rectangle::setHeight(const double height) {
  LOG(height);
  initHeight_(height);
}

double Rectangle::getHeight() const {
  LOG(*height_);
  return *height_;
}
