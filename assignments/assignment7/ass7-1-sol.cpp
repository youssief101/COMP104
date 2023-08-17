#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  
  const int size = n;
  int arr1[size], arr2[size];

  // get array1 from the user
  cout << "Enter the first array: ";
  for (int i = 0; i < size; i++)
    cin >> arr1[i];

  cout << "Enter the second array: ";
  for (int i = 0; i < size; i++)
    cin >> arr2[i];

  // create array arr3[i] = arr1[i] - arr2[i]
  int arr3[size];
  for (int i = 0; i < size; i++)
    arr3[i] = arr1[i] - arr2[i];

  // create array arr4[i] = arr1[i]^2 - arr2[i]^2
  int arr4[size];
  for (int i = 0; i < size; i++)
    arr4[i] = pow(arr1[i], 2) - pow(arr2[i], 2);

  // create array arr5[i] = arr1[i]^2 + arr2[i]^2 - arr1[i]arr2[i]
  int arr5[size];
  for (int i = 0; i < size; i++)
    arr5[i] = pow(arr1[i], 2) + pow(arr2[i], 2) - arr1[i] * arr2[i];

  // print arr3
  for (int i = 0; i < size; i++)
    cout << arr3[i] << " ";
  cout << endl;
  
  // print arr4
  for (int i = 0; i < size; i++)
    cout << arr4[i] << " ";
  cout << endl;
  
  // print arr5
  for (int i = 0; i < size; i++)
    cout << arr5[i] << " ";
  cout << endl;
  return 0;
}
