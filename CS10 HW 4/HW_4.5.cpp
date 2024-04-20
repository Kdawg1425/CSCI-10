#include <iostream>
using namespace std;

const int SIZE = 20;

void inputNumber(int number[], int &count);

void swap(int number[], int count);

bool sum(int number1[], int count1, int number2[], int count2, int result[], int &size);

void print(int number[], int count);


int main() {
	int input1[SIZE];
	int input2[SIZE];
	int result[SIZE];
	int count1 = 0;
	int count2 = 0;
	int size = 0;
	cout << "Enter the first number (Max 20 digits)" << endl;
	inputNumber(input1, count1);
	cout << "Enter the second number (Max 20 digits)" << endl;
	inputNumber(input2, count2);
	swap(input1, count1);
	swap(input2, count2);
	bool success = sum(input1, count1, input2, count2, result, size);
	if(success){
		cout << endl;
		print(input1, count1);
		cout << " + ";
		print(input2, count2);
		cout << " = ";
		print(result, size);
		cout << endl;
	}
	else {
		cout << "Integer Overflow" << endl;
	}
	return 0;
}

void inputNumber(int number[], int &count) {
	char ch;
	cin.get(ch);
	while (ch != '\n' && count < SIZE){
		number[count] = ch - '0';
		count++;
		cin.get(ch);
	}
}

void swap(int number[], int count) {
	int i = 0;
	int j = count - 1;
	while (i < j){
		int temp = number[i];
		number[i] = number[j];
		number[j] = temp;
		i++;
		j--;
	}
}

bool sum(int number1[], int count1, int number2[], int count2, int result[], int &size) {
	int sum = 0;
	int extra = 0;
	int i = 0;
	int j = 0;
	while (i < count1 && j < count2 && size < SIZE) {
		sum = number1[i] + number2[j] + extra;
		if (sum > 9){
			extra = sum / 10;
			sum = sum % 10;
		}
		else{
			extra = 0;
		}
		result[size] = sum;
		size++;
		i++;
		j++;
		if(extra != 0 && size == SIZE) {
      return false;
    }
	}
	while (i < count1 && size < SIZE) {
		sum = number1[i] + extra;
		if (sum > 9) {
			extra = sum / 10;
			sum = sum % 10;
		}
		else {
			extra = 0;
		}
		result[size] = sum;
		size++;
		i++;
		if(extra != 0 && size == SIZE) {
      return false;
    }
	}
	while (j < count2 && size < SIZE) {
		sum = number2[j] + extra;
		if (sum > 9){
			extra = sum / 10;
			sum = sum % 10;
		}
		else {
			extra = 0;
		}
		result[size] = sum;
		size++;
		j++;
		if(extra != 0 && size == SIZE) {
      return false;
    }
	}
	if (extra > 0){
		result[size] = extra;
		size++;
	}
	return true;
}

void print(int number[], int count){
	for (int i = count - 1; i >= 0; i--) {
		cout << number[i];
	}
}
