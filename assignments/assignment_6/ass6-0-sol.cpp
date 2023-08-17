#include <iostream>
using namespace std;

void drawBox(int bd) {
  for (int i = 0; i < bd; i++) {
    for (int i = 0; i < bd; i++)
      cout << "* ";
    cout << endl;
  }
}

int main() {
  int boxDimension = 0;
  cin >> boxDimension;

  // check the user input
  if (boxDimension < 1)
    return 1;

  // draw the n * n box
  drawBox(boxDimension);
  return 0;
}
