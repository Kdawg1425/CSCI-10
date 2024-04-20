#include <iostream>
using namespace std;

int main()
{
  string p1;
  string p2;
  cout << "Insert Parent 1 Genotype" << endl;
  cin >> p1;
  cout << "Insert Parent 2 Genotype" << endl;
  cin >> p2;
  if (p1 == "GG") {
    if (p2 == "GG") {
      cout << "GG: 100%" << endl;
    }
    else if (p2 == "Gg") {
      cout << "GG: 50%  Gg: 50%" << endl;
    }
    else if (p2 == "gg") {
      cout << "Gg: 100%" << endl;
    }
  }
  else if (p1 == "Gg") {
    if (p2 == "GG") {
      cout << "GG: 50%  Gg:50%" << endl;
    }
    else if (p2 == "Gg") {
      cout << "GG: 25%  Gg: 50%  gg: 25%" << endl;
    }
    else if (p2 == "gg") {
      cout << "Gg: 50%  gg: 50%" << endl;
    }
  }
  else if (p1 == "gg") {
    if (p2 == "GG") {
      cout << "Gg: 100%" << endl;
    }
    else if (p2 == "Gg") {
      cout << "Gg: 50%  gg:50%" << endl;
    }
    else if (p2 == "gg") {
      cout << "gg: 100%" << endl;
    }
  }
  else {
    cout << "Not a valid Genotype." << endl;
  }
  return 0;
}
