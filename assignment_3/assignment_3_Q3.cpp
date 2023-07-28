#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 2, c = -4, y = 0;
    y = a + --b + ++c * a % c;  // 4
    cout << y << endl;
    y = 2 * ++b + 3 * (a-- - c);// 22
    cout << y << endl;
    y += a * ++b + c-- * a % c ;// 26
    cout << y << endl;
    y *= 4* b + 3 * ( ++a + c );// 234
    cout << y << endl;
    return 0;
}