#include <iostream>
using namespace std;

int main() {
  double lbs;
  double kgs;
  double min;
  int mets;
  double calories;

  cout << "Enter the number of METS of the activity." << endl;
  cout << "Here are some examples." << endl;

  cout << "Running 6 MPH: 10 METS" << endl;
  cout << "Baketball: 8 METS" << endl;
  cout << "Sleeping: 1 MET" << endl;

  cin >> mets;

  cout << "How many pounds do you weigh?" << endl;
  cin >> lbs;

  cout << "How long did you do this activity? (in minutes)" << endl;
  cin >> min;

  kgs = lbs/2.2;
  calories = 0.0175 * mets * kgs * min;

  cout << "You burned about " << calories << " calories total." << endl;

  return 0;
}
