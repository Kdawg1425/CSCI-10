#include <iostream>
using namespace std;

double convertToMPH(int min, int sec);
double convertToMPH(double km);

int main() {
  double result;
  result = convertToMPH(6,30);
  cout << result << endl;
  result = convertToMPH(3.6);
  cout << result << endl;
}

double convertToMPH(int min, int sec) {
  sec = sec + (min*60);
  return 3600.0/sec;
}

double convertToMPH(double km){
  return km/1.61;
}
