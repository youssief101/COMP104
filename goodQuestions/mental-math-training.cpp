#include <iostream>
#include <random>
#include <cmath>
using namespace std;

void create(int d1n, int d2n, int qn, char op) {
  // create the first number min, max values
  int min1Number = pow(10, d1n - 1);
  int max1Number = pow(10, d1n) - 1;

  // create the secondd number min, max values
  int min2Number = pow(10, d2n - 1);
  int max2Number = pow(10, d2n) - 1;
  
  // create a random number generator engine and seed it
  random_device rd;
  mt19937 gen(rd());

  // define the distribution range for two-digit numbers
  uniform_int_distribution<int> dis1(min1Number, max1Number);
  uniform_int_distribution<int> dis2(min2Number, max2Number);

  switch(op) {
  case '+':
    for (int i = 0; i < qn; i++) {
      // create qn of dn
      int num1 = dis1(gen);
      int num2 = dis2(gen);
      cout << num1 << " + " << num2 << endl;
      cout << num1 + num2 << endl;
    }
    break;
  case '-':
    for (int i = 0; i < qn; i++) {
      // create qn of dn
      int num1 = dis1(gen);
      int num2 = dis2(gen);
      cout << num1 << " - " << num2 << endl;
      cout << num1 - num2 << endl;
    }
    break;
  case '*':
    for (int i = 0; i < qn; i++) {
      // create qn of dn
      int num1 = dis1(gen);
      int num2 = dis2(gen);
      cout << num1 << " x " << num2 << endl;
      cout << num1 * num2 << endl;
    }
    break;
  case '/':
    for (int i = 0; i < qn; i++) {
      // create qn of dn
      int num1 = dis1(gen);
      int num2 = dis2(gen);
      cout << num1 << " / " << num2 << endl;
      cout << num1 / num2 << endl;
    }
    break;
  }
}

int main() {
  int dig1Num = 0, dig2Num = 0;
  int qNum = 0;
  char operationType;
  const int opSize = 4;
  char operations[opSize] = {'+', '-', '*', '/'};

  // get the operations type
  cout << "Enter the operation type: ";
  cin >> operationType;

  for (int i = 0; i < opSize; i++)
    if (operationType == operations[i]) {
      // get number of digits
      cout << "Enter the digits number of first integer: ";
      cin  >> dig1Num;
      
      cout << "Enter the digits number of second integer: ";
      cin >> dig2Num;
      
      // get number of exercises
      cout << "Enter the number of exercises: ";
      cin >> qNum;

      if ((dig1Num <= 0 || dig1Num > 9) || (dig2Num <= 0 || dig2Num > 9)) {
	cout << "invalid number of digits." << endl;
	return -1;
      } else {
	// create qNum of digNum questions:
	create(dig1Num, dig2Num, qNum, operationType);
      }
      return 0;
    }
  cout << "Invalid Operation type" << endl;
  return -1;
}
