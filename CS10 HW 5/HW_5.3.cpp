#include <iostream>
#include <cstring>
using namespace std;

bool isSpace(char x);
int wordCount(string str);
void letterCount(string str);

int main() {
  string sentence;
  cout << "Enter in a sentence" << endl;
  getline(cin,sentence);
  cout << wordCount(sentence) << " words" << endl;
  letterCount(sentence);
}

bool isSpace(char x) {
  if(x == ' ') {
    return true;
  }
  else {
    return false;
  }
}

int wordCount(string str) {
  int spaces = 0;
  int i = 0;
  while(isSpace(str.at(i))) {
    i++;
  }
  for(; i < str.length(); i++) {
    if(isSpace(str.at(i))) {
      spaces++;
      while(isSpace(str.at(i++))) {
        if(str.at(i) == '\0'){
          spaces--;
        }
      }
    }
  }
  return spaces + 1;
}

void letterCount(string str) {
  for(int a = 0; a < str.length(); a++) {
    str[a] = tolower(str[a]);
  }
  char origin[str.length()];
  char simple[str.length()];
  strcpy(origin,str.c_str());
  strcpy(simple,str.c_str());
  int size1 = sizeof(origin)/sizeof(origin[0]);
  int size2 = size1;
  for(int i = 0; i < size1; i++) {
    for(int j = i+1; j < size1; j++) {
      if(simple[i] == simple[j]) {
        for(int k = j; k < size1; k++) {
          simple[k] = simple[k+1];
        }
        size1--;
        j--;
      }
    }
  }
  int count[size1];
  char temp;
  for(int b = 0; b < size1; b++) {
    for(int c = b+1; c < size1; c++) {
      if(simple[c] < simple[b]) {
        temp = simple[b];
        simple[b] = simple[c];
        simple[c] = temp;
      }
    }
  }
  for(int l = 0; l < size1; l++) {
    int num = 0;
    for(int m = 0; m < size2; m++) {
      if(simple[l] == origin[m]){
        num++;
      }
    }
    count[l] = num;
  }
  for(int n = 1; n < size1; n++) {
    cout << count[n] << " " << simple[n] << endl;
  }
}
