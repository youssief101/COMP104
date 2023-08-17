#include <iostream>
using namespace std;

double getMax(double (&arr)[], const int size) {
  double max = arr[0];
  for (int i = 0; i < size; i++)
    if (arr[i] > max)
      max = arr[i];
  return max;
}

double getSecondMax(double (&arr)[], const int size, double max) {
  double secondMax = arr[0];
  for (int i = 0; i < size; i++)
    if (arr[i] > secondMax && arr[i] != max)
      secondMax = arr[i];
  return secondMax;
}
int main() {
  const int size = 20;
  double arr[size];

  // get array from the user
  for (int i = 0; i < size; i++)
    cin >> arr[i];

  // get the maximum element in the array
  double max = getMax(arr, size);
  cout << "largest element: " << max << endl;
  double secondMax = getSecondMax(arr, size, max);
  cout << "second largest element: " << secondMax << endl;
  return 0;
}
