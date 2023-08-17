#include <iostream>
using namespace std;

int main() {
  const int rowSize = 3, colSize = 3;
  int arr[rowSize][colSize];

  // get the array from user
  cout << "Enter the array: " << endl;
  for (int i = 0; i < rowSize; i++)
    for (int j = 0; j < colSize; j++)
      cin >> arr[i][j];

  // compute sum of all elements
  cout << "sum of all elements: " << endl;
  int arrSum = 0;
  for (int i = 0; i < rowSize; i++)
    for (int j = 0; j < colSize; j++)
      arrSum += arr[i][j];
  cout << arrSum << endl;

  // compute the sum of each row
  cout << "sum of each element in the row: " << endl;
  for (int i = 0; i < rowSize; i++) {
    int rowSum = 0;
    for (int j = 0; j < colSize; j++) {
      rowSum += arr[i][j];
      
    }
    cout << rowSum << endl;
  }

  // largest element located in the diagonal
  cout << "largest element in the diagonal: " << endl;
  int largestDiag = arr[0][0];
  for (int i = 1; i < rowSize; i++) {
    if (arr[i][i] > largestDiag)
      largestDiag = arr[i][i];
  }
  cout << largestDiag << endl;
  
  // print the array transpose
  cout << "The transpose: " << endl;
  for (int i = 0; i < rowSize; i++) {
    for (int j = 0; j < colSize; j++) {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }

  return 0;
}
