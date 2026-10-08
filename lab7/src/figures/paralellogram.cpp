#include "parallelogram.hpp"

#include <cmath>
#include <numbers>
#include <stdexcept>

#include "../log.hpp"

// Base
Parallelogram::Parallelogram() {
  LOG();
  initSide1_(0);
  initSide2_(0);
  initAngle_(0);
}

Parallelogram::~Parallelogram() {
  LOG();
  delete side1_;
  delete side2_;
  delete angle_;
}

Parallelogram::Parallelogram(
  const double side1, const double side2, const double angle
) {
  LOG(side1, side2, angle);
  initSide1_(side1);
  initSide2_(side2);
  initAngle_(angle);
}

double Parallelogram::calcArea() const {
  double result =
    *side1_ * *side2_ * sin(*angle_ * std::numbers::pi / 180.0);
  LOG(result);
  return result;
}

// Side 1

void Parallelogram::initSide1_(const double side1) {
  LOG(side1);
  if (side1 < 0)
    throw std::invalid_argument("Side1 should be positive!");
  *side1_ = side1;
}

void Parallelogram::setSide1(const double side1) {
  LOG(side1);
  initSide1_(side1);
}

double Parallelogram::getSide1() const {
  LOG(*side1_);
  return *side1_;
}

// Side 2

void Parallelogram::initSide2_(const double side2) {
  LOG(side2);
  if (side2 < 0)
    throw std::invalid_argument("Side2 should be positive!");
  *side2_ = side2;
}

void Parallelogram::setSide2(const double side2) {
  LOG(side2);
  initSide2_(side2);
}

double Parallelogram::getSide2() const {
  LOG(*side2_);
  return *side2_;
}

// Angle

void Parallelogram::initAngle_(const double angle) {
  LOG(angle);
  if (angle < 0 || angle > 360)
    throw std::invalid_argument("Valid angles range: 0 - 360!");
  *angle_ = angle;
}

void Parallelogram::setAngle(const double angle) {
  LOG(angle);
  initAngle_(angle);
}

double Parallelogram::getAngle() const {
  LOG(*angle_);
  return *angle_;
}