#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
  double quiz1;
  double quiz2;
  double midterm;
  double final;
};

void getGrade(Student& stu);
void printGrades(Student& stu);
double calculate(double input, double total);


int main() {
  Student stu;
  getGrade(stu);
  printGrades(stu);
}


void getGrade(Student& stu) {
  double grade;
  Line1:
  cout << "Enter student's first quiz grade. (Highest score is 10)" << endl;
  cin >> grade;
  if(grade <= 10 && grade >= 0) {
    stu.quiz1 = grade;
  }
  else {
    cout << "Invalid grade input" << endl;
    goto Line1;
  }
  Line2:
  cout << "Enter student's second quiz grade. (Highest score is 10)" << endl;
  cin >> grade;
  if(grade <= 10 && grade >= 0) {
    stu.quiz2 = grade;
  }
  else {
    cout << "Invalid grade input" << endl;
    goto Line2;
  }
  Line3:
  cout << "Enter student's midterm grade. (Highest socre is 100)" << endl;
  cin >> grade;
  if(grade <= 100 && grade >= 0) {
    stu.midterm = grade;
  }
  else {
    cout << "Invalid grade input" << endl;
    goto Line3;
  }
  Line4:
  cout << "Enter student's final grade. (Highest socre is 100)" << endl;
  cin >> grade;
  if(grade <= 100 && grade >= 0) {
    stu.final = grade;
  }
  else {
    cout << "Invalid grade input" << endl;
    goto Line4;
  }
}

void printGrades(Student& stu) {
  double p1 = calculate(stu.quiz1,10.0);
  double p2 = calculate(stu.quiz2,10.0);
  double p3 = calculate(stu.midterm,100.0);
  double p4 = calculate(stu.final,100.0);
  double result = 0;
  cout << "Quiz 1: " << stu.quiz1 << "/10 " << p1 << "%" << endl;
  cout << "Quiz 2: " << stu.quiz2 << "/10 " << p2 << "%" << endl;
  cout << "Midterm: " << stu.midterm << "/100 " << p3 << "%" << endl;
  cout << "Final: " << stu.final << "/100 " << p4 << "%" << endl;
  result += ((p1 + p2)/2) * 0.25;
  result += p3 * 0.25;
  result += p4 * 0.50;
  if(result <= 100 && result >= 90) {
    cout << "Grade: A  ";
  }
  if(result < 90 && result >= 70) {
    cout << "Grade: B  ";
  }
  if(result < 80 && result >= 70) {
    cout << "Grade: C  ";
  }
  if(result < 70 && result >= 60) {
    cout << "Grade: D  ";
  }
  if(result < 60) {
    cout << "Grade: F  ";
  }
  cout << result << "%" << endl;
}

double calculate(double input, double total) {
  double result = input/total;
  result = result * 100;
  return result;
}
