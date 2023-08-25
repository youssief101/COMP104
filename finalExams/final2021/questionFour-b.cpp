#include <iostream>
using namespace std;

int main() {
  const int rowSize = 5;
  const int colSize = 4;
  double matrix[rowSize][colSize] = {
    {43, 67, 88, 90},
    {65, 77, 78, 80},
    {78, 90, 58, 87},
    {48, 67, 86, 89},
    {52, 75, 45, 55}
  };

  for (int i = 0; i < rowSize; i++) {
    for (int j = 0; j < colSize; j++) {
      matrix[i][j] += (matrix[i][j] * 5) / 100;
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  
  double sum;
  for (int i = 0; i < rowSize; i++) {
    sum = 0;
    for (int j = 0; j < colSize; j++) {
      sum += matrix[i][j];
    }
    cout << sum << endl;
  }
  return 0;
}
