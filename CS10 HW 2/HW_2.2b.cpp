#include <iostream>
using namespace std;

int main() {
  for(int i = 10; i <= 18; i += 2) {
    cout << "start ";
    for(int j = 5; j >= 1; j--) {
      cout << i << " ";
      cout << j << ", ";
    }
    cout << "end" << endl;
  }
  return 0;
}
