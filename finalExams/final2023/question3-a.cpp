#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
  // 1-
  int n = 0;
  cin >> n;
  int sum = compute(n);
  cout << sum << endl;

  // 2-
  sum = 0;
  for (int i = 1; i <= n; i++)
    sum += factorial(i);

  cout << sum << endl;

  // 4-
  
  
  return 0;
}
