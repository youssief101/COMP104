#include <iostream>
#include <random>
#include <cmath>
using namespace std;

void create(int dn, int qn) {
  int minNumber = pow(10, dn - 1);
  int maxNumber = pow(10, dn) - 1;
  // create a random number generator engine and seed it
  random_device rd;
  mt19937 gen(rd());

  // define the distribution range for two-digit numbers
  uniform_int_distribution<int> dis(minNumber, maxNumber);
  
  for (int i = 0; i < qn; i++) {
    // create qn of dn
    int num1 = dis(gen);
    int num2 = dis(gen);
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
  }
}

int main() {
  int digNum = 0;
  int qNum = 0;
  // get number of digits
  cout << "Enter the number of digits: ";
  cin  >> digNum;

  // get number of exercises
  cout << "Enter the number of exercises: ";
  cin >> qNum;

  if (digNum <= 0 || digNum > 9) {
    cout << "invalid number of digits." << endl;
    return -1;
  } else {
    // create qNum of digNum questions:
    create(digNum, qNum);
  }
  return 0;
}
