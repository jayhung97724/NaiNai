#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction() {
  numerator = 0;
  denominator = 1;
}
// ==============================
Fraction::Fraction(int newNumerator, int newDenominator)
{
  numerator = newNumerator;
  denominator = newDenominator;
}
// ==============================
Fraction Fraction::add(Fraction a, Fraction b)
{
  Fraction result;
  result.numerator = (a.numerator * b.denominator) + (b.numerator * a.denominator);
  result.denominator = a.denominator * b.denominator;
  return result;
}
// ==============================
Fraction Fraction::subtract(Fraction a, Fraction b)
{
  Fraction result;
  result.numerator = (a.numerator * b.denominator) - (b.numerator * a.denominator);
  result.denominator = a.denominator * b.denominator;
  return result;
}
// ==============================
Fraction Fraction::multiply(Fraction a, Fraction b)
{
  Fraction result;
  result.numerator = a.numerator * b.numerator;
  result.denominator = a.denominator * b.denominator;
  return result;
}
// ==============================
Fraction Fraction::divide(Fraction a, Fraction b)
{
  Fraction result;
  result.numerator = a.numerator * b.denominator;
  result.denominator = a.denominator * b.numerator;
  return result;
}
// ==============================
void Fraction::print(Fraction f)
{
  int num = f.numerator;
  int den = f.denominator;
  // 約分先註解起來了
  // if (num > den)
  // {
  //   for (int counter = 2; counter < den; counter++)
  //   {
  //     while (num % counter == 0 & den % counter == 0)
  //     {
  //       num = (num / counter);
  //       den = (den / counter);
  //     }
  //   }
  // }
  // else if (den > num)
  // {
  //   for (int counter = 2; counter < num; counter++)
  //   {
  //     while (num % counter == 0 & den % counter == 0)
  //     {
  //       num = (num / counter);
  //       den = (den / counter);
  //     }
  //   }
  // }

  cout << num << "/" << den;
}