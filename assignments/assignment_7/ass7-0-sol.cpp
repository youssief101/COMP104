#include <iostream>
using namespace std;

int sum(int (&arr)[], const int size) {
  int sum = 0;
  for (int i = 0; i < size; i++)
    sum += arr[i];

  return sum;
}

double average(int (&arr)[], const int size, int sum) {
  double average = static_cast<double>(sum) / size;
  return average;
}

double aveven(int (&arr)[], const int size) {
  double average = 0.0;
  int counter = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      average += arr[i];
      counter++;
    }
  }

  return average / counter;
}

int mOdd(int (&arr)[], const int size) {
  int product = 1;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 != 0) {
      product *= arr[i];
    }
  }
  return product;
}

int max(int (&arr)[], const int size) {
  int maximum = arr[0];
  for (int i = 0; i < size; i++) {
    if (arr[i] > maximum)
      maximum = arr[i];
  }
  
  return maximum;
}

int min(int (&arr)[], const int size) {
  int minimum = arr[0];
  for (int i = 0; i < size; i++) {
    if (arr[i] < minimum)
      minimum = arr[i];
  }
  
  return minimum;
}

int main() {
  const int size = 10;
  int arr[size];

  // get the array from the user
  for (int i = 0; i < size; i++)
    cin >> arr[i];
  
  int arrSum = sum(arr, size);
  double arrAverage = average(arr, size, arrSum);
  double averageEven = aveven(arr, size);
  int prodOdd = mOdd(arr, size);
  int maxim = max(arr, size);
  int minim = min(arr, size);

  cout << "Sum of all array elements is: " << arrSum << endl
       << "The average of all the array elements is: " << arrAverage << endl
       << "The average of even numbers is: " << averageEven << endl
       << "The product of odd numbers is: " << prodOdd << endl
       << "The maximum value is: " << maxim << endl
       << "The minimum value is: " << minim << endl
       << "The difference between max and min is: " << maxim - minim << endl;
  
  return 0;
}
