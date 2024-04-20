#include <iostream>
using namespace std;

int main() {
  double total = 0;
  double input = 0;
  int counter = 0;
  while (input != -1) {
    cout << "Enter score" << endl;
    cin >> input;
    if(input > 30 || input < -1)  {
      cout << "Invalid input" << endl;
      continue;
    }
    if(input <= 30 && input >=0) {
      total = total + input;
      counter++;
    }
  }

  cout << "The average is " << total/counter << "." << endl;
  return 0;
}
