#include <iostream>
using namespace std;

enum SandOp {
  SPICY_CRISPY_CHICKEN_SANDWICH = 1,
  BIG_MAC,
  CHICKEN_MCNUGGETS
};

int main() {
  int choice = 0;
  double price = 0.0;
  SandOp chosenOption;

  cout << "Which sandwich you would like to have:" << endl
       << "1- Spicy Crispy Chicken Sandwich" << endl
       << "2- Big Mac" << endl
       << "3- Chicken McNuggets" << endl;

  cout << "Please enter your choice:";
  cin >> choice;

  switch (choice) {
  case SPICY_CRISPY_CHICKEN_SANDWICH:
    price = 5.99;
    cout << "The price for Spicy Crispy Chicken Sandwich is $" << price << endl;
    break;

  case BIG_MAC:
    price = 4.25;
    cout << "The price for Big Mac is $" << price << endl;
    break;

  case CHICKEN_MCNUGGETS:
    price = 3.99;
    cout << "The price for Chicken McNuggets is $" << price << endl;
    break;

  default:
    cout << "Invalid Option" << endl;
    return -1;
  }
  return 0;
}
