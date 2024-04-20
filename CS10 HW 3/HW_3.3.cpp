#include <iostream>
using namespace std;

int feet;
double inches;
int meters;
double centimeters;
int pounds;
double ounces;
int kilograms;
double grams;


void getUS(int& ft, double& in);
void getSI(int& m, double& cm);
void usToSI(int& ft, double& in, int& m, double& cm);
void siToUS(int& ft, double& in, int& m, double& cm);
void printSI(int& m, double& cm);
void printUS(int& ft, double& in);
void lengthConvert(int& ft, double& in, int& m, double& cm);
void getLbs(int& lbs, double& oz);
void getKg(int& kg, double& g);
void lbsToKg(int& lbs, double& oz, int& kg, double& g);
void kgToLbs(int& lbs, double& oz, int& kg, double& g);
void printLbs(int& lbs, double& oz);
void printKg(int& kg, double& g);
void weightConvert(int& lbs, double& oz, int& kg, double& g);





int main() {
  string answer = "yes";
  while(answer.compare("yes") == 0) {
    int decision;
    cout << "Do you want to convert length or weight? Type 1 for length and type 2 for weight." << endl;
    cin >> decision;
    if(decision == 1) {
      lengthConvert(feet,inches,meters,centimeters);
    }
    else if(decision == 2){
      weightConvert(pounds, ounces, kilograms, grams);

    }
    else {
      cout << "Invalid input. Enter a valid number." << endl;
    }
    cout << "Do you want to do another convertion calculation again? Yes or no?" << endl;
    cin >> answer;
  }

}

void getUS(int& ft, double& in){
  cout << "Enter the number of feet." << endl;
  cin >> ft;
  cout << "Enter the number of inches." << endl;
  cin >> in;
}

void getSI(int& m, double& cm) {
  cout << "Enter the number of meters." << endl;
  cin >> m;
  cout << "Enter the number of centimeters." << endl;
  cin >> cm;
}

void usToSI(int& ft, double& in, int& m, double& cm) {
  m = ft*0.3048;
  cm = (in*2.54) + (100*((ft*0.3048)-m));
  if(cm >= 100) {
    int extra = cm/100;
    m = m + extra;
    cm = cm - (extra*100);
  }
}

void siToUS(int& ft, double& in, int& m, double& cm) {
  ft = m/0.3048;
  in = (cm/2.54) + (12*((m/0.3048)-ft));
  if(in >=12) {
    int extra = in/12;
    ft = ft + extra;
    in = in - (extra*12);
  }
}

void printSI(int& m, double& cm){
  cout << "Meter(s): " << m << endl;
  cout << "Centimeter(s): " << cm << endl;
}

void printUS(int& ft, double& in){
  cout << "Foot(s): " << ft << endl;
  cout << "Inche(s): " << in << endl;
}

void lengthConvert(int& ft, double& in, int& m, double& cm) {
  int decision;
  cout << "Do you want to convert ft/in to m/cm or m/cm to ft/in? Type 1 for ft/in to m/cm. Type 2 for m/cm to ft/in." << endl;
  cin >> decision;
  if(decision == 1) {
    getUS(ft,in);
    usToSI(ft,in,m,cm);
    printSI(m,cm);
  }
  else if(decision == 2) {
    getSI(m,cm);
    siToUS(ft,in,m,cm);
    printUS(ft,in);
  }
  else {
    cout << "Invalid input. Enter a valid number." << endl;
  }
}

void getLbs(int& lbs, double& oz) {
  cout << "Enter the number of pounds." << endl;
  cin >> lbs;
  cout << "Enter the number of ounces." << endl;
  cin >> oz;
}

void getKg(int& kg, double& g) {
  cout << "Enter the number of kilograms." << endl;
  cin >> kg;
  cout << "Enter the number of grams." << endl;
  cin >> g;
}

void lbsToKg(int& lbs, double& oz, int& kg, double& g) {
  kg = lbs*0.453592;
  g = (oz*28.3495) + (((lbs*0.453592)-kg)*1000);
  if(g >= 1000) {
    int extra = g/1000;
    kg = kg + extra;
    g = g - (extra*1000);
  }
}

void kgToLbs(int& lbs, double& oz, int& kg, double& g) {
  lbs = kg*2.20462;
  oz = (g*0.035274) + (((kg*2.20462)-lbs)*16);
  if(oz >= 16) {
    int extra = oz/16;
    lbs = lbs + extra;
    oz = oz - (extra*16);
  }
}

void printLbs(int& lbs, double& oz) {
  cout << "Pound(s): " << lbs << endl;
  cout << "Ounce(s): " << oz << endl;
}

void printKg(int& kg, double& g) {
  cout << "Kilogram(s): " << kg << endl;
  cout << "Gram(s): " << g << endl;
}

void weightConvert(int& lbs, double& oz, int& kg, double& g) {
  int decision;
  cout << "Do you want to convert lbs/oz to kg/g or kg/g to lbs/oz? Type 1 for lbs/g to kg/g. Type 2 for kg/g to lbs/oz." << endl;
  cin >> decision;
  if(decision == 1) {
    getLbs(lbs,oz);
    lbsToKg(lbs,oz,kg,g);
    printKg(kg,g);
  }
  else if(decision == 2) {
    getKg(kg,g);
    kgToLbs(lbs,oz,kg,g);
    printLbs(lbs,oz);
  }
  else {
    cout << "Invalid input. Enter a valid number." << endl;
  }
}
