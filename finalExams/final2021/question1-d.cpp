#include <iostream>
using namespace std;

int main() {
  int t = 0;
  for (int i = 1; i <= 2; i++)
    for (int j = 5; j < 8; j += 2) {
      t += i * j;
      cout << "i = " << i << ", j" << j << " ,t = " << t;
    }
  return 0;
}
