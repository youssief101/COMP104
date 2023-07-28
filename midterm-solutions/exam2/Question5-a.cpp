#include <iostream>
using namespace std;

int main() {
    int y = 32;
    if (y < 15)
        if (y != 9)
            cout << "cond1 ";
        else
            --y;
    else if (y == 21)
        y*= 2;
    else
        cout << "cond2 ";

    cout << y << endl;
    return 0;
}

// 21 -> 42
// 9 -> 8
// 32 ->