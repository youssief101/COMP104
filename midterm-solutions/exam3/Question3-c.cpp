#include <iostream>
using namespace std;

int main() {
    int x = 4;
    x = 5 / x && x - 4;
    if (x)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
