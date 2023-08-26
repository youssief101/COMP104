#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int x = 2, y = 10, i = 3;
  for (; i > 0; i--) {
    x += y % ++x;
    y *= pow(i, 2);
    i--;
    cout << i << ", " << x << " , " << y << "\n";
  }
  return 0;
}
