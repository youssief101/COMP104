#include <iostream>
using namespace std;

int main() {
    int x = 5;
    x = x++ % 5 || x - 5;
    if (x)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
