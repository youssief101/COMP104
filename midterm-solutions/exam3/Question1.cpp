#include <iostream>
using namespace std;

int main() {
    int y = 12;
    if (y < 20)
        if (y != 21)
            cout << "cond1 ";
        else
            --y;
    else if (y == 12)
        y += 2;
    else
        cout << "cond2 ";

    cout << y << endl;
    return 0;
}

// 21 -> cond2 21
// 18 -> cond1 18
// 12 -> cond1 12