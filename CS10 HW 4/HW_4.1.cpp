#include <iostream>
using namespace std;

int main(){
  double total = 0;
  double input = 0;
  int size;
  double max = 0;
  double min = 30;

  //All of parts a-c

  cout << "How many scores would you like to put in?" << endl;
  cin >> size;
  double scores[size];
  for(int i = 0; i < size; i++) {
    cout << "Enter score " << i+1 << endl;
    cin >> input;
    if(input > 30 || input < 0)  {
      cout << "Invalid input" << endl;
      continue;
    }
    if(input <= 30 && input >=0) {
      scores[i] = input;
      if(input < min) {
        min = input;
      }
      if(input > max) {
        max = input;
      }
    }
  }
  for(int j = 0; j < size; j++){
    total += scores[j];
  }

  cout << "The highest score is " << max << "." << endl;
  cout << "The lowest score is " << min << "." << endl;
  cout << "The average is " << total/size << "." << endl;

  return 0;
}
