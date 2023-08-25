#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
  const int size = 100;
  int x[size], y[size];

  // get the first array from user
  cout << "Enter the first array:";
  for (int i = 0; i < size; i++)
    cin >> x[i];

  // get the second array from user
  cout << "Enter the second array:";
  for (int i = 0; i < size; i++)
    cin >> y[i];
  
  int min = findMin(x, y, size);
  int max = findMax (x, y, size);

  cout << "minimum: " << min << endl;
  cout << "maximum: " << max << endl;
  double ratio = static_cast<double>(min) / max;
  cout << ratio << endl;
  return 0;
}
