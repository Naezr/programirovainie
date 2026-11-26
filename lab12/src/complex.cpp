#include "complex.hpp"

Complex::Complex() : re_(0), im_(0) {}
Complex::Complex(const double re, const double im)
  : re_(re), im_(im) {}

double Complex::re() const { return re_; }
double Complex::im() const { return im_; }

void Complex::re(const double re) { re_ = re; }
void Complex::im(const double im) { im_ = im; }

bool Complex::operator==(const Complex &o) const {
  return ((re_ == o.re()) && (im_ == o.im()));
}

bool Complex::operator!=(const Complex &o) const {
  return !(*this == o);
}

Complex Complex::operator+(const Complex &o) const {
  return Complex(re_ + o.re(), im_ + o.im());
}

Complex &Complex::operator=(const Complex &o) {
  if (*this != o) {
    re_ = o.re();
    im_ = o.im();
  }
  return *this;
}

std::istream &operator<<(std::istream &in, Complex &z) {
  in >> z.re_ >> z.im_;
  return in;
}

std::ostream &operator<<(std::ostream &out, Complex &z) {
  out << z.re_ << "+" << z.im_ << "i";
  return out;
}