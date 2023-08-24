#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n = 0, sum = 0;
  cin >> n;

  for (int i = 2; i <= n; i++)
    sum += pow(i, 2) * (i % 4 == 0 ? -1 : 1);

  cout << sum << endl;
  
  return 0;
}
