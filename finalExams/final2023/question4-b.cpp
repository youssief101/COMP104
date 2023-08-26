#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
  int x = 0, n = 0;

  // get x, n from user
  cout << "Enter the value of x: ";
  cin >> x;

  cout << "Enter the value of n: ";
  cin >> n;

  // n can't be negative
  if (n < 0) {
    cerr << "n must be greater than 0" << endl;
    return -1;
  }
  
  double summation = computeSummation(x, n);
  cout << summation << endl;
  return 0;
}
