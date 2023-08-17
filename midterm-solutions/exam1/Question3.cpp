#include <iostream>
using namespace std;

int main() {
    // a
    int x = 4;
    x += 2 + ++x;
    cout << x << endl;

    // b
    x = 4;
    x = x % 3 * 5;
    cout << x << endl;

    // c
    x = 4;
    x = 10 / x && x - 7;
    if (x)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    // d
    x = 4;
    x = x % 5 || x++ - 5;
    if (x)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
