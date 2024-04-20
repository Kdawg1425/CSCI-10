#include <iostream>
using namespace std;

int main() {
  double gallons;
  double liters;

  cout << "How many gallons do you have?" << endl;
  cin >> gallons;
  liters = 3.78541 * gallons;
  cout << "You have " << liters << " liters." << endl;

  return 0;
}
