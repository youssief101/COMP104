#include <iostream>
using namespace std;

int main() {
    cout << "Enter two integer values: ";
    float ival1{0.0}, ival2{0.0};
    cin >> ival1 >> ival2;
    cout << "Addition:\n" << ival1 << " + " << ival2 << " = " << ival1 + ival2 << endl; 
    cout << "Subtraction:\n" << ival1 << " - " << ival2 << " = " << ival1 - ival2 << endl;
    cout << "Multiplication:\n" << ival1 << " x " << ival2 << " = " << ival1 * ival2 << endl; 
    cout << "Division:\n" << ival1 << " / " << ival2 << " = " << ival1 / ival2 << endl; 
    cout << "Modulus:\n" << ival1 << " % " << ival2 << " = " << (int)ival1 % (int)ival2 << endl; 
    return 0;
}