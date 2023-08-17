#include <iostream>
using namespace std;

int main() {
  const int rowSize = 10, colSize = 10;
  int arr[rowSize][colSize];

  // get the array from user
  for (int i = 0; i < rowSize; i++)
    for (int j = 0; j < colSize; j++)
      arr[i][j] = i + j;

  // print out the array
  for (int i = 0; i < rowSize; i++) {
    for (int j = 0; j < colSize; j++)
      cout << arr[i][j] << "\t";
    cout << endl;
  }
  int circumferenceSum = 0;
  // calculate the circumference
  // the right and left side
  for (int i = 0; i < rowSize; i++) {
    // left side
    circumferenceSum += arr[i][0];
    // right side
    circumferenceSum += arr[i][colSize - 1];
  }

  // the up and down side
  for (int j = 1; j < colSize - 1; j++) {
    // top side
    circumferenceSum += arr[0][j];
    // bottom side
    circumferenceSum += arr[rowSize - 1][j];
  }
  cout<< "Circumference sum is: " << circumferenceSum << endl;
  return 0;
}
