#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void fixer(ifstream& in, ofstream& out);

int main(){
  string fixes;
  string input1;
  string input2;
  string remainder;
  ifstream inFile;
  ofstream outFile;
  inFile.open("code.txt");
  outFile.open("fixcode.txt");
  fixer(inFile,outFile);
  inFile.close();
  outFile.close();
}

void fixer(ifstream& in, ofstream& out) {
  string fixes;
  string input1;
  string input2;
  string remainder;
  while(in && out){
    in >> input1 >> input2;
    getline(in,remainder);
    if(input1 == "cin")
      out << "cin >> " << remainder << endl;
    if(input1 == "cout")
      out << "cout << " << remainder << endl;
  }
}
