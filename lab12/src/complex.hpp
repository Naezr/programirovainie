#pragma once

#include <iostream>
class Complex {
private:
  double re_;
  double im_;

public:
  Complex();
  Complex(const double, const double);

  ~Complex() = default;

  double re() const;
  double im() const;

  void re(const double);
  void im(const double);

  void str();
  void show();

  bool operator==(const Complex &) const;
  bool operator!=(const Complex &) const;

  Complex  operator+(const Complex &) const;
  Complex &operator=(const Complex &);

  friend std::istream &operator<<(std::istream &, Complex &);
  friend std::ostream &operator<<(std::ostream &, Complex &);
};