#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
  int h1, m1, s1, h2, m2, s2;
  char delimiter1, delimiter2;

  do {
    while (true) {
      // get the running times
      cout << "Enter running time 1 in HH:MM:SS format: ";
      cin >> h1 >> delimiter1 >> m1 >> delimiter2 >> s1;
  
      cout << "Enter running time 2 in HH:MM:SS format: ";
      cin >> h2 >> delimiter1 >> m2 >> delimiter2 >> s2;

      if (delimiter1 != ':' || delimiter2 != ':')
	cerr << "You have entered wrong format" << endl;
      else
	break;    // exit the inner loop when input is correct
    }

    // compute total time in seconds
    long int time1 = (h1 * 3600) + (m1 * 60) + s1;
    long int time2 = (h2 * 3600) + (m2 * 60) + s2;
    
    // classify the running times
    long int t1 = max(time1, time2);
    long int t2 = min(time1, time2);
  
    computeDifference(t1, t2);
    
    cout << "Do you want to calculate another difference? (y/n): ";
    char choice;
    cin >> choice;

    if (choice != 'y' && choice != 'Y')
      break; // Exit the loop if choice is not 'y' or 'Y'
  } while (true);
  return 0;
}
