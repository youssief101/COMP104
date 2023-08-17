#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    // n is between 0 and 20 but not odd
    if (n % 3 == 0 || n % 7 == 0)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}