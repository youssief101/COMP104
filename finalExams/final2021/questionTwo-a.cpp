#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n = 0, sum = 0;
  cin >> n;

  // create the series
  for (int i = 1; i <= n; i++)
    sum += pow(-1, i + 1) * pow(i, 2);

  cout << sum << endl;
  return 0;
}
