#include <iostream>
#include <cmath>
using namespace std;

const double uniGrav = 6.673*pow(10,-8);

double gravForce(double mass1, double mass2, double distance);
//Takes the mass of the first and second object, along with the distance
//between them. It then calculates the gravitational force between the two.

int main() {
  double mass1;
  double mass2;
  double distance;
  double result;
  string answer;
  do{
    cout << "Enter the mass of the first object. (g)" << endl;
    cin >> mass1;
    cout << "Enter the mass of the second object. (g)" << endl;
    cin >> mass2;
    cout << "Enter the distance between the two objects. (cm)" << endl;
    cin >> distance;
    result = gravForce(mass1, mass2, distance);
    cout << "The gravitational attractive force between the two objects is " <<
            result << " dyne(s)." << endl;
    cout << "Would you like to repeat this calculation? Yes or no?" << endl;
    cin >> answer;
  }
  while((answer.compare("yes")) == 0 || (answer.compare("Yes")) == 0);
  return 0;
}

double gravForce(double mass1, double mass2, double distance) {
  return (uniGrav*mass1*mass2)/pow(distance,2);
}
