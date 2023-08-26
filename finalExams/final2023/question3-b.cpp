#include <iostream>
using namespace std;

int main() {
  int x, i , j;
  for (i = 1; i < 5; i++) {
    cin >> x;
    if (x < 0)
      break;
    for (j = x; j < x + 2; j++)
      cout << "i = " << i << " , j = " << j << ", x = " << x << endl;
  }
  return 0;
}
