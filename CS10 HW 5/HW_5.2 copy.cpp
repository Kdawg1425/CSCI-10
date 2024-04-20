#include <iostream>
#include <string>
using namespace std;


char arr[100];

int main() {
  string sentence;
  int length;
  cout << "Enter in a sentence" << endl;
  getline(cin,sentence);
  for(int i = 0; i < sentence.length(); i++) {
    sentence[i] = tolower(sentence[i]);
  }
  strncpy(arr,sentence.c_str(),100);
  int j = 0;
  while(arr[j] == ' ') {
    for(int k = j; k < sentence.length(); k++) {
      arr[k] = arr[k+1];
    }
  }
  arr[0] = toupper(arr[0]);
  length = strlen(arr);
  for(int l = 0; l < length; l++) {
    if(arr[l] == ' ' && arr[l] == arr[l+1]) {
      for(int m = l+1; m < length; m++) {
        arr[m] = arr[m+1];
      }
      l--;
    }
    if(arr[l] == '\n') {
      for(int n = l; n < length; n++) {
        arr[n] = arr[n+1];
      }
    }
  }
  cout << length << endl;
  for(int i = 0; i < length; i++) {
    cout << arr[i];
  }
  cout << endl;
}
