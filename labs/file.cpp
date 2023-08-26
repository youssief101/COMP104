#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, key, luxury;

    do {
        cout << "enter price = ";
        cin >> n;
        cout << "Is the item luxury? enter (1,0) = ";
        cin >> luxury;
        if (luxury == 1 || luxury == 0) {

            if (n > 100000 || luxury == 1) {
                n += n * 0.16;
            } else {
                n += n * 0.06;
            }

            cout << "Final price of the item: " << n << endl;
        } else {
            cout << "error: must enter 1 or 0" << endl;
        }

        cout << "enter 1 to continue ";
        cin >> key;

    } while (key == 1);

    return 0;
}
