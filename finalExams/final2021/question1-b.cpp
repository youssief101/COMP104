#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  for (int i = 1; i < 9; i++) {
    if (i % 2 == 0)
      sum += i;
    else if (i % 5 == 0)
      break;
    cout << "sum" << sum;
  }
  return 0;
}
