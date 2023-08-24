#include <iostream>
using namespace std;

int main() {
  int i = 1, f = 3, s = 1;
  switch(i % 3) {
  case 1:
    f += 1;
    cout << "f = " << f;
  case 2:
    f += 2;
    cout << "f = " << f;
    break;
  default:
    f += 3;
    cout << "f = " << f;
  }
  return 0;
}
