#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    if (n % 7 == 0 || n % 5 == 0)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}