#include <iostream>
#include <cmath>
using namespace std;

int main() {
  const int size = 50;
  double arr[size];

  for (int i = 0; i < size / 2; i++)
    arr[i] = pow((i + 1), 2);

  for (int i = size - 1; i >= size / 2; i--)
    arr[i] = 3 * (i + 1);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << "\t";
    if (i != 0 && (i + 1) % 10 == 0)
      cout << endl;
  }
  cout << endl;
  return 0;
}
