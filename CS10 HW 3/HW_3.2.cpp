#include <iostream>
#include <cmath>
using namespace std;

double perimeter;
double area;
double side1;
double side2;
double side3;

void compute(double a, double b, double c, double& p, double& ar);

int main() {
  cout << "Enter the first side length" << endl;
  cin >> side1;
  cout << "Enter the second side length" << endl;
  cin >> side2;
  cout << "Enter the third side length" << endl;
  cin >> side3;
  compute(side1,side2,side3,perimeter,area);
  cout << "Area: " << area << endl;
  cout << "Perimeter: " << perimeter << endl;

}

void compute(double a, double b, double c, double& p, double& ar) {
  double semi;
  if((a+b) <= c || (a+c) <= b || (b+c) <= a) {
    cout << "Invalid side lengths" << endl;
    exit(0);
  }
  p = a+b+c;
  semi = p/2;
  ar = sqrt(semi*(semi-a)*(semi-b)*(semi-c));
}
