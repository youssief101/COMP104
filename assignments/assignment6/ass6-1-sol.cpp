#include <iostream>
#include <iomanip> // Include the header for setting precision
using namespace std;

int main() {
    int n;

    while (true) {
        cout << "Enter the number of terms (or -1 to end the program): ";
        cin >> n;

        if (n == -1) {
            cout << "Ending the program." << endl;
            break;
        }

        double piApprox = 0.0;

        for (int i = 0; i <= n; i++) {
	  piApprox += pow(1, i) / (2 * i + 1);
        }
        piApprox *= 4;
        cout << "Approximate value of pi using " << n+1 << " terms: ";
        cout << fixed << setprecision(10) << piApprox << endl;
    }

    return 0;
}
