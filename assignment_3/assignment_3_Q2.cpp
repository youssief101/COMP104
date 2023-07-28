#include <iostream>
using namespace std;
    /*
    int n1, n2, d1; // 1
    // Get two numbers from the user
    cin << n1 << n2; // 2   // compilation error << -> >>, << -> >>
    // Compute sum of the two numbers
    cout << n1 + n2 << endl; // 3
    // Compute average of the two numbers
    cout << n1+n2/2 << endl; // 4   // logic error -> (n1 + n2) / 2
    // Assign some variables
    d1 = d2 = 0; // 5   // compilation error d2 is unknown identifier
    // Compute a quotient
    cout << n1/d1 << endl; // run-time error
    // Compute a product
    n1*n2 = d1; // 7    // compilation error "d1 = n1 * n2"
    // Print result
    cout << d1 << "\n"; // 8
    return 0 // compilation error semi colon is error
    */
int main() {
    // correction of the program
    int n1, n2, d1;
    // Get two numbers from the user
    cin >> n1 >> n2 >> d1; 
    // compute the sum of the two numbers
    cout << n1 + n2 << endl;
    // compute average of the two numbers
    cout << (n1 + n2) / 2 << endl;
    cout << n1 / d1 << endl;
    // compute the product
    d1 = n1 * n2;
    // print result
    cout << d1 << "\n";
    return 0;
    // assign variables
}