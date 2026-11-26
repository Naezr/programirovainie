#include "complex.hpp"

#include <iostream>
#include <sstream>

Complex::Complex() : re_(0), im_(0) {}

Complex::Complex(const Complex &o) : re_(o.re_), im_(o.im_) {};

Complex::Complex(const double re, const double im)
  : re_(re), im_(im) {}

double Complex::re() const { return re_; }
double Complex::im() const { return im_; }

void Complex::re(const double re) { re_ = re; }
void Complex::im(const double im) { im_ = im; }

std::string Complex::str() const {
  std::stringstream ss;
  if (re_ == 0 && im_ == 0) ss << 0;
  else if (re_ == 0) ss << im_ << 'i';
  else if (im_ == 0) ss << re_;
  else ss << re_ << ((im_ > 0) ? "+" : "") << im_ << 'i';
  return ss.str();
}

void Complex::show() const { std::cout << str() << "\n"; }

bool Complex::operator==(const Complex &o) const {
  return ((re_ == o.re_) && (im_ == o.im_));
}

bool Complex::operator!=(const Complex &o) const {
  return !(*this == o);
}

Complex Complex::operator+(const Complex &o) const {
  return Complex(re_ + o.re_, im_ + o.im_);
}

Complex Complex::operator-(const Complex &o) const {
  return Complex(re_ - o.re_, im_ - o.im_);
}

Complex Complex::operator*(const Complex &o) const {
  return Complex(
    re_ * o.re_ + im_ * o.im_, re_ * o.im_ + im_ * o.re_
  );
}

Complex &Complex::operator++() {
  ++re_;
  return *this;
}

Complex Complex::operator++(int) {
  Complex old(*this);
  ++(*this);
  return old;
}

Complex &Complex::operator=(const Complex &o) {
  if (*this != o) {
    re_ = o.re_;
    im_ = o.im_;
  }
  return *this;
}

std::istream &operator>>(std::istream &in, Complex &z) {
  in >> z.re_ >> z.im_;
  return in;
}

std::ostream &operator<<(std::ostream &out, const Complex &z) {
  out << z.str();
  return out;
}