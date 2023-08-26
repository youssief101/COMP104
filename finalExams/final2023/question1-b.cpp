#include <iostream>
using namespace std;

int main() {
  int digit = 0, evenCtr = 0, oddCtr = 0;
  cin >> digit;

  while (digit > 0) {
    if (digit % 2 == 0)
      evenCtr++;
    else
      oddCtr++;
    digit /= 10;
  }
  cout << evenCtr << " even digits and " << oddCtr << " odd digits" << endl;
  return 0;
}
