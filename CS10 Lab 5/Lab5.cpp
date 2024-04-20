#include <iostream>
using namespace std;
/*int fun(int c, int b);
int main(){
    int a = 0, b= 5, c = 10;
    cout<<"a is: "<<a<<" b is: "<<b<<" c is: "<<c<<endl;
    b=fun(a, c);
    cout<<"a is: "<<a<<" b is: "<<b<<" c is: "<<c<<endl;
    while(b==21){
        int a = 3;
        b = a;
        cout<<"a is: "<<a<<" b is: "<<b<<" c is: "<<c<<endl;
    }
    cout<<"a is: "<<a<<" b is: "<<b<<" c is: "<<c<<endl;
    return 0;
}

int fun(int c, int b){
    int a = 0; // added this to run the code
    b = 2*b;
    c = b+1;
    cout<<"a is: "<<a<<" b is: "<<b<<" c is: "<<c<<endl;
    return c;
}*/

/*void beans(int y, int& n, int size);
void spam(int& n, int& y);
int main(){
    int m = 7;
    int n = 4;
    int k = 2;
    cout<<"m is "<<m<<" n is "<<n<<endl;
    beans(n, m, 3);
    cout<<"m is "<<m<<" n is "<<n<<endl;
    spam(m, n);
    cout<<"m is "<<m<<" n is "<<n<<endl;
    spam(n, n);
    cout<<"m is "<<m<<" n is "<<n<<endl;
    beans(m, k, n);
    cout<<"m is "<<m<<" n is "<<n<<endl;
    return 0;
}

void beans(int y, int& n, int size){
    y = n+size;
    n = 7+n;
}
void spam(int& n, int& y){
    int m = n+y;
    y=n;
    n=y+n;
}*/

void getAvgAndMax(double& avg, double& m);

int main() {
  double average;
  double max;
  getAvgAndMax(average,max);
  cout << "Average: " << average << " max: " << max << endl;
  return 0;
}


void getAvgAndMax(double& avg, double& m) {
  double val = 0, total = 0, count = 0, max =-1;
  cout <<  "Please enter a value, or -1 when you're done" << endl;
  cin >> val;
  while (val != -1) {
    total += val;
    count ++;
    if(val > max) {
      max = val;
    }
    cout << "Please enter a value, or -1 when you're done" << endl;
    cin >> val;
  }
  avg = total/count;
  m = max;
}
