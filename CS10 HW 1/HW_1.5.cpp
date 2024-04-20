#include <iostream>
using namespace std;

int main() {
  string str1 = "CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45";
  string str2 = "PHYS 2 at 12:10, CSCI 10 Lab at 2:15";
  string str3 = "PHYS 2 at 12:10";
  string str4 = "No Class";
  int day;

  cout << "1 - Monday" << endl;
  cout << "2 - Tuesday" << endl;
  cout << "3 - Wednesday" << endl;
  cout << "4 - Thursday" << endl;
  cout << "5 - Friday" << endl;
  cout << "6 - Saturday" << endl;
  cout << "7 - Sunday" << endl;

  cout << "Enter the corresponding number for the corresponding\n day of the week." << endl;
  cin >> day;

  switch (day) {
    case 1:
      cout << "Monday: " << str1 << endl;
      break;
    case 2:
      cout << "Tuesday: " << str2 << endl;
      break;
    case 3:
      cout << "Wednesday: " << str1 << endl;
      break;
    case 4:
      cout << "Thursday: " << str3 << endl;
      break;
    case 5:
      cout << "Friday: " << str1 << endl;
      break;
    case 6:
      cout << "Saturday: " << str4 << endl;
      break;
    case 7:
      cout << "Sunday: " << str4 << endl;
      break;
    default:
      cout << "Invalid day" << endl;
  }
  return 0;
}
