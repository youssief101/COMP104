#include <iostream>
using namespace std;

int main() {
  double itemPrice = 0.0;
  cin >> itemPrice;

  // check if the itemPrice is valid
  if (itemPrice < 0) {
    cerr << "The price must be greater at least 1 EGP" << endl;
    return -1;
  }

  // calculate taxes
  double govTax = itemPrice * 4 / 100;
  double cityTax = itemPrice * 2 / 100;
  double luxuryTax = 0.0;
  
  // check if the item is a luxury (10%)
  if (itemPrice > 100000)
    luxuryTax = itemPrice * 10 / 100;

  itemPrice +=  govTax + cityTax + luxuryTax;
  // apply the tax 
  cout << "Final Price = " << itemPrice << endl;
  return 0;
}
