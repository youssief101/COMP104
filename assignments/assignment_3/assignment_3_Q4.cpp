#include <iostream>
using namespace std;

int main() {
    int i = 7, j = 5, k = 3;
    // i, j, and k are ints
    if (i < j) {
        if (j < k)
            i = j;
        else
            j = k;
    } else {
        if (j > k)
            j = i;
        else
            i = k;
    }
    cout << "i = " << i << " j = " << j << " k = " << k << endl;
    // (a) i = 5, j = 5, k = 7
    // (b) i = 3, j = 5, k = 5
    // (c) i = 7, j = 3, k = 7
    // (d) i = 5, j = 3, k = 3
    // (e) i = 5, j = 3, k = 5
    // (f) i = 7, j = 7, k = 3
}
