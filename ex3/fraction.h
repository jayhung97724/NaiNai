#include <iostream>
using namespace std;

class Fraction {

  private:
    int numerator;
    int denominator;

  public:
    Fraction ();
    Fraction (int, int);
    Fraction add(Fraction a, Fraction b);
    Fraction subtract(Fraction a, Fraction b);
    Fraction multiply(Fraction a, Fraction b);
    Fraction divide(Fraction a, Fraction b);
    void print(Fraction f);

};