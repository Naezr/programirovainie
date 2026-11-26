#include "complex.hpp"

#include <iostream>

// num to str
#define ntos(i) ((i) ? "true" : "false")

using namespace std;

int main() {
  // constructors ; =
  Complex zero;
  Complex z(1, 2);
  Complex z2(z);
  Complex z3 = z;

  // setters ; show ; getters ; str
  z.re(4);
  z.im(3);
  cout << "z.show()\n";
  z.show();

  cout << "z.re() = " << z.re() << "; z.im() = " << z.im() << endl
       << "z.str() = " << z.str() << endl

       << endl

       // << ; == ; !=
       << z << " == " << z2 << " " << ntos(z == z2) << endl
       << z3 << " != " << z2 << " " << ntos(z3 != z2) << endl

       << endl

       // + ; - ; *
       << "z = " << z << "; z2 = " << z2 << "; z3 = " << z3
       << "; zero = " << zero << endl
       << "z + z2 = " << z + z2 << endl
       << "z2 - z = " << z2 - z << endl
       << "z * z2 = " << z * z2 << endl
       << "z * zero = " << z * zero << endl

       << "\ninput: a b => a+bi\n"
       << "z3 = ";

  // >>
  std::cin >> z3;
  z3.show();
}