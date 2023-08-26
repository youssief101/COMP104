#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

#include <cmath>

int compute(int n) {
  int sum = 0;
  for (int i = 2, k = 1; i <= n; i++, k++)
    sum += pow(i, 2) * pow(-1, k + 1);
  return sum;
}

int factorial(int val) {
  if (val > 1)
    return factorial(val - 1) * val;
  return 1;
}

double computeAverage(int x, int y, int n) {
  double average = 0.0;
  // make sure n > 0 divding by zero is a run time error
  if (n > 0 && x % n == 0 && y % n == 0)
    average =  (x + y) / 2;
  else
    return 0;
  return average;
}

// function that calculate summation of sqrts
double computeSummation(int x, int n) {
  double sum = 0.0;

  for (int i = 1; i <= n; i++)
    sum += sqrt(pow(x, 2) + pow(i, 2));

  return sum;
}

int findMax(int arr[], const int size) {
  int max = arr[0];
  for (int i = 1; i < size; i++)
    if (max < arr[i])
      max = arr[i];
  return max;
}

int findMin(int arr[], const int size) {
  int min = arr[0];
  for (int i = 1; i < size; i++)
    if (min > arr[i])
      min = arr[i];
  return min;
}

// function that calculate the midrange of integers in array
double midRange(int arr[], const int size) {
  int minValue = findMin(arr, size);
  int maxValue = findMax(arr, size);
  double mid_range = (maxValue + minValue) / 2;
  return mid_range;
}
#endif
