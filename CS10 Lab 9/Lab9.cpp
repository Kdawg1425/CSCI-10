#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

struct Student{
  string first;
  string last;
  string classYear;
  double gpa;
};




double average(double arr[], int size);

int main()
{

/*double arr[1000];
int i = 0;
ifstream instream;
instream.open("infile.txt");
ofstream outStream("outfile.txt");
if(instream.fail()) {
  cout << "Input file opening failed. \n";
  exit(1);
}
while(instream >> arr[i])
{
  i++;
}
instream.close();
int size = i + 1;
double avg = average(arr, size);
outStream << avg << endl;
for(int j = 0; j < size; j++)
{
  if(avg<arr[j])
  {
  outStream << arr[j] << endl;
  }
}
outStream.close();*/

ifstream inStream("stulist.txt");
if(inStream.fail()) {
  cout << "Input file opening failed. \n";
  exit(1);
}
int i = 0;
Student arrStu[1000];
while(inStream >> arrStu[i].first)
{
  inStream >> arrStu[i].last;
  inStream >> arrStu[i].classYear;
  inStream >> arrStu[i].gpa;
  i++;
}
int size = i + 1;
inStream.close();

for(int j = 0; j < size; j++) {
  cout << arrStu[j].first << " " << arrStu[j].last << endl;
  cout << arrStu[j].classYear << endl;
  cout << arrStu[j].gpa << endl;
}


}

double average(double arr[], int size){
    double total=0;
    for(int i=0; i<size; i++){
        total=total+arr[i];
    }
    return total/size;
}
