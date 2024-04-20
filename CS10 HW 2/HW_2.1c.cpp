#include <iostream>
using namespace std;

int main() {
  double total = 0;
  double input = 0;
  int counter = 0;
  double max = 0;
  double min = 30;
  while (input != -1) {
    cout << "Enter score" << endl;
    cin >> input;
    if(input > 30 || input < -1)  {
      cout << "Invalid input" << endl;
      continue;
    }
    if(input <= 30 && input >=0) {
      total = total + input;
      if(input < min) {
        min = input;
      }
      if(input > max) {
        max = input;
      }
      counter++;
    }
  }
  cout << "The highest score is " << max << "." << endl;
  cout << "The lowest score is " << min << "." << endl;
  cout << "The average is " << total/counter << "." << endl;

  return 0;
}
