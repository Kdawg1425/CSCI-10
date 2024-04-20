#include <iostream>
using namespace std;

void deleteRepeats(char a[], int& s);

int main() {
  int size = 8;
  char arr[size];
  arr[0] = 'a';
  arr[1] = 'b';
  arr[2] = 'a';
  arr[3] = 'c';
  arr[4] = 'd';
  arr[5] = 'b';
  deleteRepeats(arr, size);
  for(int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
  cout << size << endl;
}

void deleteRepeats(char a[],int& s){
  int count = 0;
  for(int i = 0; i < s; i++){
    for(int j = i+1; j < s; j++){
      if(a[i] == a[j]) {
        a[j] = a[j+1];
      }
    }
  }
  for(int k = 0; k < s; k++) {
    if(a[k] == '\0') {
      break;
    }
    else{
      count++;
    }
  }
  s = count;
}
