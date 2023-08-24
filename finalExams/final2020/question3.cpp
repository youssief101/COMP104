#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
  // Get the size of the matrix
  int n;
  cout << "Enter the size of the matrix: ";
  cin >> n;

  // Create a 2D array to store the matrix
  int matrix[10][10];

  // Get the elements of the matrix from the user
  cout << "Enter the elements of the matrix: " << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  // Check if the matrix is a magic square
  bool isMagic = isMagicSquare(matrix, n);

  // Print the result
  if (isMagic) {
    cout << "The matrix is a magic square" << endl;
  } else {
    cout << "The matrix is not a magic square" << endl;
  }

  return 0;
}
