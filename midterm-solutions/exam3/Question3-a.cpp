#include <iostream>
using namespace std;

int main() {
    int x = 4;
    x += 5 + --x;
    cout << x << endl;
    return 0;
}
