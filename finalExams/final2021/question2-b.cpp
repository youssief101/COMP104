#include <iostream>
using namespace std;

int main() {
  double x = 1, y = 0;
  do {
    y += static_cast<int>(x) % 3;
    x ++;
  } while (1/x > 0.01);
  return 0;
}
