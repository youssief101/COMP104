#include <iostream>
using namespace std;

int main() {
    int userInput = 0;
    cin >> userInput;
    if (userInput < 0 || userInput > 6) {
        cout << "invalid input" << endl;
        return -1;
    }
    switch (userInput) {
        case 0:
            cout << "Saturday" << endl;
            break;
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;
            break;
        default:
            cout << "invalid input" << endl;
            break;
    }
    return 0;
}