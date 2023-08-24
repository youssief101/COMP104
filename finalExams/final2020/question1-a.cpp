#include <iostream>
#include <cmath>
#include "myFunctions.h"
using namespace std;

int main() {
  int n = 0;
  cout << "n = ";
  cin >> n;

  double answer = computeFunction(n);
  cout << "f(n) = " << answer << endl;
  return 0;
}
