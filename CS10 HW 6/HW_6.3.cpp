#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

vector<int> result;

void merge(ifstream& set1, ifstream& set2, ofstream& set3);

int main() {
  ifstream set1("file1.txt");
  ifstream set2("file2.txt");
  ofstream set3;
  set3.open("Output.txt");
  merge(set1,set2,set3);
  set3.close();
  cout << "This is what is outputted in the new file." << endl;
  for(int j = 0; j < result.size(); j++) {
    cout << result[j] << " ";
  }
  cout << endl;
  return 0;
}

void merge(ifstream& set1, ifstream& set2, ofstream& set3) {
  int input;
  while(set1 >> input) {
    result.push_back(input);
  }
  while(set2 >> input) {
    result.push_back(input);
  }
  sort(result.begin(),result.end());
  for(int i = 0; i < result.size(); i++) {
    set3 << result[i] << " ";
  }
  set3 << "\n";
}
