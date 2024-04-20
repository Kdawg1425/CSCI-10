#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

vector<int> nums;

void modify(ifstream& in, ofstream& out);


int main() {
  ifstream infile;
  infile.open("Students2.txt");
  ofstream outfile;
  outfile.open("Result2.txt");
  modify(infile, outfile);
  infile.close();
  outfile.close();
}

void modify(ifstream& in, ofstream& out) {
  double sum;
  vector<double> nums;
  double average;
  string output;
  string temp = "";
  int count;
  char x;
  while(in >> output) {
    nums.clear();
    out << output;
    out << " ";
    in >> output;
    out << output;
    out << " ";
    sum = 0;
    count = 0;

    getline(in,output);
    output = output.substr(1,output.length());
    cout << output << endl;
    for(int i = 0; i < output.length(); i++) {
      x = output[i];
      if(x == ' ') {
        nums.push_back(stod(temp));
        temp = "";
      }
      else {
          temp = temp + x;
      }
    }
    nums.push_back(stod(temp));
    if(nums.size() < 10) {
      for(int j = 0; j < 10-nums.size(); j++) {
        nums.push_back(0);
      }
    }
    for(int k = 0; k < 10; k++) {
      out << nums[k] << " ";
      sum += nums[k];
    }
    average = sum/10;
    out << average;
    out << "\n";
    
  }

}
