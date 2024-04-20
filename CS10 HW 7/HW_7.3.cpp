#include <iostream>
#include <fstream>
using namespace std;

double average(ifstream& in);

int main() {
  ifstream inFile("sample.txt");
  cout << "The average word length is " << average(inFile) << endl;
}

double average(ifstream& in) {
  string word;
  char c;
  double sum = 0.0;
  double count = 0.0;
  while(in >> word) {
    c = word[word.length()-1];
    if(c == '\n' || c == ' ' || c == '.' || c == ',') {
      sum += word.length()-1;
    }
    else {
      sum += word.length();
    }
    count++;
  }
  return sum/count;
}
