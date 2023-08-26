#include <iostream>
using namespace std;

int main() {
  int a = 1, b = 1, c = 0, d = 4;
  cout << (d < 5 || a == b && --a == c) << "\n" << a;
  
  return 0;
}
