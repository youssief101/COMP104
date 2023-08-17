#include <iostream>
using namespace std;

int main() {
    int x = 4;
    switch (x * 3) {
        case 9:
            cout << "9,";
        default: 
            cout << "default,";
        case 6:
            cout << "6,";
            break;
        case 12:
            cout << "12,";
    }
    return 0;
}
