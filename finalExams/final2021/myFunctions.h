#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

#include <cmath>
#include <iostream>
using namespace std;

// compute f(x)
int compute(int x) {
  switch(x) {
  case 2:
  case 5:
  case 7:
    return pow(x, 2);
    break;
  case 3:
  case 6:
    return x + 1;
    break;
  default:
    if (x < 0)
      return pow(x, 3);
    else
      return 0;
  }
}


// compute the summation
int compute() {
  int sum = 0;
  for (int i = 3; i <= 10; i++)
    for (int j = i + 1; j <= 15; j++)
      sum += (i + i * j);
  return sum;
}

// find the minimum element in two arrays
int findMin(int arr1[], int arr2[], const int size) {
  int min = arr1[0];
  for (int i = 0; i < size; i++) {
    if (min > arr1[i])
      min = arr1[i];
    if (min > arr2[i])
      min = arr2[i];
  }
  return min;
}

// find the maximum element in two arrays
int findMax(int arr1[], int arr2[], const int size) {
  int max = arr1[0];
  for (int i = 0; i < size; i++) {
    if (max < arr1[i])
      max = arr1[i];
    if (max < arr2[i])
      max = arr2[i];
  }
  return max;
}

// print even numbers in the array only
void printEven(int arr[], const int size) {
  for (int i = 0; i < size; i++)
    if (arr[i] % 2 == 0)
      cout << arr[i] << " ";
  cout << endl;
}

void combine(int arr1[], int arr2[], int arr3[], int size) {
  int start = 0;
  for (int i = 0; i < size; i++) {
    if (arr1[i] % 2 != 0)
      arr3[start++] = arr1[i];
    if (arr2[i] % 2 != 0)
      arr3[start++] = arr2[i];
  }

  // print the new z array
  cout << "new z array: ";
  for (int i = 0; i < start; i++)
    cout << arr3[i] << " ";
  cout << endl;
}

void computeDifference(long int t1, long int t2) {
  // calculate the difference
  long int difTime = t1 - t2;
  int difH = difTime / 3600;
  int difM = (difTime - (difH * 3600)) / 60;
  int difS = difTime - (difH * 3600) - (difM * 60);

  cout << "Time difference = " << difH << ":" << difM << ":" << difS << endl;
}

#endif
