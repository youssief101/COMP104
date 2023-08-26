#include <iostream>
using namespace std;

int main() {
  int A[2][3] = {6, 12, 5, 15, 3, 9};
  int sum = 0;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      if ((i + j) % 2 == 0 && A[i][j] % 3 == 0)
	sum += A[i][j];
      else
	sum += 2 * A[i][j];
      cout << "sum = " << sum << endl;
    }
  }
  return 0;
}
