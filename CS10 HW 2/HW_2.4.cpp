#include <iostream>
#include <cmath>
using namespace std;

double windChill(double velocity, double degrees);
//Takes in the the wind velocity and temperature as inputs and
//calculates wind chill

int main() {
  double v;
  double temp = 0;
  cout << "What is the wind speed? (m/sec)" << endl;
  cin >> v;
  do{
    if(temp > 10) {
      cout << "Invalid temperature" << endl;
    }
    cout << "What the temperature in Celcius? Must be 10 degrees or below." << endl;
    cin >> temp;
  }
  while(temp > 10);
  cout << windChill(v, temp) << " Celcius" << endl;
  return 0;
}

double windChill(double velocity, double degrees) {
  return 33-(((10*sqrt(velocity)-velocity+10.5)*(33-degrees))/23.1);
}
