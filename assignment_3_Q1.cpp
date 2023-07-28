#include <iostream>
using namespace std;

int main() {
    int i = 100;
    int j1 = 2 * i / 3 % 4; // 2
    float j2 = 2 * i / 3 % 4; // 2
    int j3 = static_cast<int>(2.4 * i / 3) % 4;
    float j4 = static_cast<float> (2.4 * i / 3) / 4;
    return 0;
}
