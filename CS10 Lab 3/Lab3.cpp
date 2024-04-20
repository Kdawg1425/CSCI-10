#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  double initial;
  double x = 0;
  double y;
  double g; //gravity
  double height;
  double angle;
  double velocity; //initial

  cout << "What is the gravitational acceleration? (m/s^2)" << endl;
  cin >> g;

  cout << "What is initial height that the projectile starts at? (m)" << endl;
  cin >> height;

  cout << "What is the angle that the projectile is being fired at? (degrees)" << endl;
  cin >> angle;

  cout << "What is the initial velocity of the projectile? (m/s)" << endl;
  cin >> velocity;

  y = height + x * tan(angle) - (g* pow(x,2))/(2*pow(velocity*cos(angle), 2));

  while (y >= 0){
    cout << "(" << x << "," << y << ")" << endl;
    x++;
    y = height + x * tan(angle) - (g* pow(x,2))/(2*pow(velocity*cos(angle), 2));
  }
  return 0;
}
