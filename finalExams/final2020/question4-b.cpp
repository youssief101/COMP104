#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
  const int sizeArr1 = 5;
  const int sizeArr2 = 5;

  int arr1[sizeArr1];
  int arr2[sizeArr2];

  // get arrays from user
  cout << "Enter array 1:";
  for (int i = 0; i < sizeArr1; i++)
    cin >> arr1[i];

  cout << "Enter array 2:";
  for (int i = 0; i < sizeArr2; i++)
    cin >> arr2[i];

  // check the gcd
  for (int i = 0; i < sizeArr1; i++) {
    for (int j = 0; j < sizeArr2; j++) {
      int factor = gcd(max(arr1[i], arr2[j]), min(arr1[i], arr2[j]));
      if (factor == 1)
	cout << "GCD(" << arr1[i] << ", " << arr2[j] << ") = " << factor << endl;
    }
  }
  return 0;
}
