#include <iostream>
using namespace std;

int main() {
  int x = 3, y = 4, a, b;
  a = (x + 1 > 5 ? 10 : 20);
  cout << "a = " << a << endl;
  b = (x + y > x * y / 2 ? (y + 3 > 5 ? 30 : 40) : 0);
  cout << "b = " << b << endl;
  return 0;
}
