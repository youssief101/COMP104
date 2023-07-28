#include <iostream>
using namespace std;

int main() {
    int i = 100;
    int j1 = 2 * i / 3 % 4;     // 2
    float j2 = 2 * i / 3 % 4;   // 2
    /*
    int j3 = 2.4 * i / 3 % 4;   // compilation error
    float j4 = 2.4 * i / 3 % 4; // compilation error*/
    return 0;
}
