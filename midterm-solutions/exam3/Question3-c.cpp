#include <iostream>
using namespace std;

int main() {
    int x = 4;
    x = x++ % 5 || x - 3;
    if (x)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
