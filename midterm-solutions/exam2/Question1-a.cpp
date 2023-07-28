#include <iostream>
using namespace std;

int main() {
    int y = 0;
    cin >> y;
    if (y % 2 != 0 && y != 13)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}