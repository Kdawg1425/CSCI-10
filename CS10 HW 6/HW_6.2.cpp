#include <iostream>
using namespace std;

struct Fraction {
  int num;
  int denom;
};
void printFraction(Fraction f);
Fraction mult(Fraction f1, Fraction f2);
Fraction add(Fraction f1, Fraction f2);


int main() {
  Fraction f1;
  f1.num = 3;
  f1.denom = 4;
  Fraction f2;
  f2.num = 5;
  f2.denom = 6;
  Fraction output;
  printFraction(f1);
  output = mult(f1,f2);
  printFraction(output);
  output = add(f1,f2);
  printFraction(output);
}

void printFraction(Fraction f) {
  cout << f.num << "/" << f.denom << endl;
}

Fraction mult(Fraction f1, Fraction f2) {
  Fraction result;
  result.num = f1.num * f2.num;
  result.denom = f1.denom * f2.denom;
  return result;
}

Fraction add(Fraction f1, Fraction f2) {
  Fraction result;
  result.num = (f1.num * f2.denom) + (f1.denom * f2.num);
  result.denom = f1.denom * f2.denom;
  return result;
}
