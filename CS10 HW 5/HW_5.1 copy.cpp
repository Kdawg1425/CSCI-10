#include <iostream>
using namespace std;

char board[3][3] = {'1','2','3','4','5','6','7','8','9'};
int row = 3;
int col = 3;

void print(char a[3][3]);
bool free(char a[3][3], int row, int col);
int getrow(char a[3][3], char input);
int getcol(char a[3][3], char input);
bool checkX(char a[3][3]);
bool checkO(char a[3][3]);

int main() {
  char input;
  int row;
  int col;
  print(board);
  for(int i = 0; i < 9; i++) {
    if(i % 2 == 0) {
      cout << "Player X select a spot" << endl;
      cin >> input;
      row = getrow(board, input);
      col = getcol(board, input);
      if(free(board,row,col) == true) {
        board[row][col] = 'X';
      }
      else {
        cout << "Invalid Input" << endl;
        i--;
      }
    }
    else {
      cout << "Player O select a spot" << endl;
      cin >> input;
      row = getrow(board, input);
      col = getcol(board, input);
      if(free(board,row,col) == true) {
        board[row][col] = 'O';
      }
      else {
        cout << "Invalid Input" << endl;
        i--;
      }
    }
    print(board);
    if(checkX(board) == true) {
      cout << "Player X wins!" << endl;
      break; 
    }
    if(checkO(board) == true) {
      cout << "Player O wins!" << endl;
      break;
    }
  }
}

void print(char a[3][3]) {
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

bool free(char a[3][3], int row, int col) {
  if(a[row][col] == 'X') {
    return false;
  }
  if(a[row][col] == 'O') {
    return false;
  }
  else{
    return true;
  }
}

int getrow(char a[3][3], char input) {
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      if(a[i][j] == input) {
        return i;
      }
    }
  }
  return 0;
}

int getcol(char a[3][3], char input) {
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      if(a[i][j] == input) {
        return j;
      }
    }
  }
  return 0;
}

bool checkX(char a[3][3]) {
  for(int i = 0; i < 3; i++) {
    if(a[i][0] == 'X' && a[i][1] == 'X' && a[i][2] == 'X') {
      return true;
    }
    if(a[0][i] == 'X' && a[1][i] == 'X' && a[2][i] == 'X') {
      return true;
    }
  }
  return false;
}

bool checkO(char a[3][3]) {
  for(int i = 0; i < 3; i++) {
    if(a[i][0] == 'O' && a[i][1] == 'O' && a[i][2] == 'O') {
      return true;
    }
    if(a[0][i] == 'O' && a[1][i] == 'O' && a[2][i] == 'O') {
      return true;
    }
  }
  return false;
}
