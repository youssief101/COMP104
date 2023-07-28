#include <iostream>
using namespace std;

int main() {
    int y = 12;
    if (1 < ++y)
        if (36 > y++)
            cout << "This group\t";

    cout << "Perfect.";
    return 0;
}
