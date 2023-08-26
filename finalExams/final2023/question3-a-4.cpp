#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
  int n = 0, x = 0, y = 0;

  // get values from user
  cout << "Enter the value of x: ";
  cin >> x;

  cout << "Enter the value of y: ";
  cin >> y;

  cout << "Enter the value of n: ";
  cin >> n;

  // check if x and y are valid
  if (x >= y) {
    cerr << "y must be greater than x" << endl;
    return -1;
  }

  // calulate average of x and y if divisible by n
  double average = computeAverage(x, y, n);
  if (average != 0)
    cout << "Average of " << x << " and " << y << " = " << average << endl;
  else
    cout << "values doesn't satisfy the conditions" << endl;
  return 0;
}
