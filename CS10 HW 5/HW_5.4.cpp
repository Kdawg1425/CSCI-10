#include <iostream>
#include <fstream>
using namespace std;

string clean(string input);
string getTitle(string input, int& marker1);
string getAuthorLast(string input, int& marker2);
string getAuthorFirst(string input, int& marker1, int& marker2);
struct CD {
  string title;
  string authorLast;
  string authorFirst;
};

int main() {
  string txt;
  int marker1;
  int marker2;
  ifstream file1("music.txt");
  ofstream file2("outfile.txt");
  string temp;
  CD line;
  string result;
  while(getline(file1,txt)){
    temp = clean(txt);
    cout << temp << endl;
    line.title = getTitle(temp, marker1);
    line.authorLast = getAuthorLast(temp, marker2);
    line.authorFirst = getAuthorFirst(temp, marker1, marker2);
    cout << line.authorLast << " ";
    cout << line.authorFirst << " ";
    cout << line.title << endl;

    result = line.authorLast + " " + line.authorFirst + "" + line.title;
    file2 << result;
  }

  return 0;
}

string clean(string input) {
  int size = input.length();
  string fix = input.substr(3,size);
  for(int i = 0; i < size; i++) {
    if(fix[i] == ' ' && fix[i] == fix[i+1]) {
      for(int j = i+1; j < size; j++) {
        fix[j] = fix[j+1];
      }
      i--;
    }
  }
  return fix;
}

string getTitle(string input, int& marker1) {
  int size = input.length();
  for(int k = size-1; k >= 0; k--) {
    if(input[k] == '-') {
      marker1 = k-1;
      break;
    }
  }
  return input.substr(0,marker1);
}

string getAuthorLast(string input, int& marker2) {
  int size = input.length();
  for(int i = size-1; i >= 0; i--) {
    if(input[i] == ' ') {
      marker2 = i;
      break;
    }
  }
  return input.substr(marker2+1,size);
}

string getAuthorFirst(string input, int& marker1, int& marker2) {
  return input.substr(marker1+1,marker2);
}
