#include <iostream>
using namespace std;

int main() {
  int ival = 0, total = 1, alternator = 0;

  do {
    cin >> ival;
    if (ival < 0)
      break;
    if (alternator % 2 == 0)
      total *= ival;
    else
      total += ival;
    alternator++;
  } while (true);

  cout << "total = " << total << endl;
  return 0;
}

