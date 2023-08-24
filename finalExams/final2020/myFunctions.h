#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

#include <cmath>

// compute function f(n)
double computeFunction(int n) {
  double result = 0.0, pi = 3.141592654;
  if (n % 2 == 0)
    for (int i = 1; i <= n; i++)
      result += cos(i * pi / 180.0);
  else
    for (int i = 1; i <= n; i++)
      result += sin(i * pi / 180.0);
  return result;
}

// check if the digit is prime or not
bool isPrime(int n) {
  // 0 and 1 are not prime numbers.  int start = 0;
  if (n <= 1)
    return false;

  // only check if the digit is divisible by any number from 2 to its square root
  for (int i = 2; i <= sqrt(n); i++)
    if (n % i == 0)
      return false;
  return true;
}

bool isMagicSquare(int matrix[10][10], int n) {
  // check that each element in the matrix appears once
  // create a linear array from the matrix
  int start = 0, arr[n * n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      arr[start++] = matrix[i][j];

  // check the appearance
  for (int i = 0; i < n * n; i++)
    for (int j = i + 1; j < n * n; j++)
      if (arr[i] == arr[j])
	return false;
  
  // Calculate the sum of the first diagonal
  int sum1 = 0;
  for (int i = 0; i < n; i++) {
    sum1 += matrix[i][i];
  }

  // Calculate the sum of the second diagonal
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += matrix[i][n - i - 1];
  }

  // Check if the sum of the two diagonals are equal
  if (sum != sum1) {
    return false;
  }

  // Check if the sum of each row is equal
  for (int i = 0; i < n; i++) {
    sum = 0;
    for (int j = 0; j < n; j++) {
      sum += matrix[i][j];
    }

    if (sum != sum1) {
      return false;
    }
  }

  // Check if the sum of each column is equal
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = 0; j < n; j++) {
      sum += matrix[j][i];
    }

    if (sum != sum1) {
      return false;
    }
  }

  // The matrix is a magic square
  return true;
}

// convert decimal to binary
double decimalToBinary(double d) {
  return log2(d);
}

// find greatest common divisor
int gcd(int n1, int n2) {
  int remainder = 1;
  while (remainder > 0) {
    remainder = n1 % n2;
    n1 = n2;
    n2 = remainder;
  }
  return n1;
}
#endif
