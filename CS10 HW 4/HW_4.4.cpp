#include <iostream>
using namespace std;

int main() {
  int origin[] = {-12, 3, -12, 4, 1, 1, -12, 1, -1, 1, 2, 3, 4, 2, 3, -12};
  int size1 = sizeof(origin)/sizeof(origin[0]);
  int size2 = size1;
  int arr[size1];

  for(int a = 0; a < size1; a++) {
    arr[a] = origin[a];
  }

    for(int i = 0; i < size1; i++) {
      for(int j = i+1; j < size1; j++) {
        if(arr[i] == arr[j]) {
          for(int k = j; k < size1; k++) {
            arr[k] = arr[k+1];
          }
          size1--;
          j--;
        }
      }
    }
  int count[size1];

  int temp;
  for(int b = 0; b < size1; b++) {
    for(int c = b+1; c < size1; c++) {
      if(arr[c] > arr[b]) {
        temp = arr[b];
        arr[b] = arr[c];
        arr[c] = temp;
      }
    }
  }

  for(int l = 0; l < size1; l++) {
    int num = 0;
    for(int m = 0; m < size2; m++) {
      if(arr[l] == origin[m]){
        num++;
      }
    }
    count[l] = num;
  }

  cout << "N   " << "Count" << endl;
  for(int n = 0; n < size1; n++) {
    cout << arr[n] << "   " << count[n] << endl;
  }

}
