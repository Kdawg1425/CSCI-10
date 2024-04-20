#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double a, b, c; //Type has to be lower case
  b=2; //To assign a value to a variable, the value must be on the right of the equal sign and the variable just be on the left
  cout<<"Enter length of hypotenuse"<<endl;
  cin>>c; //Don't need  ">>endl" when setting an input to a variable
  cout<<"Enter length of a side"<<endl; // For printing, arrows need to point toward cout
  cin>>a;
  double intermediate = pow(c, 2)-pow(a, 2);
  b = sqrt(intermediate);
  cout<<"Length of other side is:" << b << endl; //Need to have arrows between the string and variable that are being printed. Also it should end with "endl"
  return 0;
}
