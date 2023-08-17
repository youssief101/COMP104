#include <iostream>
using namespace std;

double getMin(double (&arr)[], const int size) {
  double min = arr[0];
   for (int i = 0; i < size; i++)
    if (arr[i] < min)
      min = arr[i];
  return min;
}

double getMax(double (&arr)[], const int size) {
  double max = arr[0];
   for (int i = 0; i < size; i++)
    if (arr[i] > max)
      max = arr[i];
  return max;
}

double getTotal(double (&arr)[], const int size) {
  double total = 0;
  for (int i = 0; i < size; i++)
    total += arr[i];

  return total;
}

int main() {
  const int size = 20;
  double arr[size];

  for (int i = 0; i < size; i++)
    cin >> arr[i];

  // display smallest number in the array
  double min = getMin(arr, size);
  cout << min << endl;
  // display largest number in the array
  double max = getMax(arr, size);
  cout << max << endl;
  // display the total of all the numbers in the array
  double total = getTotal(arr, size);
  cout << total << endl;
  // display the average number in the array
  double average = total / size;
  cout << average << endl;
  
  return 0;
}
