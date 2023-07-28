#include <iostream>
using namespace std;

int main() {
    int y = 10;
    if (y++ > 6)
        if (y-- < 20)
            cout << "This group\t";
    
    cout << "Perfect.";
    return 0;
}
