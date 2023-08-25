#include <iostream>
#include <cmath>
#include "myFunctions.h"
using namespace std;

int main() {
  const int size = 5;
  int x[size], y[size];

  // enter array x
  cout << "Enter array x: ";
  for (int i = 0; i < size; i++)
    cin >> x[i];

  // enter array y
  cout << "Enter array y: ";
  for (int i = 0; i < size; i++)
    cin >> y[i];

  // print even numbers in x, and y
  cout << "Even integers in array x: ";
  printEven(x, size);

  cout << "Even integers in array y: ";
  printEven(y, size);

  // combine x, and y in z without even integers
  // worst case all integers in the two arrays odd
  int z[size * 2];
  combine(x, y, z, size);
  return 0;
}
