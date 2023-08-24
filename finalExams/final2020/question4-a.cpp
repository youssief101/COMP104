#include <iostream>
#include <cmath>
#include "myFunctions.h"
using namespace std;

int main() {
  double decimalNumber = 0;
  cin >> decimalNumber;

  // convert decimal to binary
  double binary = decimalToBinary(decimalNumber);
  cout << decimalNumber
       << "can be represented as "
       << "2^(" << binary << ")" << endl;
  
  return 0;
}
