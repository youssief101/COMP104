#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
  int x = 0, y = 0, counter = 0;
  cout << "x = ";
  cin >> x;
  cout << "y = ";
  cin >> y;

  // count the prime number starting from x to y
  int i = x;
  do {
    if (isPrime(i++))
      counter++;
  } while (i <= y);
  
  cout << "The number of prime numbers between "
       << x << " and " << y << " is " << counter << endl;
  return 0;
}
