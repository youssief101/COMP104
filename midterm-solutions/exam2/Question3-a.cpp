#include <iostream>
using namespace std;

int main() {
    int x = 5;
    x += 5 + --x;
    cout << x << endl;
    return 0;
}