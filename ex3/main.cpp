#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
  Fraction f;
  Fraction a(1, 3);
  Fraction b(1, 6);
  Fraction c = f.add(a, b);
  f.print(c);
}