#include <iostream>
using namespace std;

string sub(string input, int start, int size);
int match(string dna, string protein);
string encrypt(string in, int shift);

int main() {
  //string s = "abcdef";
  //cout << sub(s,0,3) << endl;
  //string dna = "ATGCAGAAAGCTACGATCAATGATCGATCAATGGAT";
  //string protein = "AATG";
  //cout << match(dna,protein) << endl;
  cout << encrypt("zoo",3) << endl;
}

string sub(string input, int start, int size) {
  string result = "";
  for(int i = start; i < start + size; i++) {
    result += input[i];
  }
  return result;
}

int match(string dna, string protein) {
  for(int i = 0; i < dna.length()-1; i++) {
    if(sub(dna,i,protein.length()) == protein) {
      return i;
    }
  }
  return -1;
}

string encrypt(string in, int shift) {
  string out = "";
  char c;
  for(int i = 0; i < in.length(); i++) {
    c = in[i] + shift;
    if(c > 'z') {
      c = c - 'z' + 'a' - 1;
    }
    out += c;
  }
  return out;
}
