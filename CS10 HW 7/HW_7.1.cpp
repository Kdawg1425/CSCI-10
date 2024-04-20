#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void modify(ifstream& in, ofstream& out);


int main() {
  ifstream infile;
  infile.open("Students.txt");
  ofstream outfile;
  outfile.open("Result.txt");
  modify(infile, outfile);
  infile.close();
  outfile.close();
}

void modify(ifstream& in, ofstream& out) {
  double sum;
  double score;
  double average;
  string output;
  while(in >> output) {
    out << output;
    out << " ";
    in >> output;
    out << output;
    out << " ";
    sum = 0;

    for(int i = 0; i < 10; i++) {
      in >> score;
      sum += score;
      out << score;
      out << " ";
    }
    average = sum/10;
    out << average;
    out << "\n";
  }

}
