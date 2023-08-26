#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
  int size = 0;

  // get the size of the array
  cout << "Enter the size of the array: ";
  cin >> size;

  const int arrSize = size;
  int arr[arrSize];

  // get the array from the user
  cout << "Enter the array elements: ";
  for (int i = 0; i < arrSize; i++)
    cin >> arr[i];

  double mid_range = midRange(arr, arrSize);
  cout << "midrange = " << mid_range << endl;
  return 0;
}
