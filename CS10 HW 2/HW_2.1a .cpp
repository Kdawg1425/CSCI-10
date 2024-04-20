#include <iostream>
using namespace std;

int main() {
  double total = 0;
  double input = 0;
  int counter = -1;
  do{
    counter++;
    total = total + input;
    cout << "Enter score" << endl;
    cin >> input;
  }
  while (input != -1);

  cout << "The average is " << total/counter << "." << endl;
  
  return 0;


}
