#include <iostream>
using namespace std;

enum PRICE_CATEGORY {
  CHEAP = 1,
  MEDIUM = 30,
  EXPENSIVE = 100
};

int main() {
  double productPrice = 0;

  // get price from the user
  cout << "Enter the price of the product: ";
  cin >> productPrice;

  // check if the product price is valid
  if (productPrice < 0) {
    cerr << "The product price must be positive value" << endl;
    return -1;
  }
  
  if (productPrice >= CHEAP && productPrice < MEDIUM)
    cout << "product is cheap" << endl;
  else if (productPrice >= MEDIUM && productPrice < EXPENSIVE)
    cout << "product is medium" << endl;
  else
    cout << "product is expensive" << endl;
  
  return 0;
}
