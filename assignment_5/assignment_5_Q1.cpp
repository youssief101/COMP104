#include <iostream>
using namespace std;

int numberOfDigits(int ival) {
    if (ival < 0) 
        ival = -ival;

    int numDigits = 1;

    while (ival >= 10) {
        ival /= 10;
        numDigits++;
    }

    return numDigits;
}

int main() {
    int userInput = 0, sum = 0;
    cout << "Enter a six digits number: ";
    cin >> userInput;
    int inputSize = numberOfDigits(userInput);
    if (inputSize != 6) {
        cout << "the size of the input is not 6 digits!, \"invalid input\"" << endl;
        return -1;
    } else {
        for (int i = 1; i <= 6; ++i) {
            sum += userInput % 10;
            userInput /= 10;
        }
        cout << "The sum is: " << sum << endl;
    }
    return 0;
}