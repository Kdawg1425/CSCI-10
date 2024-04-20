 #include <iostream>
 using namespace std;

 int main_hour;
 int main_min;
 char main_time;


 void info(int& hours, int& mins);

 void convert(int& hours, int& mins, char& time);

 void output(int& mins);

 int main() {
   string answer = "";
   while (answer.compare("no") != 0){
     info(main_hour, main_min);
     convert(main_hour, main_min, main_time);
     output(main_min);
     cout << "Do you want to make another convertion? Yes or no?" << endl;
     cin >> answer;
   }
 }


 void info(int& hours, int& mins) {
   cout << "What hour of the day is it?" << endl;
   cin >> hours;
   cout << "What is the minutues?" << endl;
   cin >> mins;
 }

 void convert(int& hours, int& mins, char& time){
   if(hours > 12) {
     hours = hours-12;
     time = 'P';
   }
   else {
     time = 'A';
   }
 }

 void output(int& mins) {
   if(mins < 10) {
     cout << "The time in a 12-hour notation is " << main_hour << ":0" << main_min
          << " " << main_time << ".M." << endl;
   }
   else {
     cout << "The time in a 12-hour notation is " << main_hour << ":" << main_min
          << " " << main_time << ".M." << endl;
   }
 }
