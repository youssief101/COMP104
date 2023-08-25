#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
  int x = 0;
  cin >> x;

  // compute f(x)
  int result = compute(x);
  cout << result << endl;
  return 0;
}
