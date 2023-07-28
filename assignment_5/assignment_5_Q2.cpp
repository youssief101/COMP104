#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;   // 5
    if (input < 10) {
        if (input != 5)
            cout << "wow ";
        else
            input++;
    } else if (input == 17)
        input += 10;
    else
        cout << "whoa ";

    cout << input << endl;
}
// wow 3
// whoa 21
// 6
// 27
// wow -5