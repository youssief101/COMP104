#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;
    if (input < 10)
        if (input != 8)
            cout << "wow ";
        else
            input++;
    else if (input == 12)
        input += 10;
    else
        cout << "whoa ";
    cout << input << endl;
    return 0;
}

// 8 -> 9
// 12 -> 22
// 11 -> whoa 11