#include <iostream>
using namespace std;

int main() {
  int i = 1, f = 5, s = 2;
  while (i <= 7) {
    if (i % 2 == 0) {
      switch (i % 3) {
      case 1:
	f += i;
	break;
      case 2:
	f += 4;
	break;
      default:
	f += 2;
      }
      s *= f;
    }
    cout << "i =" << i << ", f =" << f << ", s =" << s << endl;
    if (f > 12)
      break;
    i++;
  }
  return 0;
}
