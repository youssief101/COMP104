#include <iostream>
using namespace std;

int main() {
  float x = 1, sum = 0;
  while (x != 0) {
    cin >> x;
    sum += x * x;
  }
  return 0;
}
