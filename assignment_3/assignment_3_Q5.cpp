#include <iostream>
using namespace std;

int main() {
    int userChoise{0};
    cout << "Which sandwich you would like to have: " << endl;
    cout << "1- Spicy Crispy Chicken Sandwich" << endl;
    cout << "2- Big Mac" << endl;
    cout << "3- Chicken McNuggets" << endl;

    cout << "\nPlease enter your choice: ";
    cin >> userChoise;
    
    switch (userChoise) {
        case 1:
            cout << "The price for Spicy Crispy Chicken Sandwich is LE50" << endl;
            break;
        case 2:
            cout << "The price for Big Mac is LE80" << endl;
            break;
        case 3:
            cout << "The price for Chicken McNuggets is LE180" << endl;
            break;
        default:
            cout << "No valid input" << endl;
            break;
    }
    return 0;
}