#include <iostream>
#include <cmath>
using namespace std;

double stddev(double a[], int size);

int main() {
  double result;
  double arr[] = {94.2,83.7,68.0,99.5,72.4};
  int size = sizeof(arr)/sizeof(arr[0]);
  result = stddev(arr,size);
  cout << result << endl;
}

double stddev(double a[], int size) {
  double s = 0;
  double m = 0;
  for(int i = 0; i < size; i++) {
    m += a[i];
  }
  cout << m << endl;
  m = m/size;
  cout << m << endl;
  for(int j = 0; j < size; j++) {
    s = s + pow(a[j]-m,2);
  }
  return sqrt(s/size);
}
