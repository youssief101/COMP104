#include <iostream>
using namespace std;

int main() {
    int z;
    cin >> z;
    if (z >= 5 && z % 2 != 0)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
